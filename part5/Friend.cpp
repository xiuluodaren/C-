#include <iostream>
#include <cmath>
using namespace std;

class Point{
    private:
        double X, Y;

    public :
        Point(double xi, double yi){
            X = xi, Y = yi;
        }

        double Getx(){return X;}
        double Gety(){return Y;}

        friend double distance(Point& ,Point&);

};

double distance(Point& a, Point& b)
{
    double dx = a.X - b.X;
    double dy = a.Y - b.Y;

    return sqrt(dx * dx + dy * dy);
}

// int main(){
//     Point p1(3.5, 5.5), p2(4.5,6.5);
//     cout << "The distance is " << distance(p1, p2) << endl;

//     return 0;
// }


class Two;
class One{
    private:
        int x;
    public :
        One(int a){x = a;}
        int Getx(){return x;}
        void func(Two &);
};

class Two{
    private :
        int y;
    public :
        Two(int b){y = b;}
        int Gety(){return y;}
        friend void One::func(Two &);   //声明类One的函数为友元函数
};

void One::func(Two &r)
{
    r.y = x;
}

int main()
{
    One Obj1(5);
    Two Obj2(8);
    cout << Obj1.Getx() << " " << Obj2.Gety() << endl;
    Obj1.func(Obj2);
    cout << Obj1.Getx() << " " << Obj2.Gety() << endl;

    return 0;
}

