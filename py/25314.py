import sys
input = sys.stdin.readline

n = int(input())
li = []
while(n!=0):
  if n%4==0:
    li.append('long')
    n-=4
li.append('int')
for i in range(len(li)):
  print(li[i],end=' ')
  