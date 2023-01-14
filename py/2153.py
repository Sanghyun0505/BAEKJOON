import sys
input = sys.stdin.readline
n = input()
sum=0
cnt=0
for i in n:
  if i=='a' or i=='A':
    if i == 'a':sum+=1
    else:sum+=27
  elif i=='b' or i=='B':
    if i == 'b':sum+=2
    else:sum+=28
  elif i=='c' or i=='C':
    if i == 'c':sum+=3
    else:sum+=29
  elif i=='d' or i=='D':
    if i == 'd':sum+=4
    else:sum+=30
  elif i=='e' or i=='E':
    if i == 'e':sum+=5
    else:sum+=31
  elif i=='f' or i=='F':
    if i == 'f':sum+=6
    else:sum+=32
  elif i=='g' or i=='G':
    if i == 'g':sum+=7
    else:sum+=33
  elif i=='h' or i=='H':
    if i == 'h':sum+=8
    else:sum+=34
  elif i=='i' or i=='I':
    if i == 'i':sum+=9
    else:sum+=35
  elif i=='j' or i=='J':
    if i == 'j':sum+=10
    else:sum+=36
  elif i=='k' or i=='K':
    if i == 'k':sum+=11
    else:sum+=37
  elif i=='l' or i=='L':
    if i == 'l':sum+=12
    else:sum+=38
  elif i=='m' or i=='M':
    if i == 'm':sum+=13
    else:sum+=39
  elif i=='n' or i=='N':
    if i == 'n':sum+=14
    else:sum+=40
  elif i=='o' or i=='O':
    if i == 'o':sum+=15
    else:sum+=41
  elif i=='p' or i=='P':
    if i == 'p':sum+=16
    else:sum+=42
  elif i=='q' or i=='Q':
    if i == 'q':sum+=17
    else:sum+=43
  elif i=='r' or i=='R':
    if i == 'r':sum+=18
    else:sum+=44
  elif i=='s' or i=='S':
    if i == 's':sum+=19
    else:sum+=45
  elif i=='t' or i=='T':
    if i == 't':sum+=20
    else:sum+=46
  elif i=='u' or i=='U':
    if i == 'u':sum+=21
    else:sum+=47
  elif i=='v' or i=='V':
    if i == 'v':sum+=22
    else:sum+=48
  elif i=='w' or i=='W':
    if i == 'w':sum+=23
    else:sum+=49
  elif i=='x' or i=='X':
    if i == 'x':sum+=24
    else:sum+=50
  elif i=='y' or i=='Y':
    if i == 'y':sum+=25
    else:sum+=51
  elif i=='z' or i=='Z':
    if i == 'Z':sum+=25
    else:sum+=52
if sum==1:print("It is a prime word.")
else:
  for i in range(1,sum+1):
    if sum%i==0: cnt+=1
  if cnt==2: print("It is a prime word.")
  else: print("It is not a prime word.")