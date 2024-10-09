age = 42
voter = "no"
if age >= 18 and voter == "yes":
   print("You are able to vote!")
elif age >= 16:
   print("You are old enough to drive ")
elif age >= 15:
   print("You are old enough to have a learners permit")
elif age >= 5:
   print("You are old enough to go to school")
else:
      print("You are too young to go to school")