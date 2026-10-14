#include <stdio.h>
int main(){
int a;
int sum=0;    //初始化sum为0，避免为随机值
int b=1;
for(a=1;a<=100;a++)	{
	if(b%2!=0){        //判断是否为奇数
	sum+=b;            //累加
	}
	b++;
}
printf("%d",sum);
return 0;
}
