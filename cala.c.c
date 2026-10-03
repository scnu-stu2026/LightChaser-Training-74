#include <stdio.h>
int main(){
int a,b=0;
scanf("%d %d",&a,&b);
printf("%d+%d=%d\n",a,b,a+b);
printf("%d-%d=%d\n",a,b,a+b);
printf("%d*%d=%d\n",a,b,a*b);
if(b==0){printf("除数不能为0\n");}
else{
printf("%d/%d=%d\n",a,b,a/b);}
return 0;
}