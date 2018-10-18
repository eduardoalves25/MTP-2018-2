/* P3.c */ 
/* Eduardo Alves de Oliveira */ 
/* 11721EEL004 */ 


#include <stdio.h>

int main ()
{	
  int num1[256], x=0, y, z=0;
	char num[256];
	printf("Digite uma sequencia de caracteres: ");
	scanf("%s", num);
	for(x=0; num[x] != '\0'; x++){	
        if(num[x] >= 48 && num[x] <= 57){
              num1[z] = num[x] - 48;
			        z++;
        }
	}
  y=0;	
  printf("O numero contido nesta sequencia eh ");
	do{
        printf("%d", num1[y]);
		    y++; 
  }while(y<z);
	return 0;
}
