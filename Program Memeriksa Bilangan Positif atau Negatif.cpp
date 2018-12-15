#include <stdio.h>

main()
{
	int x;
	printf("Masukkan Bilangan : ");
	scanf("%d",&x);
	if(x>=0){
		printf("%d Adalah Bilangan Positif\n\n",x);
		}else{
			printf("%d Adalah Bilangan Negatif\n\n");
		}
}
