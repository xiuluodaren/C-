#include <iostream>
#include <iterator>
using namespace std;

float* input(int&);

int main(){
    int num;
    float *data;

    data = input(num);
    if (data){
        for (int i = 0;i < num; i++)
        {
            cout << data[i] << " ";
        }
        delete data;
    }

    system("pause");
    return 0;
}

float* input(int& n)
{
    cout << "Input number:";
    cin >> n;
    if (n <= 0) return NULL;
    float *buf = new float[n];
    if (buf == 0) return NULL;

    for (int i = 0; i < n; i++)
    {
        cin >> buf[i];
    }

    return buf;

}

