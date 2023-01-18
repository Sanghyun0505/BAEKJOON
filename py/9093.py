import sys
input = sys.stdin.readline

n = int(input())
for _ in range(n):
  m = list(map(str,input().split()))
  for i in m:
    if len(i)==1:print(i,end=" ")
    else:
      i = i[::-1]
      print(i,end=" ")
  print("\n")