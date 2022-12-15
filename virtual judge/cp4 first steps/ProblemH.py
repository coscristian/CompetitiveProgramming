if __name__ == "__main__":
    t = int(input())
    while t > 0:
        n = int(input())
        ans = abs((n * 567 // 9 + 7492) * 235 // 47 - 498) // 10 % 10
        print(ans)
        t -= 1
