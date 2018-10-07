

def numOfPaying(coins, amount):
	d = [0]*(amount+1)

	d[0] = 1

	for coin in coins:
		for i in range(1,amount+1):
			if i >= coin:
				d[i] += d[i-coin]

	print(d)
	return d[amount]

coins = [1,5,10,25]
n = 30
print(numOfPaying(coins, n))