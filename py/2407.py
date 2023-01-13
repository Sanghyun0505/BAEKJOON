import sys
import math
input = sys.stdin.readline
n,m = map(int,input().split())
n2 = math.factorial(n)
m2 = math.factorial(m)
nm = math.factorial(n-m)

x = n2//(m2*nm)
print(x)