import sys
input = sys.stdin.readline

n = int(input())
li = list(map(int,input().split()))
m = int(input())
sum = 0 
li2 = [0]
for i in range(len(li)):
  sum+=li[i]
  li2.append(sum)

for i in range(m):
  a,b = map(int,input().split())
  print(li2[b] - li2[a-1])