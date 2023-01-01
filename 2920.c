#include<stdio.h>
int main(){
  int c,d,e,f,g,a,b,cc;
  scanf("%d %d %d %d %d %d %d %d",&c,&d,&e,&f,&g,&a,&b,&cc);
  if(c==1&&d==2&&e==3&&f==4&&g==5&&a==6&&b==7&&cc==8)printf("ascending");
else if(c==8&&d==7&&e==6&&f==5&&g==4&&a==3&&b==2&&cc==1)printf("descending");
  else printf("mixed");
}