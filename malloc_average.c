#include <stdio.h>
#include <stdlib.h>
int main(){
	int n;
	scanf("%d",&n);
	int *p=0;
	p=(int*)malloc(n*sizeof(int));
	int i;
	int count=0;
	int sum=0;
	for(i=0;i<n;i++){
		scanf("%d",&p[i]);
	    sum+=p[i];
		count++;
	}
	double num=0.0;
	num=sum*1.0/count;
	printf("%f",num);
	free(p);
	return 0;
}