class Solution:
    def reverse(self, x):
        """
        :type x: int
        :rtype: int
        """
        
        if x==0 or x > 2**31-1 or x < -(2**31):
            return 0
        
        flag = False
        if x < 0 :
            flag = True
            x = -x
        
        num = str(x); num_ary = []
        
        for char in num:
            num_ary.append(int(char))
        
        num_ary = num_ary[::-1]
        reversed_num = ""
        
        first_flag = False
        for num in num_ary:
            if num == 0 and first_flag == False: #should be applied to last zeros
                continue
            else: 
                reversed_num += str(num)
                first_flag = True
        
        reversed_num = int(reversed_num)
        if flag == True:
            reversed_num *= (-1)
        
        if reversed_num > 2**31-1 or reversed_num < -(2**31):
            return 0
        return reversed_num
        
        
        
        
            
        