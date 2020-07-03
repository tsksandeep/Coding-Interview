def solution():
    n = int(input())
    arr = list(map(int,input().split()))
    count = 0
    idx = 0
    while True:
        if idx + 2 < n and arr[idx+2] == 0:
            idx += 2
            count += 1
        elif idx + 1 < n and arr[idx+1] == 0:
            idx += 1
            count += 1
        else:
            break
    return(count)



if __name__ == '__main__':
    print(solution())