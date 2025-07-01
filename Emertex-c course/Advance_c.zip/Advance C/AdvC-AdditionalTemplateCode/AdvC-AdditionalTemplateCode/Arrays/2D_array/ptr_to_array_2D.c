#include <stdio.h>

int main()
{
    int a[3][4] = {{1, 2, 3, 4},
    		   {5, 6, 7, 8},
    		   {9, 10, 11, 12}
		  };

    int (*ptr)[4];
    int i = 0, j = 0;;

    ptr = a; // Store the base address of array a (Analogy a => &a[0])

    for (i = 0; i < 3; i++)
    {
	for (j = 0; j < 4; j++)
	{
	    printf("%3d", ptr[i][j]); 
	    //printf("%3d", (*(ptr + i))[j]); 
	}
	puts("");
    }

}
