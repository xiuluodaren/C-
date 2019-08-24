#include <iostream>
#include <iomanip>
using namespace std;

// 17 f aaaaaaa100 OK
// int main()
// {
//     cout << oct << 15 << " ";
//     cout << hex << 15 << " ";
//     cout << setfill('a') << setw(10);
//     cout << 256 << " OK" << endl;

//     return 0;
// }

int main()
{
    for (int i = 0; i < 10; i++)
    {
        cout << endl << setw(10 - i) << '*' << setw(10) << '*';
    }
    

    return 0;
}

