a=[0]*501;
a[0]=1
for i in range(1,501):
   a[i]=(a[i-1]+2**i)%1298074214633706835075030044377087

for j in range(input()):
  print a[input()]
