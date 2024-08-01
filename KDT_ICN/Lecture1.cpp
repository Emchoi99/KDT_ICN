#include <iostream>
#include <stdio.h>
using namespace std;

int Sum (int value1, int value2)
{
    int result = value1 + value2;
    return result;
}

int main()
{
    for(int i = 0; i < 3; i++)
    {
        int value1, value2;

        scanf("%d %d",&value1,&value2);
        printf("%d\n", Sum(value1, value2));
    }
    
    return 0;
}
