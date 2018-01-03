S = "abppplee"
D = ["able", "ablee", "ale", "appple", "bale", "kangaroo"]

def binary_search(alist, idx):
	left = 0 ; right = len(alist)-1; myIdx = int((left+right+1)/2)
	if alist[right] < idx:
		return -1
	if right == 0:
		return alist[myIdx]
	while True:
		if alist[myIdx] < idx:
			print("<", alist, idx, left, right, myIdx)
			left = myIdx; myIdx = int((left+right+1)/2)
		elif(alist[myIdx] > idx):
			print(">", alist, idx, left, right, myIdx)
			if(right - left <= 1):
				myIdx = right
				break
			right = myIdx; myIdx = int((left+right+1)/2)
		else:
			myIdx += 1
			break
	print(alist[myIdx])
	return alist[myIdx]






######### My Impromptue Way ########### == greedy algorithm
longest = ""
maxLength = 0; length = 0
Didx = 0;
for word in D:
	length = 0; Didx = 0;
	for character in S:
		if (Didx < len(word)) and word[Didx] == character:
			Didx+=1; length+=1
	if maxLength < length:
		maxLength = length
		longest = word

print(longest)

######### Bruteforce Way ###########  => Not gonna do this..

######### Greedy Algorithm 1 ###########
# similar to my implementation
# sort the dictionary words in order of descending length
# run the above decision procedure for each word
# then i don't have to keep longest word

# time complexity : O( words in D * length of S )

# 1 is not optimal if S is too long and D words are too short 
# L: total number of characters in the dictionary over all words
# best possible time complexity : O( N +  L ) 

# sort the list
sorted(D, key = lambda w: len(w), reverse=True)
longest = ""; Didx = 0
for word in D:
	length = 0; Didx = 0;
	for character in S:
		if (Didx < len(word)) and word[Didx] == character:
			Didx+=1; length+=1
	if Didx == len(word):
		longest = word

print(longest)


######### Greedy Algorithm 2 ###########
#sorted(D, key = lambda w: len(w), reverse=True)
D.sort(key = lambda s: len(s))
# sorted() returns a new sorted list, leaving the original list unaffected. 
# list.sort() sorts the list in-place, mutating the list indices, 
# and returns None (like all in-place operations).

# make indices for letters in S
indices = {}
for index in range(len(S)):
	if indices.get(S[index]):
		indices[S[index]].append(index)
	else:
		indices[S[index]] = []
		indices[S[index]].append(index)
print(indices)
biggestIdx = 0; longest=""; lastIdx = -1
flag = True
for word in D:
	#print(word)
	lastIdx = -1; flag = True
	for character in word:
		if indices.get(character):
			print(word, character, lastIdx)
			lastIdx = binary_search( indices[character], lastIdx)
			if lastIdx == -1:
				flag = False
				break	
		else: 
			flag = False
			print(word, character, lastIdx)
			break
	if flag == True:
		longest = word
print(longest)

#binarysearch finds an index from indeices dinctionary 
#which is bigger than lastidx












































