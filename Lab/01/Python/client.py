from tkinter import *
import json
import requests


def WeatherReload():
   r = requests.get('http://localhost:3000/raw').content.decode("UTF8")
   weather = json.loads(r)
   desc.config(text=str(weather["description"]))
   temp.config(text=str(weather["temperature"]) + "°C")


root = Tk()
root.title("Прогноз")
root.pack_propagate(0)

topF = Frame(root, bg="#00bfff", height=40)
topF.pack(fill=X)

midF = Frame(root, bg="#ffffff")
midF.pack(expand=True, fill=X)

BotF = Frame(root, bg="#00bfff", height=40)
BotF.pack(side=BOTTOM, fill=X)


city = Label(topF, font=("Calibri", 14), text="Симферополь", bg="#00bfff")
desc = Label(topF, font=("Calibri", 14), bg="#00bfff")
temp = Label(midF, font=("Calibri", 54), bg="white")

city.pack()
desc.pack()
temp.pack(expand=True)

WeatherReload()
root.mainloop()