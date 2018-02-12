def Slump(string):
    if len(string)<3: return False
    if string[0]!='D' and string[0]!='E' or string[1]!='F' or string[len(string)-1]!='G': return False
    for i in range(2,len(string)):
        if string[i]=='F': continue
        elif string[i]=='D' or string[i]=='E': 
            if Slump(string[i:len(string)]): return True
            else: return False
        elif string[i]=='G': return True
        else: return False

def Slimp(string):
    if len(string)<2 or string[0]!='A': return False
    if len(string)==2:
        if string[1]=='H': return True
    else:
        if string[1]=='B' and Slimp(string[2:len(string)-1]) and string[len(string)-1]=='C': return True
        elif Slump(string[1:len(string)-1]) and string[len(string)-1]=='C': return True
        else: return False

count=int(input())
result=[]
while count!=0: 
    string=input()
    if string.find('H')!=-1:
        if Slimp(string[0:string.rfind('H')+1]) and Slump(string[string.rfind('H')+1:len(string)]): result.append("YES")
        else: result.append("NO") 
    elif string.find('C')!=-1:
        if Slimp(string[0:string.rfind('C')+1]) and Slump(string[string.rfind('C')+1:len(string)]): result.append("YES")
        else: result.append("NO")
    else: result.append("NO")
    count-=1
print("SLURPYS OUTPUT")
for i in result: print(i)
print("END OF OUTPUT")