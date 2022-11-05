t = int(input())

while t > 0:
    string1 = input()
    string2 = input()

    while(True):
        aux1 = string1
        string1 = string1.replace("AA","").replace("CC","").replace("B","")
        if aux1 == string1:
            break
    while(True):
        aux2 = string2
        string2 = string2.replace("AA","").replace("CC","").replace("B","")
        if aux2 == string2:
            break
        
    if string1 == string2:
        print("YES")
    else:
        print("NO")    
    t -= 1
