import sys
input = sys.stdin.readline

n = input()
m = int(input())
cnt=0
for i in range(m):
  k = input()
  if n==k: cnt+=1
print(cnt)