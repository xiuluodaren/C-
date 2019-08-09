#include <iostream>
using namespace std;

class Test{
    static int x;
    int n;

    public :
    Test(){}
    Test(int a, int b){
        x = a, n = b;
    }

    static int func(){
        return x;
    }

    static void sfunc(Test &r, int a);

    int Getn(){return n;}

};

int Test::x = 25;

void Test::sfunc(Test &r, int a){
    r.n = a;
}

int main(){
    cout << Test::func() << endl;
    Test b, c;
    b.sfunc(b, 58);
    cout << " " << b.Getn() << endl;
    cout << " " << b.func() << endl;
    cout << " " << c.func() << endl;
    Test a(24, 56);
    cout << " " << a.func() << " " << b.func() << " " << b.func() << endl;

    return 0;
}


