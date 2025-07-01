#include <stdio.h>

/* Typedef a function pointer to create a FuncptrType */
typedef int (*FuncPtrType) (int, int);

int add(int a, int b)
{
    return a + b;
}

int sub(int a, int b)
{
    return a - b;
}

int main()
{
    int res;
    FuncPtrType fptr; //fptr is a function pointer variable

    //int (*fptr)(int, int); //Function pointer declaration. fptr is a function pointer

    fptr = &add; //Assign add functions address

    res = (*fptr)(5, 10); //Invoke add function
    printf("res = %d\n", res);

    fptr = sub; //Assign sub function address
    res = fptr(5, 10); //Call sub func. Notice that u need not derefence fptr

    printf("res = %d\n", res);
    return 0;

}







