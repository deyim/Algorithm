'''
failed test cases
1) 10 / 1 1 1 1 1 1 1 1 1 1
2) 1 / 1423
'''

def LAP(ary, N):

    #cnt init
    if N == 1:
        cnt = 1
    else:
        cnt = 2

    #2d array init
    d = [[0]*(N) for _ in range(N)]
    for i in range(N):
        d[i][N-1] = 2

    #dp table
    for j in range(N-2, 0,-1):
        i = j-1; k = j+1
        while(i>=0 and k<=N-1):
            if ary[j]*2 > ary[k]+ary[i]:
                k+=1
            elif ary[j]*2 < ary[k]+ary[i]:
                d[i][j]=2 #위로 더 progression이 될 리 없으니깐.. 
                i-=1
            else: #ary[j] * 2 == ary[k] + ary[i]
                d[i][j] = d[j][k]+1
                cnt = max(cnt, d[i][j])
                i -= 1; k += 1
        while i>= 0:
            d[i][j] = 2
            i -= 1
        
    return cnt

n = int(input())
for i in range(n):
    size = int(input())
    array = [int(_) for _ in input().split()]
    print(LAP(array, size))
