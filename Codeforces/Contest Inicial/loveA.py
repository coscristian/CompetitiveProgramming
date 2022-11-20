import math

def countAes(string: str):
    count = 0
    for i in string:
        if i == "a":
            count += 1
    return count

def love_A(orig: str):
    s = orig
    flag = False
    pos = 0
    amount_aes = countAes(orig)
    while amount_aes <= math.ceil(len(s)/2):
        flag = True
        s = list(s)
        s.remove(orig[pos])
        s = "".join(s)
        pos += 1
    if flag:
        return len(s) + 1
    return len(s)
if __name__ == "__main__":
    print(love_A(input()))