#include <stdio.h>
int main(){
int a,b;
scanf("%d %d",&a,&b);    //读取输入数据，&为取地址符
printf("%d+%d=%d\n",a,b,a+b);
printf("%d-%d=%d\n",a,b,a-b);
printf("%d*%d=%d\n",a,b,a*b);
if(b==0){printf("除数不能为0\n");}      //if语句，分除数等于0和不等于0两种情况，判断除数是否为0
else{
printf("%d/%d=%f\n",a,b,a*1.0/b);}  //*1.0将整数除法转为浮点数除法，可以避免整数相除带来的危险，确保结果准确
return 0;
}