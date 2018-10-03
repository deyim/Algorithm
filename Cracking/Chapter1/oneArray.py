def isOneAway(str1, str2):
    lenStr1 = len(str1); lenStr2 = len(str2)
    if abs(lenStr1 - lenStr2) <= 1:
        foundDifference = False; i = j = 0 
        while i<lenStr1 and j < lenStr2:
            # print(str1[i], str2[j])
            if str1[i] != str2[j] and foundDifference:
                return False
            if str1[i] != str2[j] and not foundDifference:
                if lenStr1 > lenStr2: 
                    i+=1
                elif lenStr1 < lenStr2:
                    j+=1
                foundDifference = True
            #여기 있으면 foundDifference 를 True 로 바꾸자마자 다시 검사하는거잖아 이 멍충아..!!!!!
            i+=1; j+=1 
    else:
        return False
    # if lenStr1 == lenStr2:
    #     already = False
    #     for i in range(lenStr1):
    #         print(str1[i], str2[i], already)
    #         if str1[i] != str2[i] and not already:
    #             print("??")
    #             already = True
    #         elif str1[i] != str2[i] and already:
    #             print("!!")
    #             return False
    # elif abs(lenStr1 - lenStr2) == 1:
    #     i=j=0
    #     already = False
    #     while i<lenStr1 and j < lenStr2:
    #         if str1[i] != str2[j] and not already:
    #             already = True
    #             if lenStr1 > lenStr2: i += 1
    #             else: j += 1
    #         if str1[i] != str2[j] and already:
    #             return False
    #         i += 1; j += 1
    # else:
    #     return False
    return True

print(isOneAway("pale","pae"))
print(isOneAway("pale","bale"))
print(isOneAway("pas","afs"))
