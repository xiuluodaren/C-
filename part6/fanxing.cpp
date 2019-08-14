#include <iostream>
#include <algorithm>
#include <vector>
#include <iterator>

using namespace std;

int main()
{
    double a[] = {1.1,4.4,3.3,2.2};
    vector <double> va(a, a + 4),vb(4); //定义并初始化向量va
    typedef vector<double>::iterator iterator;  //自定义一个正向泛型指针标识符 iterator
    iterator first = va.begin();        //自定义泛型指针first并指向va的首元素
    for (first; first < va.end();first++)   //循环正向输出va
    {
        cout << *first << " ";
    }

    for (--first;first > va.begin() - 1;first--) //循环逆向输出va
    {
        cout << *first << " ";
    }
    
    copy(va.begin(), va.end(), ostream_iterator<double>(cout," ")); //整体正向输出va
    cout << endl;

    typedef vector<double>::reverse_iterator reverse_iterator;

    reverse_iterator last = va.rbegin();
    for (last;last < va.rend();last++)
    {
        cout << *last << " ";
    }

    for (--last;last > va.rbegin() - 1;last--)
    {
        cout << *last << " ";
    }

    copy(va.rbegin(),va.rend(),ostream_iterator<double>(cout," "));

    return 0;
}
