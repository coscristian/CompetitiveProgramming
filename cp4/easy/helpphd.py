n = int(input())
while n > 0:
	line = input()
	if line[0] != "P":
		print(eval(line))
	else:
		print("skipped")
	n-=1