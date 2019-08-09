#include <iostream>
using namespace std;

class Test{
    private :
        int n;

    public :
        Test(int i){
            n = i;
            cout << "constructor:" << i << endl;
        }

        ~Test(){
            cout << "destructor:" << n << endl;
        }

        int getn(){
            return n;
        }

        void inc(){
            ++n;
        }

};

int main()
{
    cout << "loop start:" << endl;

    for (int i = 0; i < 3; i++)
    {
        static Test a(3);
        Test b(3);
        a.inc();
        b.inc();
        cout << "a.n = " << a.getn() << endl;
        cout << "b.n = " << b.getn() << endl;

    }
    
    cout << "loop end." << endl;
    cout << "Exit main()" << endl;

    return 0;
}
