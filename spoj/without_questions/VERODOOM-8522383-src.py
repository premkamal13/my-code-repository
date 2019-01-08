t=int(raw_input())
while(t):
    n=int(raw_input())
    s=(n*n*n)/2+(3*n*n)/2+n
    if n%2!=0:
        s+=1
    print s
    t=t-1