#include <stdio.h>

enum {black, white, red, blue }; //Anonymous enum

//Enums can be used like a constant integer
//Enums are used to make the program more readable

int main()
{
    int col = white;

    printf("col = %d\n", col);

    switch(col)
    {
	case black:
	    //Do something
	    break;
	case white:
	    //Do something
	    break;
	case red:
	    //Do something
	    break;
	case blue:
	    //Do something
	    break;
	default:

	    break;

    }

    return 0;
}
