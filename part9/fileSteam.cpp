// 文件流
#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;

int main()
{
    char ch[15], *p = "abcdefg";
    ofstream myFile;
    myFile.open("myText.txt");
    myFile << p;
    myFile << "GoodBye!";
    myFile.flush();
    myFile.close();
    ifstream getText("myText.txt");
    for (int i = 0; i < strlen(p) + 8; i++)
    {
        getText >> ch[i];
    }
    ch[15] = '\0';
    getText.close();
    cout << ch;
    cout << endl;

    return 0;
}

