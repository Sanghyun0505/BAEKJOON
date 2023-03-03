import sys
input = sys.stdin.readline

n = int(input())
cnt=0
li = list(map(str,input().split()))
for i in range(len(li)):
  if i<n-1:
    if li[i][len(li[i])-1] == li[i+1][0]:
      cnt+=1
if cnt == n-1:
  print(1)
else:
  print(0)