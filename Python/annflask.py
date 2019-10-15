from flask import Flask, render_template, request
import sqlite3 as sql
import hashlib
import numpy as np
import matplotlib.pyplot as plt
import pandas as pd
import keras
from keras.models import Sequential
from keras.layers import Dense
from sklearn.preprocessing import LabelEncoder, OneHotEncoder
from sklearn.model_selection import train_test_split
from sklearn.preprocessing import StandardScaler
from sklearn.metrics import confusion_matrix
# import ann

app = Flask(__name__)

@app.route('/')
def home():
   return render_template('login_page.html')

@app.route('/newregister', methods=['POST', 'GET'])
def newregister():
   return render_template("newregister.html")

@app.route('/newregisterdone', methods=['POST', 'GET'])
def newregisterdone():
   msg="default"
   value=[0.0]
   if request.method == 'POST':
      msg="posted"
      try:
         msg="tried"
         customerid = str(request.form['customerid'])
         password = str(request.form['pass'])
         # password = hashlib.sha256(password.encode()).hexdigest()
         print(password)
         name = request.form['name']
         location = request.form['location']
         if location=="France":
            value.append(0)
         if location=="Germany":
            value.append(1)
         if location=="Spain":
            value.append(2)
         credit = int(request.form['creditscore'])
         value.append(credit)
         gender = request.form['gender']
         if gender=="Female":
            value.append(0)
         else:
            value.append(1)
         age = int(request.form['age'])
         value.append(age)
         tenure = int(request.form['tenure'])
         value.append(tenure)
         balance = int(request.form['balance'])
         value.append(balance)
         products = int(request.form['products'])
         value.append(products)
         card = int(request.form['credit'])
         value.append(card)
         member = int(request.form['member'])
         value.append(member)
         salary=int(request.form['salary'])
         value.append(salary)
         print("THE VALUE IS :::::::::")
         print(value)
         dataset = pd.read_csv('Churn_Modelling.csv')
         X = dataset.iloc[:, 3:13].values
         y = dataset.iloc[:, 13].values
         labelencoder_X_1 = LabelEncoder()
         X[:, 1] = labelencoder_X_1.fit_transform(X[:, 1])
         labelencoder_X_2 = LabelEncoder()
         X[:, 2] = labelencoder_X_2.fit_transform(X[:, 2])
         onehotencoder = OneHotEncoder(categorical_features=[1])
         X = onehotencoder.fit_transform(X).toarray()
         X = X[:, 1:]
         X_train, X_test, y_train, y_test = train_test_split(X, y, test_size=0.2, random_state=0)
         sc = StandardScaler()
         X_train = sc.fit_transform(X_train)
         X_test = sc.transform(X_test)
         classifier = Sequential()
         classifier.add(Dense(units=6, kernel_initializer='uniform', activation='relu', input_dim=11))
         classifier.add(Dense(units=6, kernel_initializer='uniform', activation='relu'))
         classifier.add(Dense(units=1, kernel_initializer='uniform', activation='sigmoid'))
         classifier.compile(optimizer='adam', loss='binary_crossentropy', metrics=['accuracy'])
         classifier.fit(X_train, y_train, batch_size=5, epochs=10)

         new_prediction = classifier.predict(sc.transform(np.array([value])))
         new_prediction=float(new_prediction[0][0])
         print(new_prediction)
         new_prediction=int(100*new_prediction)
         print(new_prediction)
         new_prediction=str(new_prediction)
         print(msg)
         con = sql.connect("bank.db")
         cur = con.cursor()
         print("Connected")
         print(customerid)
         print(password)

         



         cur.execute("INSERT INTO login VALUES (?,?)",(customerid,password))
         msg="reached1"
         print(msg)
         cur.execute("INSERT INTO employee(customerid,name,creditscore,location,gender,age,tenure,balance,products,card,member,salary,prediction) VALUES (?,?,?,?,?,?,?,?,?,?,?,?,?)",(customerid,name,credit,location,gender,age,tenure,balance,products,card,member,salary,new_prediction))
         msg="reached2"
         print(msg)
         con.commit()
         msg = "Record successfully added"
      except:
         con.rollback()
         msg = "error in insert operation"
      finally:
         return render_template("login_not_page.html", error=msg)
         con.close()


      # except:
      #    con.rollback()
      #    msg = "error in insert operation"






@app.route('/postlogin', methods=['POST', 'GET'])
def postlogin():
   if request.method == 'POST':
      try:
         customerid = request.form['customerid']
         password=request.form['password']
         # password=hashlib.sha256(password.encode()).hexdigest()
         print(customerid)
         print(password)
         con=sql.connect("bank.db")
         cur = con.cursor()
         cur.execute("SELECT * FROM login")
         rows = cur.fetchall()
         c=0
         for row in rows:
            print(row[0])
            if customerid == row[0]:
               if password==row[1]:
                  con = sql.connect("bank.db")
                  con.row_factory = sql.Row
                  cur = con.cursor()
                  cur.execute("select * from employee")
                  rows = cur.fetchall();
                  c=1
                  break
            else:
               msg="Login Not Found"
      except:
         con.rollback()
         msg = "Login Error"
      finally:
         if(c==1):
            return render_template("employeelist.html", rows=rows)
            con.close()
         else:
            error = 'Invalid username or password. Please try again!'
            return render_template('login_not_page.html', error=error)

if __name__ == '__main__':
   app.run(debug=True)