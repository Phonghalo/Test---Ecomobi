#include<stdio.h>
#include<stdlib.h>

int UCLN(int x, int y){
	if(x==y) return x;
	if( x > y) 
		UCLN(x-y,y);
	else
		UCLN(x,y-x);
}
int BCNN(int x, int y){
	return x*y/UCLN(x,y);
}
int Mang(int a[],int x, int y, int t){
	int i=0;
	int v;
	if(x>y){
		x = v;
		x = y;
		y = v;
	}
	for(int i; i <= t ; i++){
		a[i]=x;
		x++;
	}
	
}
int smallestCommons(int a[],int t){
	int temp = BCNN(a[0],a[1]);
	for(int i=2; i < t ; i++){
		temp = BCNN(temp,a[i]);
	}
	return temp;
}

int main(){
	int a[100];
	int m;
	int n;
	printf("nhap so thu nhat: ");
	scanf("%d",&m);
	printf("nhap so thu hai: ");
	scanf("%d",&n);
	
	int length = abs(m-n)+1;
	Mang(a,m,n,length);
	printf("Boi chung nho nhat cua khoang la: %d",  smallestCommons(a,length));
}
