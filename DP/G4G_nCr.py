#https://practice.geeksforgeeks.org/problems/ncr/0

'''
def Combination(n,r):
	global d
	#print(n,r)
	if n == r or r == 0 : 
		d[n][r] = 1
	elif r == 1: 
		d[n][r] = n

	if d[n][r] == 0 and n > 0 and r >= 0:
		d[n][r] = (Combination(n-1,r-1) + Combination(n-1,r))%1000000007
	return d[n][r]
'''

def binomial1(n,r):
	C =



T = int(input())
while T:
	T -= 1
	N,R = input().split()
	N = int(N); R = int(R)
	d = [[0]*(R+2) for i in range(N+2)]
	#print(Combination(n,r))


	for n in range(N+1):
		for r in range(min(n,N)+1):
			if n == r or r == 0 : 
				d[n][r] = 1
			elif r == 1: #unnecessary condition since n will converge into 1 when r is 1
				d[n][r] = n
			elif d[n][r] == 0 and n > 0 and r >= 0:
				d[n][r] = (d[n-1][r-1] + d[n-1][r])%1000000007

	print(d[n][r])













  