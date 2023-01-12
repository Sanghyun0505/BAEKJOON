#include<stdio.h>
int main(){
  int n=2,sum=0,cnt=0,cnt2=0;
  int a[100001];
  while(n!=-1){
    scanf("%d",&n);
    if(n==-1)break;
    for(int i=1;i<n;i++){
      if(n%i==0){
        sum+=i;
        cnt++;
        a[cnt]=i;
      }
    }
    if(sum==n){
      printf("%d = ",n);
      for(int i=1;i<=cnt;i++){
        printf("%d ",a[i]);
        if(i!=cnt)printf("+ ");
        cnt2++;
      }
      printf("\n");
    }
    else{
      printf("%d is NOT perfect\n",n);
    }
    sum=0;
    cnt=0;
    cnt2=0;
  }
}
