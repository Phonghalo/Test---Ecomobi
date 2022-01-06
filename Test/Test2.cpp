#include<stdio.h>

int fibonacci(int n) {
    int f0 = 0;
    int f1 = 1;
    int fn = 1;
    int i;
 
    if (n < 0) {
        return -1;
    } else if (n == 1) {
        return n;
    } else {
        for (i = 2; i < n; i++) {
            f0 = f1;
            f1 = fn;
            fn = f0 + f1;
        }
    }
    return fn;
}
int sumFibs(int n){
	int sum = 0;
    for (int i = 1; i < 100; i++) {
        if(fibonacci(i)<=n && fibonacci(i)%2 == 1){
        	sum +=fibonacci(i);
		}
    }
    
	printf("tong = %d",sum);
}
int main() {
	int n;
	printf("\n nhap so n: ");
	scanf("%d",&n);
	sumFibs(n);
}
