//Tinh tong cac so tu 1 den n
#include<stdio.h>
#include<math.h>
int main(){
	//Input
	int n, sum;
	printf("Nhap vao so nguyen duong n:");
	scanf("%d", &n);
	//Process
	sum = (n*(n+1)/2);
	//Output
	printf("Tong cac so tu 1 den n:%d", sum);
	}
