def check_eligible(line: str):
	name = line[0]	
	began_year = int(line[1][:4])
	birth_year = int(line[2][:4])
	courses = int(line[3])
	if began_year >= 2010 or birth_year >= 1991:
		return "eligible"
	if courses >= 41:
		return "ineligible"	
	return "coach petitions"		
	
t = int(input())
while t > 0:
	line = input().split()
	print(line[0] + " " + check_eligible(line))
	t-=1

