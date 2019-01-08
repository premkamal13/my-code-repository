t=int(raw_input())
while t:
    n1,m1=raw_input().split();
    n,m=int(n1),int(m1)
    s=n
    while n>=m:
        s+=int(n/m)
        n=int(n/m)+n%m
    print s
    t-=1
