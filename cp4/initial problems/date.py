from datetime import date

s = date(2010, 8, 9)
t = date.today()
print(s.strftime("%a"))
print("{} day(s) ago".format((t-s).days))

