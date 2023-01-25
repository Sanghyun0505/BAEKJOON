import sys
input = sys.stdin.readline

n = int(input())
max=-100000000
for i in range(n):
  m = int(input())
  for j in range(m):
    y , k = input().split()
    if int(y)>max:
      max=int(y)
      maxn=k
  print(maxn)
  max=-100000000