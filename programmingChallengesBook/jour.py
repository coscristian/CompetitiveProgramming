import math
line = input()

cont = 0

for i in range(len(line) - 1):
    if line[i] == line[i+1]:
        cont += 1
        
print(math.ceil(cont / 2))