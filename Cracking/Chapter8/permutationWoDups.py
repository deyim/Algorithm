
def iterPermutation(myStr):
	n = len(myStr)
	result = [myStr,]
	for i in range(n-1):
		for one in result[:]:
			for j in range(i+1,n):
				one[i],one[j] = one[j], one[i]
				result.append(one)
				print(result)
	return result


def permutation(myStr, begin):
	
	if begin == len(myStr) :
		permutations.append(''.join(myStr))
		return

	
	for i in range(begin,len(myStr)):
		myStr[begin], myStr[i] = myStr[i], myStr[begin]
		permutation(myStr, begin+1)
		myStr[begin], myStr[i] = myStr[i], myStr[begin]

def permutation2(nums): 
		###failed
    """
    :type nums: List[int]
    :rtype: List[List[int]]
    """
    ans = []; n = len(nums)
    if not nums:
        return [[]]
    
    def generate(head):
        # print(head, nums)
        if head == (n-1):  
            ans.append(nums[:])
        #why nums  자체는 1,2,3,4로 저장/?!
        else:
            for i in range(head,len(nums)):
                nums[head], nums[i] = nums[i], nums[head]
                generate(head+1)
                nums[i], nums[head] = nums[head], nums[i]
            
            
    generate(0)
    return ans


	
inputStr = list("abc")
permutations = []
permutation(inputStr,0)
print(permutations)
print(iterPermutation(inputStr))