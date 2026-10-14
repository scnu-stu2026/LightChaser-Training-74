#include <stdio.h>
void swap(int *pa,int *pb){          //定义函数

	int c=*pa;            //将*pa对应的值赋给c
	*pa=*pb;             //将*pb对应的值赋给*pa
	*pb=c;                //将c的值赋给*pb
}




int main(){
	int a,b;
	scanf("%d %d",&a,&b);
	swap(&a,&b);                //调用函数
	printf("%d %d",a,b);
	return 0;
}