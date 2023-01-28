import sys
input = sys.stdin.readline

n = str(input())
cnt=0
for i in range(len(n)):
  if n[i]==',':
    cnt+=1
print(cnt+1)
