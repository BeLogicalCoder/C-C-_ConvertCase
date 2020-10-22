4. Accept one character from user and convert case of that character.
Input : a Output : A
Input : D Output : d 

#include<stdio.h>
void ChangeCase(char cValue)
{
	if((cValue>='a') && (cValue<='z'))
	{
		cValue=cValue-32;
		
		printf("Charector after Change is %c ",cValue);
	}
	else if((cValue>='A') && (cValue<='Z'))
	{
		cValue=cValue+32;
		
		printf("Charector after Change is %c",cValue);
	}
}


int main()
{
	char cValue='\0';
	
	printf("Enter the Charector\n");
	scanf("%c",&cValue);
	
	ChangeCase(cValue);
	
	return 0;
}