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

if __name__ == '__main__':
    squaresOf2 = []
    squaresOf5 = []
    digitsSquaresOf2 = []
    digitsSquaresOf5 = []

    value2 = 1
    value5 = 1
    squaresOf2.append(value2)
    squaresOf5.append(value5)
    digitsSquaresOf2.append(1)
    digitsSquaresOf5.append(1)

    for i in range(1, 10000+1):
        value2 *= 2
        value5 *= 5
        squaresOf2.append(value2)
        squaresOf5.append(value5)
        digitsSquaresOf2.append(len(str(value2)))
        digitsSquaresOf5.append(len(str(value5)))

    cin = Input()
    cout = Output()

    t = cin.next_int()

    while t > 0:
        a, b = cin.next_int(), cin.next_int()

        if a > b:
            totalDigits = digitsSquaresOf2[abs(a-b)] + b  
        elif b > a:
            totalDigits = digitsSquaresOf5[abs(a-b)] + a
        else:
            totalDigits = a + 1
        cout.write("%d\n" % totalDigits)
        t -= 1
    cout.flush()