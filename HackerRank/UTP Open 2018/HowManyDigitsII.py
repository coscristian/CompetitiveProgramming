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

def count_frecuencies(num: str):
    frec = [0, 0, 0, 0, 0, 0,
            0, 0, 0, 0]
    cont = 0
    for dig in num:
        frec[int(dig)] += 1
    return frec

if __name__ == '__main__':
    frecsquaresOf2 = []
    frecsquaresOf5 = []
    
    cin = Input()
    cout = Output()
    
    value2 = 1
    value5 = 1

    for i in range(5000+1):
        value2 *= 2
        value5 *= 5
        frecsquaresOf2.append(count_frecuencies(str(value2)))
        frecsquaresOf5.append(count_frecuencies(str(value5)))
    
    t = cin.next_int()
    while t > 0:
        a, b = cin.next_int(), cin.next_int()
        
        if a > b:
            frecDig = frecsquaresOf2[abs(a-b) - 1]
            cout.write("%d\n" % (b + frecDig[0]))
            for i in range(1, len(frecDig)):
                cout.write("%d\n" % frecDig[i])
            totalDigits = sum(frecDig) + b
            
        elif b > a:
            frecDig = frecsquaresOf5[abs(a-b) - 1]
            cout.write("%d\n" % (a+frecDig[0]))
            for i in range(1, len(frecDig)):
                cout.write("%d\n" % frecDig[i])
            totalDigits = sum(frecDig) + a
        else:
            cout.write("%d\n" % a)
            cout.write("%d\n" % 1)
            for i in range(8):
               cout.write("%d\n" % 0)
            totalDigits = a + 1
        cout.write("%d\n" % totalDigits)
        t -= 1
    cout.flush()