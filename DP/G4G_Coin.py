'''

URL: https://practice.geeksforgeeks.org/problems/coin-change/0
type: DP

'''



T = int(input())

while T:
	T -= 1
	CoinNum = int(input()); Coins = input().split(); Cent = int(input())
	Coins = [int(i) for i in Coins]
	Coins.sort()
	#d = [[0] * (CoinNum) for i in range(Cent+1)]; d[0][0] = 0
	table = [[0 for x in range(CoinNum)] for x in range(Cent+1)]
 
    # Fill the entries for 0 value case (n = 0)
	for i in range(CoinNum):
		table[0][i] = 1

# Fill rest of the table entries in bottom up manner
	for i in range(1, Cent+1):
		for j in range(CoinNum):

# Count of solutions including S[j]
			x = table[i - Coins[j]][j] if i-Coins[j] >= 0 else 0

# Count of solutions excluding S[j]
			y = table[i][j-1] if j >= 1 else 0

# total count
			table[i][j] = x + y
	print(table[Cent][CoinNum-1])
'''
	for i in range(CoinNum):
		d[Coins[i]][i] = 1

	for k in range(1,Cent+1):
		print(d[k])
	print()

	for i in range(1,Cent+1):
		for j in range(CoinNum):
			if i-Coins[j] >= 0:
				x = d[i-Coins[j]][j]
			else:
				x = 0
			if j > 0:
				y = d[i][j-1]
			else:
				y = 0
			d[i][j] = x + y

			print(i,j)
			for i in range(1,Cent+1):
				print(d[i])
			print()
	

	print(d[Cent][CoinNum-1])
	'''




#	for coin in range(Coins[CoinNum-1]):
#		if 

'''
	for coin in Coins:
		d[coin] = 1

	for i in range(1,Cent+1):
		for j in range(int(i/2)+1):
			if d[j] != 0 and d[i-j] != 0:
				if j == i-j:
					d[i] += d[j]
				else:
					d[i] += (d[j] * d[i-j])
				print(i, j, i-j, d)

	print(d, d[Cent])
'''

#	for coin in Coins:
#		d[coin] = 1
'''
	ans = 0
	for i in range(Cent/2):
		ans += (count(i) + count(Cent-i))

	print(ans)
'''





	


