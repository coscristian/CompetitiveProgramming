def shift_right(numbers: str):
    numbers = list(numbers)
    last = numbers[-1]
    for i in range(len(numbers)-1, 0, -1):
        numbers[i] = numbers[i - 1]
    numbers[0] = last
    
    return "".join(numbers)

def join_numbers(numbers):
    result = ""
    for i in numbers:
        result += i
    return result

def add_one_to_digits(numbers):
    result = ""
    for i in numbers:
        if i == "9": 
            result += "0"
        else:
            result += str(int(i)+ 1)
    return result

if __name__ == "__main__":
    n = int(input())
    numbers = input()
    
    smaller = ""
    cero_numbers = []
    first_cero_number = True
    while smaller not in cero_numbers:    
        if int(numbers[-1]) == 0:
            #Shift to right
            numbers = shift_right(numbers)
            joined_numbers = join_numbers(numbers)
            if first_cero_number:
                first_cero_number = False
                smaller = joined_numbers
                continue
            cero_numbers.append(joined_numbers)
        else:
            numbers = add_one_to_digits(numbers)
    print(min(cero_numbers))
      