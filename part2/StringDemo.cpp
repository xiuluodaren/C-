#include <string>
#include <iostream>
#include <string>
#include <algorithm>
#include <iterator>

using namespace std;

void test1()
{
    string str1("We are here!");
    string str2 = "We are you?";
    cout << str1[0] << str1[11] << "," << str1 << endl;
    cout << str2[0] << str2[13] << "," << str2 << endl;
    cout << "please input a word:";
    cin >> str1;
    cout << "length of the " << str1 << " is " << str1.size() << "." << endl;
}

void test2()
{
    string str1 = "we are here!", str2 = str1;
    reverse(&str1[0], &str1[0] + 12);
    cout << str1 << endl;

    copy(&str1[0], &str1[0] + 12, &str2[0]);
    cout << str2 << endl;

    reverse_copy(&str2[0], &str2[0] + 12, ostream_iterator<char>(cout));
    cout << endl;

}

void test3()
{
    string str1 = "wearehere!", str2(str1);
    reverse(str1.begin(), str1.end());
    cout << "str1: " << str1 << endl;

    copy(str1.begin(), str1.end(), str2.begin());
    sort(str1.begin(), str1.end());
    cout << "str1: " << str1 << endl;
    cout << "str2: " << str2 << endl;
    reverse_copy(str1.begin(), str1.end(), str2.begin());
    cout << "str2: " << str2 << endl;

    reverse(str2.begin() + 2, str2.begin() + 8); //字符串str2部分逆向
    cout << "str2: " << str2 << endl;
    copy(str2.begin() + 2, str2.begin() + 8, ostream_iterator<char>(cout));
    cout << endl;

    sort(str1.begin(), str1.end(),greater<char>());
    cout << "str1: " << str1 << endl;
    str1.swap(str2);

    cout << str1 << " " << str2 << endl;

    cout << ( *find(str1.begin(), str1.end(), 'e') == 'e') << " " << ( *find(str1.begin(), str1.end(),'0') == '0') << endl;

}

int main()
{
    test3();

    system("pause");
    return 0;
}
