#include <stdio.h>
int main(){
int a;
int sum=0;
int b=1;
for(a=1;a<=100;a++)	{
	if(b%2!=0){
	sum+=b;
	}
	b++;
}
printf("%d",sum);
return 0;
}
