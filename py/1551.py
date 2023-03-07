import sys
input = sys.stdin.readline

n,k = map(int,input().split())
li = list(map(int,input().split(',')))

li2 = []
for i in range(k):
  for j in range(len(li)-1):
    li2.append(li[j+1] - li[j])
  li = li2
  li2 = []
for i in range(len(li)):
  if len(li)-1==i: print(li[i],end='')
  else : print(li[i],end=',')