#include <string>
#include <iostream>
using namespace std;


void change(const string &s)
{
    string s2 = s + "No !";
    cout << "s2:" << s2 << endl;
}

int main()
{
    string str("Can you change it?");
    change(str);
    cout << "str:" << str << endl;

    return 0;
}


