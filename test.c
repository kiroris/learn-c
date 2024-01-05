#include <stdio.h>
 
int main(void)
{
    int x = 10;
    int *p;
    p = &x;
    printf("Address = %p \n", (void*) p);
    printf("x = %d \n", *p);
    return 0;
}
