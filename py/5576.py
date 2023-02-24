import sys
input = sys.stdin.readline

li = []
li2 = []
for i in range(10):
  n = int(input())
  li.append(n)
for i in range(10):
  n = int(input())
  li2.append(n)

li.sort(reverse=True)
li2.sort(reverse=True)

print(li[0]+li[1]+li[2],li2[0]+li2[1]+li2[2])