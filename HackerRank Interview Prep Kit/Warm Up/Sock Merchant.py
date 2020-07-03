def solution():
    n = int(input())
    arr = list(map(int,input().split()))
    count = 0
    dic = {}

    for num in arr:
        if num not in dic:
            dic[num] = True
        else :
            count += 1
            del dic[num]
    
    print(count)


if __name__ == '__main__':
    solution()