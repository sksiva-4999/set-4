#include <stdio.h>
#include<string.h>
int main() 
{
	char string[50];
	int i,count=0;
	scanf("%[^\n]s",string);

	for(i=0;string[i]!='\0';i++)
	{
		if(string[i]==' ')
		{
			count=count+1;
		}
	}
	printf("\n%d",count);
	return 0;
}
