def count(line):
    vowels_ascii = [97, 101, 105, 111, 117] #Ascii values for vowels
    total_values = [0, 0] #total vowels per line, total consonants per line
    for letter in line:
        ascii_value = ord(letter.lower())
        if ascii_value in vowels_ascii:
            total_values[0] += 1 # The letter is a vowel
        elif ascii_value > 96 and ascii_value < 123:
            total_values[1] += 1 # The letter is a consonant
    return total_values

def check_letters(amount_lines):
    total_vowels = 0 
    total_consonants = 0
    while(amount_lines > 0):
        line = input()
        total_values = count(line) # Count total vowels and consonants per line
        total_vowels += total_values[0]
        total_consonants += total_values[1]
        amount_lines -= 1
    return [total_vowels, total_consonants]

def read_amount_lines():
    return int(input("How many lines will there be? "))

def print_values(vowels, consonants):
    print(f"Number of vowels: {vowels}")
    print(f"Number of consonants: {consonants}")

if __name__ == '__main__':
    amount_lines = read_amount_lines()
    vowels, consonants = check_letters(amount_lines)
    print_values(vowels, consonants)
