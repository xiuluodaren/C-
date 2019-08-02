// 数组升幂排序
#include <algorithm>
// 数组降幂排序
#include <functional>
#include <iostream>
#include <iterator>
using namespace std;

int main()
{
    double a[] = {1.1,4.4,3.3,2.2}, b[4];
    copy(a, a+4, ostream_iterator<double>(cout,","));
    cout << endl;

    return 0;
}
