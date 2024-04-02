#include<stdio.h>
#define m printf
#define d scanf

main()
{
	int i,j,s;
	
	for(i=10;i>=6;i--)
	{
		for(s=4;s<=i;s++)
		{
			m(" ");	
		}
		for(j=i;j<=10;j++)
		{
			m("%d",j);	
		}
		m("\n");
	}
}
