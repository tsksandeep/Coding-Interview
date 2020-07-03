def solution():
    n, rot = map(int, input().split())
    arr = list(map(str,input().split()))

    netRotate = rot

    if rot >= n:
        netRotate = rot % n

    return(arr[netRotate:] + arr[:netRotate])

if __name__ == '__main__':
    arr = solution()
    print(" ".join(arr))