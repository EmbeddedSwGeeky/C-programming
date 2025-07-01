#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv, char *envp[])
{
		char *p;
#if 0
		p = getenv("a");

		printf("%s\n", p);
#else
		//printf("%s\n", getenv("a"));
		puts(getenv("arr"));
#endif
		return 0;
}
