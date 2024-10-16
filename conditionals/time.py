import datetime

currenttime = datetime.datetime.now()

print(currenttime.hour)

if currenttime.hour <= 12:
    print("Good Morning!")
elif currenttime.hour <= 18:
    print("Good Afternoon!")
else:
    print("Good Evening!")

