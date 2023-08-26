for _ in range(int(input())):
    n = int(input())
    S = str(input())
    d = {}
    for i in S:
        d[i] = 0
    for i in S:
        if d[i] == 0:
            d[i] += 2
        else:
            d[i] += 1
    total_baloons = 0
    for i in d:
        total_baloons += d[i]
    print(total_baloons)
