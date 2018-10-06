
def insertion(M, N, i, j):
	masker = '1'*(j-i+1) + '0'*(i)
	masker = int(masker, 2)
	print(bin(masker))
	print(bin(N^masker))
	print(bin(M<<i))

	return (N ^ masker) & (M<<j)


N = int('10000000000', 2)
M = int('10011', 2)
# N = bin(10000000000)
# M = bin(10011)
# print("%b" % insertion(M,N, 2, 6))
print(bin(insertion(M,N, 2, 6)))
