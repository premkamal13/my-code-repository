n=int(input())
i=2;
a=[1,2]
while i<=n:
    a.append(a[i-1]+a[i-2]);
    i=i+1
print a[n];
