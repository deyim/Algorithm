def makeParens(num, openNum, closeNum, curArray, curIndex):
	print(curArray)
	if openNum < closeNum:
		return

	if openNum + closeNum == num*2:
		result.append(''.join(curArray))
		return

	if openNum < num:
		curArray[curIndex] = '('
		makeParens(num, openNum+1, closeNum, curArray, curIndex+1)

	if closeNum < openNum:
		curArray[curIndex] = ')'
		makeParens(num, openNum, closeNum+1, curArray, curIndex+1)



# def makeParens(num, openNum, closeNum, parentheses, curIndex):
# 	curArray = parentheses

# 	if openNum < closeNum:
# 		return

# 	if openNum + closeNum == num*2:
# 		result.append(''.join(curArray))
# 		return

# 	if openNum < num:
# 		curArray[curIndex] = '('
# 		makeParens(num, openNum+1, closeNum, curArray, curIndex+1)

# 	if closeNum < openNum:
# 		curArray[curIndex] = ')'
# 		makeParens(num, openNum, closeNum+1, curArray, curIndex+1)



n = 3
result = []
parentheses = ['('] + ['']*(n*2-1)
makeParens(n, 1, 0, parentheses, 1)
print(result)