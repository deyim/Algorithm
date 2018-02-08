#https://practice.geeksforgeeks.org/problems/nth-fibonacci-number/0

def getFibo(n):
	global d
	if n < 1:
		return 0
	if d[n] == -1:
		d[n] = getFibo(n-1) + getFibo(n-2)
	return d[n]%1000000007

N = int(input())
d = [-1] * 1000
d[0] = 0; d[1] = 1; d[2] = 1;

while N != 0:
	N -= 1
	M = int(input())
	print(getFibo(M))

#1 2 3 4 5 6 7  8  9  10  11
#1 1 2 3 5 8 13 21 34 55  89 144 