import sys
input = sys.stdin.readline

n = int(input())
li = []
for i in range(n):
  m = input()
  li.append(m)
for i in range(len(li)):
  if 'Simon says' in li[i]:
    k = li[i]
    nk = k.replace("\n", "")
    print(nk[10:])