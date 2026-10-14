#include <stdio.h>
#include <stdlib.h>      //malloc必须有这个头文件
int main(){
	int n;
	scanf("%d",&n);      //读取输入的数据个数
	int *p=0;          //定义整型指针，初始向0地址
	p=(int*)malloc(n*sizeof(int));         //调用malloc函数，申请n个4个字节的连续空间。（int*）为强制类型转换，将malloc返回的void*类型转为int*
	int i;
	int count=0;       //定义计数器
	int sum=0;        //初始化sum为0
	for(i=0;i<n;i++){
		scanf("%d",&p[i]);      //数组是一种指针，因此可用p作为数组名
	    sum+=p[i];        //随着i加1，不断经过数组各个元素，遍历数组
		count++;       //每完成一次，计数器就加1
	}
	double num=0.0;
	num=sum*1.0/count;    //转为浮点数相除，防止小数被截断
	printf("%f",num);
	free(p);    //释放内存
	return 0;
}