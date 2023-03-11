

def decimal_to_bin(n:int, result:str):
    if n == 0:
        return result
    result = str(n % 2) + result
    return decimal_to_bin(n // 2, result)

print(decimal_to_bin(5, ""))

