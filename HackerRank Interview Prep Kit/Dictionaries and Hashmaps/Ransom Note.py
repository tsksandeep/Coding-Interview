def solution():
    words1, words2 = map(int,input().split())
    sentence1 = list(map(str, input().split()))
    dic = {}

    for word in sentence1:
        if word not in dic:
            dic[word] = 0
        dic[word] += 1

    sentence2 = list(map(str, input().split()))

    for word in sentence2:
        if word not in dic:
            return "No"
        else:
            dic[word] -= 1
            if dic[word] == 0:
                del dic[word]

    return "Yes"

if __name__ == "__main__":
    print(solution())