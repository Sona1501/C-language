#include <stdio.h>
int sum(int a, int b);
int main()
{
    int a = 4, b = 7;
    printf("the value of 4+7 is %d\n", sum(a, b));
    return 0;
}
int sum(int a, int b)
{
    return a + b;
}