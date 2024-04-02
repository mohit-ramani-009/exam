#include<stdio.h>
#define m printf
#define d scanf

void main()
{
	int n,i;
	m("enter n:- ");
	d("%d",&n);
	
	int a[n];
	
	m("enter array elements\n");
	
	for(i=0;i<n;i++)
	{
		m("a[%d]= ",i);
		d("%d",&a[i]);
	}
	
	m("\n odd number:\n");
	
	for(i=0;i<n;i++)
	{
		if(a[i]%2!=0)
		{
			m("%d ",a[i]);
		}
	}	
}



