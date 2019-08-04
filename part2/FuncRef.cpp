#include <iostream>
using namespace std;

//全局数组
int a[] = {2,4,6,8,10,12};
//函数声明
int& index(int);

int main()
{
    index(3) = 16;
    cout << index(3) << endl;

    return 0;
}

int& index(int i)
{
    return a[i];
}


