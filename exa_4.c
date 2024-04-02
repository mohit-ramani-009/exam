#include <stdio.h>
#define m printf
#define d scanf

void main() 
{
    int n,i;
    
    m("Enter n: ");
    d("%d", &n);

    int a[n];

    m("Enter array elements:\n");

    for (i = 0; i < n; i++) {
        m("a[%d]= ", i);
        d("%d", &a[i]);
    }

    m("\nEven numbers:\n");
    
    int *ptr=a;
    for (i=0;i<n;i++) 
	{
        if (*ptr%2==0) 
		{
            m("%d ",*ptr);
        }
        ptr++; 
    }
}

