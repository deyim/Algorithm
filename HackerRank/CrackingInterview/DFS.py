def dfs(grid, m, n):
	global Cnt
	for i in range(-1,2):
		for j in range(-1,2):
			if i==0 and j==0:
				continue
			elif m+i < 0 or n+j < 0 or m+i >= len(grid) or n+j >= len(grid[m+i]):
				#print("second", m+i,n+j)
				continue
			elif grid[m+i][n+j] == 1:
				#print("third", m+i,n+j)
				grid[m+i][n+j] = 0; Cnt += 1
				dfs(grid, m+i, n+j)


def getBiggestRegion(grid):
    maxCnt = -1
    global Cnt
    for i in range(len(grid)):
    	for j in range(len(grid[i])):
    		if grid[i][j] == 1:
	    		grid[i][j] = 0; Cnt+=1
	    		dfs(grid, i, j)
	    		if Cnt > maxCnt:
	    			maxCnt = Cnt
	    		Cnt= 0
    return maxCnt

n = int(input().strip())
m = int(input().strip())
Cnt = 0;
grid = []
for grid_i in range(n):
    grid_t = list(map(int, input().strip().split(' ')))
    grid.append(grid_t)
print(getBiggestRegion(grid))
