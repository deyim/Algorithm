def hammingWeight(n):
    """
    :type n: int
    :rtype: int
    """
    num = n
    if n != 0:
        cnt = 1
    else:
        cnt = 0
    
    while num>1:
        if num % 2:
            # print(num)
            cnt += 1
        num //= 2
        
    return cnt

print(hammingWeight(0))