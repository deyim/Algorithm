T = int(input())
while T:
	T -= 1
	N,R = input().split()
	N = int(N); R = int(R)
	d = [0 for i in range(R+1)]
	d[0] = 1
	#print(Combination(n,r))


	for n in range(1,N+1):
		j = min(n,R)
		while(j>0):
			d[j] = (d[j] + d[j-1])%1000000007
			j -= 1

	print(d[R])