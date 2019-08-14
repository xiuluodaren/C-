#include <iostream>
#include <vector>
using namespace std;


int main()
{
    int IA[10] = {1,3,5,7,9,12,14,16,18,20};
    vector <int> VB(IA, IA + 10);

    for (int i = 0; i < VB.size(); i++)
    {
        cout << VB[i] << endl;
    }

    return 0;
}

