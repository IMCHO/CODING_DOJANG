def printnum(list,size,string):
    for i in range(2*size+3):
        for j in range((size+3)*len(str(string))-1):
                 print(list[i][j],end='')
        print('')

def one(list,r,size):
    for i in range(2*size+3):
        if i==0 or i==(2*size+3)//2 or i==2*size+2: continue
        else:
            list[i][r+size+1]='|'

def two(list,r,size):
    temp=r
    limit=r+size+1
    for i in range(2*size+3):
        if i==0 or i==(2*size+3)//2 or i==2*size+2:
            while temp!=limit+1:
                if temp==r or temp==limit: temp+=1
                else: 
                    list[i][temp]='-'
                    temp+=1
        elif i>0 and i<(2*size+3)//2:
            while temp!=limit+1:
                if temp==limit: 
                    list[i][temp]='|'
                    temp+=1
                else: temp+=1
        else:
            while temp!=limit+1:
                if temp==r: 
                    list[i][temp]='|'
                    temp+=1
                else: temp+=1
        temp=r

while True:
    info=list(map(int,input().split()))
    if info[0]==0: break
    num=[[' ']*((info[0]+3)*len(str(info[1]))-1) for i in range(2*info[0]+3)]
    row,col=0,0

    for i in str(info[1]):
        if i=='1': 
            one(num,row,info[0])
            row+=(3+info[0])
        elif i=='2':
            two(num,row,info[0])
            row+=(3+info[0])
        elif i=='3': pass
        elif i=='4': pass
        elif i=='5': pass
        elif i=='6': pass
        elif i=='7': pass
        elif i=='8': pass
        elif i=='9': pass
    printnum(num,info[0],info[1])
