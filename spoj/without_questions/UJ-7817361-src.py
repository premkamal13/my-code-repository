import sys
while(1):
  x, y=map(int, raw_input().split())
  if not (x or y): break
  print(x**y)
