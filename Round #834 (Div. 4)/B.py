def missingElements(A, m):
    A_max = max(A)
    sum = 0
    for i in range(A_max):
        if i+1 not in A:
            A.append(i+1)
            sum += (i+1)
    
    return (A, sum)

def isPermutation(A, s, sum):
    
    if(sum == s):
        return "YES"
    
    if(sum > s):
        return "NO"
    
    i = max(A)
    
    
    while(sum <= s):
        i += 1
        A.append(i)
        sum += i
        if(sum == s):
            return "YES"
    
    return "NO"
        


for _ in range(int(input())):
    m, s = map(int, input().split(' '))
    A = list(map(int, input().split(' ')))
    
    A, sum = missingElements(A, m)
    print(isPermutation(A, s, sum))
