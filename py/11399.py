import sys
input = sys.stdin.readline

n = int(input())
sum=0
li = list(map(int,input().split()))
li.sort()
li2=[]
for i in range(len(li)):
  for j in range(i+1):
    sum+=li[j]
  li2.append(sum)
  sum=0
for i in range(len(li2)):
  sum+=li2[i]
print(sum)
  