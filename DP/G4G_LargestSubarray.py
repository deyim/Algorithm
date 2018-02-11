'''

	name: Kadane's problem
	type: DP, largest sum contiguous subarray
	url: https://practice.geeksforgeeks.org/problems/kadanes-algorithm/0

'''

T = int(input())

while T:
	T -= 1
	N = int(input())
	inputNum = input().split()
	numbers = [int(x) for x in inputNum]

	maxEndingHere = 0; maxSoFar = numbers[0];
	for i in range(N):
		maxEndingHere += numbers[i]
		if(maxEndingHere < 0): 
			maxEndingHere = 0
		elif(maxSoFar < maxEndingHere):
			maxSoFar = maxEndingHere

	print(maxSoFar)
'''
	d = [0] * N
	d[0] = numbers[0]

	maxResult = 0; plus = 0; minus = 0;# start = 0; end = 0;
	if numbers[0] >= 0:
		flag = 1
	else:
		flag = 0
	#flag = 0: 음수
	#maxResult = numbers[0]
	for i in range(1,N):
		if numbers[i] >= 0 and flag == 1: #양에서 양으로
			plus += numbers[i]
			maxResult = max(maxResult,plus)
			print(i,plus)
		elif numbers[i] >= 0 and flag == 0: # 음에서 양으로
			plus = numbers[i]
			flag = 1 
			print(i,plus)
		elif numbers[i] <0 and flag == 1 or i == N-1: # 양에서 음으로
			if maxResult + minus > 0:
				maxResult = maxResult + plus + minus
			else:
				maxResult = max(maxResult, plus)
			minus = numbers[i]
			flag = 0
			print(i,minus,"judging")			
		else: #음에서 음으로
			minus += numbers[i]
			print(i,minus)
		print(maxResult)

	print(maxResult)
'''
'''
2
8
1 -2 -1 2 3 -2 3 4
8
1 -2 -1 2 3 -10 3 4

'''
'''
	d = [[0]*N for i in range(N)]
	d[0][0] = numbers[0]

	maxResult = 0; start = 0 ; end = 0
	for i in range(N):
		for j in range(i+1,N):
			if end == j-1 and numbers[j] > 0:
				end = j
			#elif numbers[j] < 0: // nothing to do
			elif end != j-1 and numbers[j] >0:

'''



'''
	d = [0]*N; d[0] = numbers[0]
	start = 0; end = 0
	maxResult = numbers[0]

	for i in range(N):
		if d[i-1] == maxResult:
			d[i] = max(d[i-1] + numbers[i],d[i-1])
			if d[i] != d[i-1]:
				end = i;
			else:
				d[i] = -100000
		else:
			d[i] = max(maxResult, numbers[i])
		#print(d[i])
		if d[i] != d[i-1]: #
			#print(1,start,end)
			start = i; end = i
		else: #numbers[i] 버려
			#print(2,start,end)
			maxResult = d[i];
			end = i
		print(d)

	sumX = 0
	for i in range(start, end+1):
		sumX += i

	print(sumX)
'''

'''
3
4
-1 1 -2 3
4
-1 1 3 -2
4
1 2 -1 5
'''



