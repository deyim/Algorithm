binNum = bin(1775)

preprePosition = 0
prePosition = 0
curPosition = 0

for i in range(2,len(binNum)):
	if binNum[i] == '0':
		preprePosition = prePosition
		prePosition = curPosition
		curPosition = i
		












binNum = bin(1775)


interval = [0]
for i in range(2,len(binNum)):
	if binNum[i] == '0':
		interval.append(i-2)

interval.append(len(binNum)-2)
print(interval)

maxLength = -100
for i in range(2,len(interval)):
	length = interval[i] - interval[i-2] -1
	if maxLength < length:
		maxLength = length


print(maxLength)

