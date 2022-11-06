#include<stdio.h>
int GTLNcuahaiso(int tong1, int tong2){
	if(tong1>tong2){
		return tong1;
	}else{
		return tong2;
	}
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
	int tong1=0, tong2;
	for(int i=0; i<n; i++){
		if(array[i]>0){
			tong1 += array[i];
			
		}else{
			tong1 =0;
		}
		tong2=GTLNcuahaiso(tong1, tong2);
	}
	printf("tong duong lon nhat: %d",tong2);
}
