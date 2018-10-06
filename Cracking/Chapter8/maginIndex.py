def magicIndex(array,left,right):
	mid = (left+right)//2
	if array[mid] == mid:
		return mid
	if array[mid] > mid:
		return magicIndex(array, left, mid-1)
	else:
		return magicIndex(array, mid+1, right)

def FillArray():
    array = [0] * 10
    array[0] = -14
    array[1] = -12
    array[2] = 0
    array[3] = 1
    array[4] = 2
    array[5] = 5
    array[6] = 9
    array[7] = 10
    array[8] = 23
    array[9] = 25
    return array

array = FillArray()
print(magicIndex(array, 0, len(array) - 1))