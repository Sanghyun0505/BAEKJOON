import sys
input = sys.stdin.readline

n,m = map(int,input().split())
li = []
for i in range(n):
  k = input()
  li.append(k[::-1])

for i in range(len(li)):
  print(li[i])
  