
for _ in range(int(input())):
    n = int(input())
    # n -> Number of words per person
    data = []
    d = {}
    scores = []
    for i in range(3):
        data.append(list(input().split(' ')))

    for i in range(3):
        for j in data[i]:
            d[j] = 0

    for i in range(3):
        for j in data[i]:
            d[j] += 1

    for i in d:
        if d[i] == 1:
            d[i] = 3
        elif d[i] == 2:
            d[i] = 1
        elif d[i] == 3:
            d[i] = 0

    for i in range(3):
        score = 0
        for j in data[i]:
            score += d[j]
        scores.append(str(score))

    print(' '.join(scores))