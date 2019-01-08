ar=[]
ar.append(1);
for i in range (1,301):
    ar.append(i*ar[i-1])
#for i in range(290,301):
    #print i,ar[i]
mod=1000000007
n1,w1,t1,r1=raw_input().split()
n,w,t,r=int(n1),int(w1),int(t1),int(r1)
print (ar[n]/ar[w]/ar[t]/ar[r])%mod
