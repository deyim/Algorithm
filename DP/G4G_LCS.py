#https://www.geeksforgeeks.org/longest-common-subsequence/
T = int(input())

while T:
	T -= 1
	n1,n2 = input().split(); n1 = int(n1); n2 = int(n2)
	str1 = input() ; str2 = input()

	d= [[0]*(n2+1) for i in range(n1+1)]

	for i in range(1,n1+1):
		for j in range(1,n2+1): 
			if str1[i-1] == str2[j-1]:
				d[i][j] = d[i-1][j-1] + 1
			else: 
				d[i][j] = max(d[i-1][j], d[i][j-1])

	print(d[n1][n2])


'''

1
3 2
ABC
AC

'''