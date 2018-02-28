T = int(input())

while T:
	T -= 1
	N = int(input())

	inputString = input().split()
	nums = [int(i) for i in inputString]
	d = [1]*N;

	for i in range(N):
		for j in range(0,i):
			if (nums[i] > nums[j]) and (d[i] < d[j]+1):
				d[i] = d[j]+1
				#print(j,i,d)

	ans = 0
	for x in d:
		if ans < x:
			ans = x

	print(ans)


'''
	maxNum = nums[0]
	for i in range(1,N):
		if nums[i] > maxNum:
			d[i] = d[i-1] + 1
			maxNum = nums[i]
			print(maxNum, end=" ")
		else:
			d[i] = d[1]

	print("\n", d[N-1])
'''

'''
	ISsoFar = 1; IScur = 1; maxNum = nums[0]
	for i in range(1,N):
		if maxNum < nums[i]: # increasing
			IScur += 1
			if IScur > ISsoFar:
				ISsoFar = IScur
				maxNum = nums[i]
		else: # not increasing
			IScur = 0

	print(ISsoFar)
'''