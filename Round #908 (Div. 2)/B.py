"""
1 2
2 3
1 3

1 2 3 2 2 3

1 1 1 1 1 1
1 1 1 1 2 1
1 1 1 1 2 3 (final)
"""

for _ in range(int(input())):
    n = int(input())
    A = list(map(int, input().split()))

    B = [1 for _ in range(n)]
    
    # Range of A[i] is [1, 100]
    freq = [0 for _ in range(101)]

    case_1_flag = False
    case_2_flag = False

    for i in range(n):
        freq[A[i]] += 1

        if (freq[A[i]] == 2):
            if not case_1_flag:
                B[i] = 2
                case_1_flag = True
            elif not case_2_flag:
                B[i] = 3
                case_2_flag = True
    
    if not case_2_flag: # Means exactly only one is satisfied
        print("-1")
    else:
        print(" ".join(map(str, B)))
    
    
            
            


