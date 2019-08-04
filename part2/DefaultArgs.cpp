#include <iostream>
using namespace std;

int sum(int n1 = 0, int n2 = 0, int n3 = 0, int n4 = 0)
{
    return n1 + n2 + n3 + n4;
}

int main()
{
    cout << "sum(1,3):" << sum(1,3) << "\r\nsum(1,3,5):" << sum(1,3,5) << "\r\nsum(1,3,5,7):" << sum(1,3,5,7);

    cout << endl;
    system("pause");
    return 0;
}
