#include<stdio.h>
#include<string.h>
int main(){
  int n,m,a[10001],cnt=0;
  double sum=0;
  scanf("%d",&n);
  for(int i=1;i<=n;i++){
    scanf("%d",&m);
    for(int i=1;i<=m;i++){
      scanf("%d",&a[i]);
      sum+=a[i];
    }
    int avg=sum/m;
    for(int i=1;i<=m;i++){
      if(a[i]>avg)cnt++;
    }
    printf("%.3lf%\n",(double)cnt/m*100);
    sum=0;
    cnt=0;
  }
}