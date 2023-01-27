def read_values():
    return list(map(int, input().split()))

def shrink_list(data):
    for num in data:
        if num == 0:
            data.remove(num)
            data.append(0)
    return data

def print_data(data):
    for num in data:
        print(num, end=" ")

if __name__ == '__main__':
    print_data(shrink_list(read_values()))