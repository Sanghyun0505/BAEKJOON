import sys
input = sys.stdin.readline

li = list(map(int,input().split()))
sum = 0
for i in range(len(li)):
  sum+=li[i]
print(sum)