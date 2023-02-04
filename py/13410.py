import sys
input = sys.stdin.readline

def jari(num):
 for i in range(0,num):
  temp=num/pow(10,i)
  if temp <1 :
   break
 return i

def reverse(num):
 rever=0
 s=[]
 for i in range(0,jari(num)):
  s.append((num%pow(10,jari(num)-i))/pow(10,jari(num)-1-i))
  s[i]=int(s[i])

 for i in range(0,jari(num)):
  rever+=s[i]*pow(10,i)
 return rever


n,m= map(int,input().split())
li = []
for i in range(1,m+1):
  k = reverse(n*i)
  li.append(k)
print(max(li))

