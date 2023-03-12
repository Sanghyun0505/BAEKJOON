import sys
input = sys.stdin.readline

n = int(input())

li = []
li2 = []

for i in range(n):
  li.append(i+1)

for i in range(len(li)):
  li2.append(li[0])
  if len(li)>=2:
    li.append(li[1])
  li = li[2:]
for i in range(len(li2)):
  print(li2[i],end=' ')