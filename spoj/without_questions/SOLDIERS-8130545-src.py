x=raw_input()
s=int(x)
while(s):
    a,b=raw_input().split()
    m=int(a)
    n=int(b)
    if n==m:
        if n%2==0:
            val=(n*m)/2
        else:
            val=((n+1)*m)/2
    else:
        if m%2==0 and n%2==0:
            val=(m*n)/2
        elif m%2==0:
            val=m*(n+1)/2
        elif n%2==0:
            val=n*(m+1)/2
        else:
            val=max(m*(n+1)/2,n*(m+1)/2)
    print val
    s-=1

def max(l,y):
    if l>y:
        return l
    else:
        return y
                 
        
