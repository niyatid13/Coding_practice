#include<stdio.h>
#include<stdlib.h>

using namespace std;

int main()
{

for(int i = 0; i< 10; i++)
{
    int *p;
    p = (int*)malloc(sizeof(int)); // (definition is lying under the code)
    cout << p;
}

return 0;
}