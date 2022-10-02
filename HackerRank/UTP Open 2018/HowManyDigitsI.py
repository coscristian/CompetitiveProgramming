from collections import deque
import sys
import io

class Input:

    def __init__(self):
        self.data = deque([token for line in sys.stdin.readlines() for token in line.split()])

    def next(self):
        return self.data.popleft()

    def next_int(self):
        return int(self.data.popleft())

    def next_array(self, n, parser):
       return [parser(self.next()) for _ in range(n) ]

class Output:

    def __init__(self):
        self.data = io.StringIO()

    def write(self, d):
        d = str(d)
        self.data.write(d)

    def flush(self):
        sys.stdout.write(self.data.getvalue())
        self.data.close()
        
def count_frecuencies(num: int):
    frec = [0,0,0,0,0,0,0,0,0]
    for dig in num:
        if dig == "1":
            frec[1] += 1
        elif dig == "2":
            frec[2] += 1
        elif dig == "3":
            frec[3] += 1
        elif dig == "4":
            frec[4] += 1
        elif dig == "5":
            frec[5] += 1
        elif dig == "6":
            frec[6] += 1
        elif dig == "7":
            frec[7] += 1
        elif dig == "8":
            frec[8] += 1    
        elif dig == "9":
            frec[9] += 1


if __name__ == '__main__':
    frecsquaresOf2 = []
    frecsquaresOf5 = []
    digitsSquaresOf2 = []
    digitsSquaresOf5 = []

    value2 = 1
    value5 = 1
    frecsquaresOf2.append([0,0,0,0,0,0,0,0,0])
    frecsquaresOf5.append([0,0,0,0,0,0,0,0,0])
    digitsSquaresOf2.append(1)
    digitsSquaresOf5.append(1)

    for i in range(1, 10000+1):
        value2 *= 2
        value5 *= 5
        frecsquaresOf2.append(count_frecuencies(str(value2)))
        frecsquaresOf5.append(count_frecuencies(str(value5)))
        digitsSquaresOf2.append(len(str(value2)))
        digitsSquaresOf5.append(len(str(value5)))

    cin = Input()
    cout = Output()

    t = cin.next_int()

    while t > 0:
        a, b = cin.next_int(), cin.next_int()
        
        for digsNum in digi
        

        if a > b:
            totalDigits = digitsSquaresOf2[abs(a-b)] + b  
        elif b > a:
            totalDigits = digitsSquaresOf5[abs(a-b)] + a
        else:
            totalDigits = a + 1
        cout.write("%d\n" % totalDigits)
        t -= 1
    cout.flush()