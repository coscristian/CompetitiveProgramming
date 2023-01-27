def check_move(c1, r1, c2, r2):
    sameColumn = c1 == c2
    sameRow = r1 == r2
    validDiagonal = abs(c1 - c2) == abs(r1 - r2)
    if sameColumn and sameRow or validDiagonal:
        return True
    return False

if __name__ == '__main__':
    c1 = int(input())
    r1 = int(input())
    c2 = int(input())
    r2 = int(input())
    if check_move(c1, r1, c2, r2):
        print("YES")
    else:
        print("NO")