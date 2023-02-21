import sys
input = sys.stdin.readline

n = int(input())
li = []
sum = 0
for _ in range(n):
  m = int(input())
  li.append(m)
li.sort(reverse=True)
for i in range(len(li)):
  k = li[i] - ((i+1)-1)
  if k>0:
    sum+=k
print(sum)
  