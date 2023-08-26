for _ in range(int(input())):
    n = int(input())
    A = list(map(int, input().split(' ')))
    B = sorted(A)
    for i in range(len(A)):
        if A[i] == B[-1]:
            A[i] -= B[-2]
        else:
            A[i] -= B[-1]
        A[i] = str(A[i])
    print(' '.join(A))
