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

    //原样输出
    copy(a, a+4, ostream_iterator<double>(cout,","));
    cout << endl;

    //逆向输出
    reverse_copy(a, a+4, ostream_iterator<double>(cout," "));
    cout << endl;

    //原样复制到b
    copy(a, a + 4, b);
    copy(b, b+4, ostream_iterator<double>(cout,","));
    cout << endl;

    //对数组a升幂排序
    sort(a, a + 4);
    copy(a, a + 4, ostream_iterator<double>(cout," "));
    cout << endl;

    //将a逆向复制到b
    reverse_copy(a, a + 4, b);
    copy(b, b + 4,ostream_iterator<double>(cout," "));
    cout << endl;



    return 0;
}
     