from bs4 import BeautifulSoup as soup
from urllib.request import urlopen as uReq

serach = input("enter the product you want to search")
my_url="https://www.flipkart.com/search?q=" + serach + "&otracker=search&otracker1=search&marketplace=FLIPKART&as-show=on&as=off"
print(my_url)
uClient = uReq(my_url)
page_html = uClient.read()
uClient.close()
page_soup = soup(page_html, "html.parser")
containers = page_soup.findAll("div", {"class": "bhgxx2 col-12-12"})
print(len(containers))


for i in range(3,len(containers)-5):
    container=containers[i]
    name=container.findAll("div", {"class":"_3wU53n"})
    print("Product " +" :  "+ name[0].text)
    price = container.findAll("div", {"class": "_1vC4OE _2rQ-NK"})
    print("Price : "+price[0].text)
    ratings = container.findAll("div", {"class": "hGSR34"})
    print("Ratings : " + ratings[0].text)
