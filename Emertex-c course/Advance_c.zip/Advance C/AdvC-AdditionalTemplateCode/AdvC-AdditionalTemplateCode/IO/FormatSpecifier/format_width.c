#include <stdio.h>

int main()
{
    int i, j;
    int a[3][4] = {
		    {1, 1245, 230, 4},
		    {12, 1, 23, 4000}, 
		    {1000, -145, -2, 45}
		}; 

    for (i = 0; i < 3; i++)
    {
	for (j = 0; j < 4; j++)
	{
	    printf("%-7d", a[i][j]); //minus for left align
	}
	puts("");
    }
    return 0;
}
