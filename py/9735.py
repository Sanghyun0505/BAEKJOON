#pypy3로 제출할 것
import sys
import math
input = sys.stdin.readline
n = int(input())
x = []

def f(a,b,c,d):
  for i in range(1,abs(d)+1):
    if d%i == 0:
      if a * i * i * i + b * i * i + c * i + d == 0: return float(i)
      elif -a * i * i * i + b * i * i -c * i + d == 0: return float(-i)
  return 0


for _ in range(n):
  a,b,c,d = map(int,input().split())
  x2 = f(a,b,c,d)
  #조립제법
  a2 = a
  b2 = b + a2 * x2
  c2 = c + b2 * x2
  d2= b2 * b2 - 4 * a2 * c2
  #########################
  if d2<0: x.append(x2)
  elif d2 > 0:
    x3 = (-b2 + math.sqrt(b2 * b2 - 4 * a2 * c2)) / (2 * a2)
    x4 = (-b2 - math.sqrt(b2 * b2 - 4 * a2 * c2)) / (2 * a2)
    x.append(x2)
    x.append(x3)
    x.append(x4)
  else:
    x3 = -b2 / (2 * a2) + 0
    x.append(x2)
    x.append(x3)
  x.sort()
  res = set(x)
  x = list(res)
  for i in x:
    print("%0.4f"%i,end=" ")
  print("\n")
  x=[]