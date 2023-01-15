import sys
input = sys.stdin.readline

n = int(input())
cnt = 0
max = -100000
li = list(map(int,input().split()))
  
for i in range(n):
  for j in range(i+1,n):
    if li[i]>li[j]:
      cnt+=1
    else: break
  if cnt>max: max=cnt
  cnt=0
print(max)
   
