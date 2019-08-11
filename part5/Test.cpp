#include <iostream>
using namespace std;
class test
{
	int x;
	public :
			test(int a)
			{
				x = a;
			}
			int GetX()
			{
				return x;
			}
};


int main()
{
	int i;//填空一，声明变量i
	test *p, a[2][3] = {{1, 2, 3}, {4, 5, 6}};
    cout << a[0] << endl;
	for( p=&a[0][0], i=0; i<=6; i++, p++)//填空2，初始化p，i
	{
		if((p-a[0])%3 == 0)
			cout<< endl;
		cout<< p->GetX() <<" ";
	}

    return 0;
}

