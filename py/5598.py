import sys
input = sys.stdin.readline

n = str(input())
li = []
for i in range(len(n)):
  if n[i] =='D':li.append('A')
  elif n[i]=='E': li.append('B')
  elif n[i]=='F':li.append('C')
  elif n[i]=='G':li.append('D')
  elif n[i]=='H':li.append('E')
  elif n[i]=='I':li.append('F')
  elif n[i]=='J':li.append('G')
  elif n[i]=='K':li.append('H')
  elif n[i]=='L':li.append('I')
  elif n[i]=='M':li.append('J')
  elif n[i]=='N':li.append('K')
  elif n[i]=='O':li.append('L')
  elif n[i]=='P':li.append('M')
  elif n[i]=='Q':li.append('N')
  elif n[i]=='R':li.append('O')
  elif n[i]=='S':li.append('P')
  elif n[i]=='T':li.append('Q')
  elif n[i]=='U':li.append('R')
  elif n[i]=='V':li.append('S')
  elif n[i]=='W':li.append('T')
  elif n[i]=='X':li.append('U')
  elif n[i]=='Y':li.append('V')
  elif n[i]=='Z':li.append('W')
  elif n[i]=='A':li.append('X')
  elif n[i]=='B':li.append('Y')
  elif n[i]=='C':li.append('Z')
for i in range(len(li)):
  print(li[i],end='')
  