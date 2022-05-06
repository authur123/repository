#include <stdio.h>

main () {

    int n;
    scanf("%d", &n);
    for (int i = 1; i < n; i++) {
        for (int j = 0; j < n-i; j++) {
			if(i % 2 ==0 ){
            printf("*");
}else{
	printf("+");
        }
	}
        printf("\n");
    }
}
