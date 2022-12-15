import math

if __name__ == "__main__":
    t = int(input())
    while t > 0:
        n = int(input())
        rows = int((-1 + math.sqrt(1 + 8 * n)) // 2)
        print(rows)
        t -= 1
