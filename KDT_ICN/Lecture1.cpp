#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    int a;
    float b;
    
    a = 123.45;
    b = 200;
    
    cout <<"a의 값은 " << a << " 이다" << endl;
    cout <<"b의 값은 " << b << " 이다" << endl;
    printf("a의 값은 %d이다\n",a);
    printf("b의 값은 %f이다\n",b);
    
    return 0;
}
