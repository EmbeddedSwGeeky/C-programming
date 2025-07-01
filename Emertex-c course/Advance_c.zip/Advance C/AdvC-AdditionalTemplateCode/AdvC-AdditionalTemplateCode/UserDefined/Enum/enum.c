//TODO: Anonymous enums
#include <stdio.h>

enum color {black, white = 2, orange, red = 3, blue};
//enum color {black, white, orange, red, blue};
enum status {st_ok, st_cancel, st_retry};

//int black = 50;

int main()
{
    enum color c, d;
    //int black = 50;

    c = black;
    printf("c = %d\n", c);

    printf("black = %d, white = %d, orange = %d, red = %d, blue = %d\n",
	    black, white, orange, red, blue);


    //black = 10;
    if (c == white)
    {
	printf("Color is white\n");
    }


#if 0
    enum status click_status;
   // Get click status of button
   click_status = get_button_status();

   if (click_status == st_ok) // Clicked OK
   {
       // Start processing
   }
   else if (click_status == st_cancel) // Clicked CANCEL
   {
   }

#endif

}










