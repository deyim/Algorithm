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
	print(numbers)