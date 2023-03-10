import sys
input = sys.stdin.readline

n = input()

li = []
k = 0
for i in range(len(n)):
  for j in range(len(n)):
    li.append((n[k:j]))
  k +=1
print(len(set(li))-1)
# print(set(li))
    