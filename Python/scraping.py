#Libraries for scraping and cleaning
import re
import requests
from bs4 import BeautifulSoup

#Libraries for analyzing and visualizing the data
import pandas as pd
import csv
from datetime import datetime
from datetime import datetime

#Scraping out the raw html code of nairaland home page
url = "http://www.nairaland.com"
raw_html = requests.get(url)

#printing the raw_html.text code
raw_data = raw_html.text
#Using BeautifulSoup to read html into xml and save it into an object
soup_data = BeautifulSoup(raw_data, "lxml")
#displaying only the part of the data needed (<td>)
print(soup_data("td"))

#Ignoring the tag cell in a table & reading out only the text 
for data in soup_data("td"):
    print (data.text)

#Ignoring memebers whose age are not displayed
member_found = None
re_match = "[\w]+\([\d]+\)"
for data in soup_data("td"):
    data_found = re.findall(re_match, data.text)
    if data_found:
        member_found = data_found
    print(member_found)

#Further clean up the list and seperate Username from age removing the brace
member_found_replaced = [x.replace(")", "") for x in member_found]
print(member_found_replaced)

#Now split "member_found_replaced" based on '(' between the usernames and age
for y in member_found_replaced:
    member_cleaned = y.split("(")
    print(member_cleaned)

#combining all the list into a dictionary   
member_cleaned={}
for y in member_found_replaced:
 temp_data = y.split("(")
 member_cleaned[temp_data[0]] = int(temp_data[1])
print(member_cleaned)

#Converting the dictionary into a list to work with pandas Dataframe
columns_name = ["Username", "Age"]
df = pd.DataFrame(list(member_cleaned.items()), columns = columns_name )
print(df)

#Adding a column for todays date
todays_date = datetime.now().date()
df["Date"] = todays_date
print(df)

#Saving the dataframe into a csv file & naming it with the current date
csv_name = todays_date.strftime("%Y%m%d")
df.to_csv(csv_name + ".csv")

df.describe()
df.sort_values(by="Age",ascending=False)[:10]
print(df)
