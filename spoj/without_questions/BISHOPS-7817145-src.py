import sys
for var in sys.stdin:
   x=int(var)-1;
   if x==0: 
     print "1"
   else:
     print(x<<1)
