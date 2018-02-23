'''

	Type: DP
	URL: https://practice.geeksforgeeks.org/problems/number-that-are-not-divisible/0
	TC: 
Input
3
200
400
500

Output
47
91
115

'''


T = int(input())
#divisor = [2,3,4,5,6,7,8,9,10]
minus = [2,3,5,7,30,42,70,105]
plus = [6,10,14,15,21,35,210]

while T:
	T -= 1
	N = int(input())
	Targ = N

	for i in minus:
		minee = int(N/i)
		Targ -= minee
	for j in plus:
		plee = int(N/j)
		Targ += plee

	print(Targ)


#Stack = []
#maxNum = 1
#Stack.insert(0,maxNum); nums = 1




'''
#First try 

while T:
	T -= 1
	N = int(input())
	
	maxNum = Stack[0]

	while N > maxNum:
		maxNum += 1

		flag = False
		for i in divisor:
			if (maxNum % i) == 0:
				flag = True

		if flag == False:
			Stack.insert(0,maxNum)
			#print("insert", maxNum)
			nums += 1
		else:
			flag = True

	print(nums)
'''






