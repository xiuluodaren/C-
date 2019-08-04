#include <iostream>
#include <string>
#include <iterator>
using namespace std;

string input(const int);

string input(const int n)
{
    string s1,s2;
    for (int i = 0; i < n; i++)
    {
        cin >> s1;
        s2 += s1 + " ";
    }
    
    return s2;
}

int main()
{
    int n;
    cout << "Input n:";
    cin >> n;
    string str = input(n);
    
    copy(str.begin(), str.end(), ostream_iterator<char>(cout));

    system("pause");
    return 0;
}