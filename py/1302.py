import sys
input = sys.stdin.readline

n = int(input())
li = []
max = -100000
for _ in range(n):
  m = str(input())
  li.append(m)
li.sort()
for i in li:
  if li.count(i)>max:
    max=li.count(i)
    maxli = i
print(maxli,end='')