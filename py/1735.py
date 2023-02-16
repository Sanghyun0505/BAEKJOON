import sys
input = sys.stdin.readline
from fractions import Fraction

a1,b1 = map(int,input().split())
a2,b2 = map(int,input().split())
b3 = b1
b4 = b2

if b1 == b2:
  a3 = a1+a2
  sum = str(Fraction(a3,b1))
  if '/' not in sum:
    print(sum,1)
  else:
    print(sum.replace('/',' '))
else:
  b1 = b1 * b2
  b2 = b2 * b3
  a1 = a1 * b4
  a2 = a2 * b3
  a = a1 + a2
  sum = str(Fraction(a,b1))
  if '/' not in sum:
    print(sum,1)
  else:
    print(sum.replace('/',' '))
      
  
  