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

'''
modulo by 1000000007
In most of the programming competitions, 
problems are required to answer the result in 10^9+7 modulo. 
The reason behind this is to have problems for large integers 
so that only efficient algorithms can solve them in allowed limited time.
'''