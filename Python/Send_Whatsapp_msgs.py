#Before Running, Please do
#pip install webbrowser
#pip install pyautogui

import webbrowser as web
import pyautogui as pyta
import time
lel=input('Is Your Qr Code Scanned on ur default Browser? {Y/N}')
if lel=='Y':
    print("in 10 seconds, Please scan the qr code visible on your screen with whatsapp scanner")
    time.sleep(10)
    web.open("https://web.whatsapp.com")
    print("cool")
else:
    contact=input("Enter the Contact you want to send a message to:(please insert country code too")
    message=input("Enter the Message You wanna pass on")
    

def send_msg(number,message):
    print("Contact=",contact,"\n","and Message =",message,"would be sent in 20 seconds")
    time.sleep(10)
    web.open('https://web.whatsapp.com/send?phone=%27+{}+%27&text='.format(number))
    time.sleep(20)
    pyta.write(message)
    pyta.press('enter')

send_msg(contact,message)
  


