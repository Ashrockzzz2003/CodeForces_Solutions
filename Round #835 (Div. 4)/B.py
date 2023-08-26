for _ in range(int(input())):
    
    n = int(input())
    s = str(input())
    s = list(set(s))
    s.sort()
    print(ord(s[-1]) - 96)
