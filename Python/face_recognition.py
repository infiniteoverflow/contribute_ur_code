import cv2
import numpy as np


face_cascade = cv2.CascadeClassifier('haarcascade_frontalface_default.xml')
vid = cv2.VideoCapture('your_file_name')

#In the [your_file_name] mention the Video File that you want to process and detect the Face in

while True:
    ret, frame = vid.read()
    frame = cv2.resize(frame,(int(frame.shape[1]/2),int(frame.shape[0]/2)))
    gray = cv2.cvtColor(frame, cv2.COLOR_BGR2GRAY)       
    faces = face_cascade.detectMultiScale(gray, 1.3, 5)
    for (x,y,w,h) in faces:
        cv2.rectangle(frame,(x,y),(x+w,y+h),(255,0,0),2)        
    cv2.imshow('Video', frame)
    
    if cv2.waitKey(1) == 27:
        break

vid.release()
cv2.destroyAllWindows()
    

    


