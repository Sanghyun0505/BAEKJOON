import sys
input = sys.stdin.readline
n,m = map(int,input().split())
a = list(map(int,input().split()))
a.sort()
print(a[m-1])