
####################   IMPORTS AND INITS  ################
import speedtest #speedtest-cli library
import logging #standard library for logging
import time
from datetime import datetime

####  Information shown while program is setting up connection to speedtest.com #######
print("Setting up connection to speedtest.com servers to begin testing connection speed.\nPlease wait, no interaction with program in needed.\nTests will automatically happen each 10 minutes\nTest measurement will be confirmed by console print\n\n")


####################  CODE  #####################

logging.basicConfig(filename="speedlog.txt",
                level=logging.INFO,
                format='%(levelname)s: %(asctime)s %(message)s',
                datefmt='%d/%m/%Y %H:%M:%S')


try:
     while True:
      speedtester = speedtest.Speedtest()
      speedtester.get_best_server() #getting best server for testing connection
      upload = speedtester.upload() #testing upload speed
      download = speedtester.download() #testing download speed
      uploadMbps = str(round(upload/1000000, 2)) #Changing unit from kbps to Mbps
      downloadMbps = str(round(download/1000000, 2)) #Changing unit from kbps to Mbps

      logging.info("\nConnection Speed: \n DOWNLOAD: "+ downloadMbps +"\n UPLOAD: "+uploadMbps+"\n\n ALL SPEEDS IN Mbps \n\n==========================================\n")
      print("speed measured \n \nConnection Speed: \n DOWNLOAD: "+ downloadMbps +"Mbps"+"\n UPLOAD: "+uploadMbps+" Mbps"+str(datetime.now())+"\n\n\n") #printing speed in terminal
      time.sleep(600) #waiting for 600 seconds
except speedtest.ConfigRetrievalError: #handling timeout while getting best server
      print("connection timeout         "+str(datetime.now()))
      logging.warning("\nexception: connection timeout")
      pass
except Exception as e: #handling unknown type of exception
      print("\nan error occured and halted execution of program\nafter you press any button as requested via command prompt application will close")
      logging.error("An exception occured and stopped execution of aplication. \nTRACEBACK:\n\n"+str(e))
      quit()