from collections import defaultdict

def ifPermutation(input):
    bitVector = [0]*26
    aIdx = ord('a')
    for ch in input:
        if ch != ' ':
            ch = ch.lower()
            print(ch, bitVector, ord(ch)-aIdx)            
            bitVector[ord(ch)-aIdx]= bitVector[ord(ch)-aIdx]^1

    for i in range(len(bitVector)):
        bitVector[i] = str(bitVector[i])

    bitVector = int(''.join(bitVector), 2)
    print(bin((bitVector-1)&bitVector))
    return not ((bitVector - 1) & bitVector)           
    # d = defaultdict(int)
    # for ch in str:
    #     if ch == ' ': continue
    #     d[ch.lower()] += 1

    # oneFlag = False
    # for key, value in d.items():
    #     if value == 1 and oneFlag == False:
    #         oneFlag = True
    #     elif value % 2 == 0:
    #         continue
    #     else:
    #         return False
    # return True


print(ifPermutation(input()))
