import math

def solution():
    arr = []
    for i in range(6):
        arr.append(list(map(int, input().split())))

    max_sum = -math.inf
    for rowIdx in range(1, 5):
        for colIdx in range(1, 5):
            val = arr[rowIdx][colIdx] + arr[rowIdx-1][colIdx-1] + arr[rowIdx + 1][colIdx+1] + arr[rowIdx-1][colIdx+1] + arr[rowIdx+1][colIdx-1] + arr[rowIdx-1][colIdx] + arr[rowIdx+1][colIdx]
            if val > max_sum:
                max_sum = val

    return max_sum


if __name__ == '__main__':
    print(solution())
