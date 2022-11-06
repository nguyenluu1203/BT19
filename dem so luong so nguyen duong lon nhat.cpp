#include<stdio.h>

int GTLNcuahaiso(int dem1,int dem2){
	int max;
	if (dem1>dem2){
		max=dem1;
	}else{
		max=dem2;
	}
	return max;
}
int main(){
	int n;
	printf("nhap n: ");
	scanf("%d",&n);
	//array
	int array[n];
	for (int i=0; i<n; i++){
		printf("phan tu thu %d: ",i);
		scanf("%d",&array[i]);
	}
	//tao 2 bien dem 
	int dem1=0, dem2=0;
	for(int i=0; i<n; i++){
		if (array[i]>0){
			dem1++;
		}else{
			dem1=0;
		}
		dem2=GTLNcuahaiso(dem1,dem2);
	}
	printf("total: %d",dem2);
}
