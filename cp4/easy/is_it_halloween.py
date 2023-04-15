import datetime
d = datetime.date(2023, 10, 31).strftime("%b").upper()
d2 = datetime.date(2023, 12, 25).strftime("%b").capitalize().upper()
line = input().split()
halloween = line[0] == d and line[1] == "31"
jesus = line[0] == d2 and line[1] == "25"
print("yup" if halloween or jesus else "nope")
