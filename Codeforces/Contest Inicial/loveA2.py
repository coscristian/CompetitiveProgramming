def love_A(orig: str):
    amount_aes = orig.count('a')
    half_length = len(orig) / 2
    
    if amount_aes > half_length:
        return len(orig)
    
    return 2*amount_aes - 1

if __name__ == "__main__":
    print(love_A(input()))