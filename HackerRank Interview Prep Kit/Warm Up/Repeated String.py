def solution():
    string = str(input())
    num = int(input())

    count = 0

    for val in string:
        if val == "a":
            count += 1
    
    mul = num // len(string)

    count *= mul

    rem = num % len(string)

    for val in string[:rem]:
        if val == "a":
            count += 1

    return count

if __name__ == '__main__':
    print(solution())