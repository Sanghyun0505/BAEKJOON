#include<stdio.h>
#include<string.h>
char a[1000001];
int c[333334];
int main(){
  int cnt=3,s=1,cnt2=0;
  scanf("%s",a);
  int b=strlen(a);
  if(b==1)printf("%s",a);
  else{
     for(int i=b-1;i>=0;i--){
      cnt--;
      c[cnt2]+=(a[i]-'0')*s;
      s*=2;
      if(cnt==0){
        cnt2++;
        cnt=3;
        s=1;
      }
    }
     if(c[cnt2]==0){
       for(int i=cnt2-1;i>=0;i--)        {
          printf("%d",c[i]);
        }
     }
    else{
      for(int i=cnt2;i>=0;i--)        {
          printf("%d",c[i]);
        }
    }
  }
}

