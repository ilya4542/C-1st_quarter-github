#include <stdio.h>

int SimpleNum(int i, int n){

	for(i = 2; i <= n; i++) {
		
		if(i != n && n % i == 0 && i < n) {

			printf("Entered numder %d is not a SIMPLE\n", n);
			printf("i= %d\n", i);
			break;
		};

		if(i == n) {

			printf("Entered number %d is SIMPLE\n", n);
		};

	};
	
	return 0;
};

int main() {

	
	int b;
	printf("Enter a number \n");
	scanf("%d", &b);
	SimpleNum(2, b);
	return 0;
}