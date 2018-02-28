'''

URL:  https://practice.geeksforgeeks.org/problems/path-in-matrix/0
TYPE: DP
2
3
0 1 2 3 4 5 6 7 8
2
348 391 618 193
'''

T = int(input())

while T:
	T -= 1
	N = int(input())

	inputNums = input().split(); nums = []
	inputNums = [int(x) for x in inputNums]

	for i in range(N):
		nums.append(inputNums[i*N:(i+1)*N])

	d = [[0]*N for i in range(N)]

	for i in range(N):
		for j in range(N):
			if i == 0:
				d[i][j] = nums[i][j]
			if j > 0 and j < N-1:
				d[i][j] = max(d[i-1][j-1], d[i-1][j], d[i-1][j+1])+nums[i][j]
			elif j ==0 :
				d[i][j] = max(d[i-1][j], d[i-1][j+1])+nums[i][j]
			else:
				d[i][j] = max(d[i-1][j], d[i-1][j-1])+nums[i][j]

	ans = 0
	for i in range(N):
		if ans < d[N-1][i]:
			ans = d[N-1][i]

	print(ans)