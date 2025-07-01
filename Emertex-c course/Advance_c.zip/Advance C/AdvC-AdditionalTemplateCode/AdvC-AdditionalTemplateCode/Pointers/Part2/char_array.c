#include <stdio.h>

int main()
{
    int x = 0x12345698;
    char *ptr = (char *)&x; //Typecast to suppress compiler warning about pointer mismatch
    int i;

    for (i = 0; i < 4; i++)
    {
    	//printf("%x ", ptr[i]);
    	//printf("%x ", *(ptr + i) & 0xFF);
    	printf("%hhx ", *(ptr + i));
    }

    puts("");

    return 0;
}
