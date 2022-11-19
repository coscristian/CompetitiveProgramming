
def searchElement(frec):
    for key, value in frec.items():
        if value == 1:
            return key
    
def fillDict(data: list):
    frec = {}
    for i in data:
        frec[int(i)] = 0
    return frec

if __name__ == "__main__":
    t = int(input())
    while t > 0:
        n = int(input())
        pos = 1
        pos_dict = {}
        data = input().split()
        frec = fillDict(data)
        while n > 0:
            frec[int(data[pos-1])] += 1 
            pos_dict[int(data[pos-1])] = pos
            pos += 1
            n -= 1
        unique_element = searchElement(frec)
        print(pos_dict[unique_element])
        t -= 1    