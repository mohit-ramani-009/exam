#include <stdio.h>
#define m printf
#define d scanf

main()
{
    int rows, cols;
    
    m("Enter the array's row size: ");
    d("%d", &rows);
    
    m("Enter the array's column size: ");
    d("%d", &cols);
    
    int array[rows][cols];
    float sum = 0.0;
    
    m("\nEnter array's elements:\n");
    
    int i,j;
    
    for(i = 0; i < rows; i++) 
	{
        for(j = 0; j < cols; j++) 
		{
            m("a[%d][%d] = ", i, j);
            d("%d", &array[i][j]);
            
            sum += array[i][j];
        }
    }
    
    float average = sum / (rows * cols);
    
    m("\nAverage of the Array: %.2f\n", average);
    
}
