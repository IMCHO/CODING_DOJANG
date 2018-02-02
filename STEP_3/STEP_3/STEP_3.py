
def one(size=1):
    temp=size
    print(' '*(size+2))
    while temp!=0:
        print(' '*(size+1)+'|')
        temp-=1
    print(' '*(size+2))
    temp=size
    while temp!=0 :
        print(' '*(size+1)+'|')
        temp-=1
    print(' '*(size+2))

def two(size=1):
    print(' '+'-'*(size)+' ')
    temp=size
    while temp!=0:
        print(' '*(size+1)+'|')
        temp-=1
    print(' '+'-'*(size)+' ')
    temp=size
    while temp!=0:
        print('|'+' '*(size+1))
        temp-=1
    print(' '+'-'*(size)+' ')

def three(size=1):
    print(' '+'-'*(size)+' ')
    temp=size
    while temp!=0:
        print(' '*(size+1)+'|')
        temp-=1
    print(' '+'-'*(size)+' ')
    temp=size
    while temp!=0:
        print(' '*(size+1)+'|')
        temp-=1
    print(' '+'-'*(size)+' ')
one(2)
two(2)
three(2)