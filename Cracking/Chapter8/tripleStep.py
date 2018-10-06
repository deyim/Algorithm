

def recurse(n):

	if n < 1:
		return 0
	elif steps[n] != -1:
		return steps[n]
	else:
		steps[n] = recurse(n-1) + recurse(n-2) + recurse(n-3)
	return steps[n]


def tripleStep(n):
	if n < 3: 
		steps = [0]*4
	else:
		steps = [0]*(n+1)
	steps[1] = 1
	steps[2] = 2
	steps[3] = 4
	for i in range(4,n+1):
		steps[i] = steps[i-1]+steps[i-2]\
		+steps[i-3]

	return steps[n]

n = 100
print(tripleStep(n))
if n < 3: 
	steps = [-1]*4
else:
	steps = [-1]*(n+1)
steps[1] = 1
steps[2] = 2
steps[3] = 4
print(recurse(n))