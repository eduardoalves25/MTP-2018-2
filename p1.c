/*P1.c*/
/*Eduardo Alves de Oliveira*/
/*11721EEL004*/

#include <stdio.h>
int main(){
	int estado = 0, i = 0;
	char bits[256];
	scanf("%s",bits);
	for(i = 0; bits[i] != '\0'; i++){
	
	if (estado == 0 && bits[i] == '0')
	{
			estado = 0;
	}
	else if (estado == 0 && bits[i] == '1')
	{
			estado = 1;
	}
	else if (estado == 1 && bits[i] == '1')
	{
			estado = 0;
	}
	else if (estado == 1 && bits[i] == '0')
	{
			estado = 2;
	}
	else if (estado == 2 && bits[i] == '1')
	{
			estado = 2;
	}
	else if (estado == 2 && bits[i] == '0')
	{
			estado = 1;
	}
}
	printf("%s", bits);	
if(estado == 0)
		printf("\ne multiplo de 3");
	else 
	printf("\nnao e");
	
return 0;	
}
