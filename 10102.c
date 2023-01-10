#include<stdio.h>
//입력받은 수를 1부터 N까지 나열해서 소수들만 찾아서 그 소수의 합이 N이면 cnt++
int main(){
  int n,cnt1=0,cnt2=0;
  char a[1000001];
  scanf("%d",&n);
  scanf("%s",a);
  for(int i=0;i<n;i++){
    if(a[i]=='A')cnt1++;
    else cnt2++;
  }
  if(cnt1>cnt2)printf("A");
  else if(cnt1<cnt2)printf("B");
  else printf("Tie");
}
