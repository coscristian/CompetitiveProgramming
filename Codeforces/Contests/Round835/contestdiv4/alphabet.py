
if __name__ == "__main__":
    t = int(input())
    while t > 0:
        l = int(input())
        letters = list(input())
        ascii = list(map(lambda x: ord(x), letters))
        print(max(ascii) - 96)
        t -= 1