def minProduct(a, b, ans):
	
	if b == 0:
		return ans
	ans += a
	return minProduct(a,b-1,ans)

def minProduct2(a,b):
	bigger = smaller = 0
	if a>=b:
		bigger,smaller = a,b
	else:
		bigger,smaller = b,a
	return minProductHelper2(bigger,smaller)
def minProductHelper2(bigger,smaller):
	if smaller == 0:
		return 0
	elif smaller == 1:
		return bigger

	s = smaller >> 1
	side2 = side1 = minProductHelper2(bigger,s)
	if smaller % 2 == 1:
		side2 = minProductHelper2(bigger, smaller-s)

	return side1 + side2


def minProduct3(a,b):
	bigger = smaller = 0
	if a>=b:
		bigger,smaller = a,b
	else:
		bigger,smaller = b,a

	d = [-1] * (smaller+1)
	return minProductHelper3(bigger,smaller,d)
def minProductHelper3(bigger,smaller,d):
	if smaller == 0:
		return 0
	elif smaller == 1:
		return bigger
	elif d[smaller] != -1:
		return d[smaller]

	s = smaller >> 1
	side2 = side1 = minProductHelper3(bigger,s,d)
	if smaller % 2 == 1:
		side2 = minProductHelper3(bigger, smaller-s,d) 
	d[smaller] = side1 + side2
	return d[smaller]

def minProduct4(a,b):
	bigger = smaller = 0
	if a>=b: bigger,smaller = a,b
	else: bigger,smaller = b,a
	return minProductHelper4(bigger,smaller)

def minProductHelper4(bigger,smaller):
	if smaller == 0 : return 0
	elif smaller == 1: return bigger

	extra = 0
	if smaller % 2:
		extra = bigger
	return 2 * minProductHelper4(bigger, smaller//2) + extra
# def minProduct3(a,b):


a = 52266141; b = 23212344231231232
# a= 101; b = 23

# print(minProduct(a,b,0))
print("1",minProduct2(a,b))
print("2",minProduct3(a,b))
print("2",minProduct4(a,b))
