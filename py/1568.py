import sys
input = sys.stdin.readline

n = int(input())
k = n
o = 1
cnt = 0
while(n>0):
  n -=o
  o+=1
  cnt+=1
  if(n<o):
    o = 1
print(cnt)