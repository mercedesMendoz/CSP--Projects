print("Hello this is a finance calculator!\n")
income=float(input("What is your monthly income?:"))
rent=float(input("How much do you pay for rent?:"))
utilities=float(input("How much do you pay for utilites?:"))
grocieries=float(input("How much do you pay for groceries?:"))
transportation=float(input("How much do you pay for transportation?:"))
savings= income*.2
expenses= rent+utilities+grocieries+transportation
spending = income-expenses-savings
prent = rent/income*100
putilities = utilities/income*100
pgroceries = grocieries/income*100
ptransportation = transportation*100
psavings = savings/income*100
pexpenses = expenses/income*100


print(f"Your monthy income is ${income:.2f}\n")
print(f"Your monthy expenses are  ${expenses:.2f}\n")
print(f"Your monthy savings are ${savings:.2f}\n")
print(f"Your rent is {int(prent)}% of your monthly income\n")
print(f"Your utilities is {int(putilities)}% of your monthly income\n")
print(f"Your grocieries is {int(pgroceries)}% of your monthly income\n")
print(f"Your transportaion is {int(ptransportation)}% of your monthly income\n")
print(f"Your savings is {int(psavings)}% of your monthly income\n")
print(f"Your expenses is {int(pexpenses)}% of your monthly income\n")