#include <iostream>
using namespace std;

template <class T>
T mymax (T n1, T n2)
{
    return (n1 > n2) ? n1 : n2;
}

int main()
{
    cout << mymax(2,5) << "\t" << mymax(2.0,5.0) << "\t"
        << mymax('w','a') << "\t" << mymax("ABC","ABD") << endl;

    system("pause");
    return 0;
}
