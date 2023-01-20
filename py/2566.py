import sys

input = sys.stdin.readline

max = -10000000
arr = [list(map(int, input().split())) for _ in range(1,9+1)]

for i in range(0,9):
  for j in range(0,9):
    if arr[i][j]>max: 
      max = arr[i][j]
      maxn1 = i
      maxn2 = j
print(max)
print(maxn1+1, maxn2+1)
      