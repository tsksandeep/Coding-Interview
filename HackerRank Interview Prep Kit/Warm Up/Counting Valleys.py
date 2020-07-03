def solution():
    n = int(input())
    arr = str(input())
    count = 0
    temp = 0
    for val in arr:
        if val == "U":
            temp += 1
        if val == "D":
            if temp == 0:
                count += 1
            temp -= 1
            
    return count

if __name__ == '__main__':
    print(solution())