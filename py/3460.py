import sys
input = sys.stdin.readline

n = int(input())
li = []
for i in range(n):
  m = int(input())
  k = str(bin(m))
  b = k[::-1]
  for j in range(len(b)):
    if b[j] == '1':
      li.append(j)
for i in range(len(li)):
  print(li[i],end=' ')
  

    

  
    
 