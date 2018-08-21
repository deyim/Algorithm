def find3Sum(nums):
    sol = []
    size = len(nums)
    if size < 3:
        return sol

    for low in range(size-2):
        mid = low+1; high = size-1
        # print("1",low, mid, high)
        if low > 0 and nums[low] == nums[low-1]:
            continue
            #이걸 해버리면 -2 1 1 같은 케이스를 못잡음..
        while mid < high:
            # print("2",low, mid, high)
            sum = nums[low] + nums[mid] + nums[high]
            if sum > 0:
                high -= 1
            elif sum < 0:
                mid += 1
            else:
                # if [nums[low], nums[mid], nums[high]] not in sol:
                # print('a',low,mid,high)
                sol.append([nums[low], nums[mid], nums[high]])
                while mid < high and nums[mid] == nums[mid+1]:
                    mid+=1
                while mid < high and nums[high] == nums[high-1]:
                    high-=1
                high -= 1; mid += 1
            # print("3",low, mid, high)
                #cannot break here cause there can be other solutions that have same mid value


    
    print(sol)

nums = [ int(_) for _ in input().split()]
nums.sort()
find3Sum(nums)

# -1 0 1 2 -1 -4 => -4 -1 -1 0 1 2
# 3 0 -2 -1 1 2
# -1 0 1 2 -1 -4

# failed case: 0,0,0,0,0
# failed case2 : 3 0 -2 -1 1 2 => -2 -1 0 1 2 3
# -2 0 1 1 2
# iterating 과정에서 dead-end 만나는 애 없는지 체크
# python 에서는 int float 명시 안해도 되니깐 나누기 한 결과값을 int로 줄라면 
# type casting mandatory!

#anchor 값을 mid로 두면 안되고 젤 작거나 젤 큰 애로 두는게 편하네,,

# low = 0; high = size-1
    # while low < high :
    #     mid = int((low + high) / 2)
    #     while low < mid and mid < high:
    #         sum = nums[low] + nums[mid] + nums[high]
    #         print(nums[low], nums[mid], nums[high])
    #         if sum > 0:
    #             mid -= 1
    #         elif sum < 0:
    #             mid += 1
    #         else:
    #             if [nums[low], nums[mid], nums[high]] not in sol:
    #                 sol.append([nums[low], nums[mid], nums[high]])
    #             high -= 1
    #             break
        
    #     if mid == low:
    #         high -= 1
    #     elif mid == high:
    #         low += 1
        
        # if high - mid == 1 and mid - low == 1:
        #     break
