import sys
input = sys.stdin.readline

def listToString(str_list):
    result = ""
    for s in str_list:
        result += s + " "
    return result.strip()

n = int(input())
for i in range(n):
  m = list(map(str,input().split()))
  m[0] = m[0].upper()
  for i in range(len(m)):
    if(m[i]==''):
      m[i+1]=m[i+1].upper()
  result = listToString(m)
  print(result)
      
  
  