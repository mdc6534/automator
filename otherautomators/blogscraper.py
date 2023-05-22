import csv
from bs4 import BeautifulSoup
import requests

rows = []

url = input("Enter URL: ")
page = requests.get(url)
pagecontent = page.content

parser = BeautifulSoup(pagecontent, "html.parser")
content = parser.find("a", href=True)

for item in content:
    link = content["href"]
    row = {"link": link}
    rows.append(row)