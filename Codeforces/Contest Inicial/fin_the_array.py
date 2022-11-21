
def find_the_array(s: int):
    array = []
    sum = 0
    start = 1
    while sum < s:
        array.append(start)
        sum += start
        
        can_add2 = s - sum >= 2
        cand_add1 = s - sum == 1
        
        if can_add2:
            start += 2
        elif cand_add1:
            start +=1
    return len(array)

if __name__ == "__main__":
    t = int(input())
    while t > 0:
        print(find_the_array(int(input())))    
        t -=1
    