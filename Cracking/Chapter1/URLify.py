nInput = input().split(', ')
n = len(nInput[0])
string = []
i = 0
while i < n:
    flag = False
    while nInput[0][i]  == ' ':
        i+=1
        flag = True
    if len(string) >= int(nInput[1]):
        break
    if flag:
        string.append('%20')
    string.append(nInput[
        0][i])
    i += 1

print(''.join(string))
