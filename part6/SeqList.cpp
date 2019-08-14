#include <iostream>
#include <vector>
#include <cstring>
using namespace std;

class SeqList{
    char name[10];
    public :
        void DispName(){cout << name;}
        void SetName(char b[]){strcpy(name,b);}
        void Joseph(vector<SeqList>&);
};

void SeqList::Joseph(vector<SeqList> &c)
{
    int m, star, i, j, k;
    cout << "请输入间隔数m(m <= 20):";
    cin >> m;

    while (m > 20)
    {
        cout << "间隔太大,请重新输入:";
        cin >> m;
    }

    cout << "从第几个人的位置开始报数(不能大于" << c.size() << "):";
    cin >> star;
    while(star > c.size()){
        cout << "开始位置大于人数,重新输入:";
        cin >> star;
    }

    cout << "准备输入名字" << endl;
    getchar();
    char s[10];

    for (int i = 0; i < c.size(); i++)
    {
        cout << "第" << i + 1 << "个人的名字:";
        gets(s);
        c[i].SetName(s);
    }
    
    i = star - 2;
    vector<SeqList>::iterator p;
    p = c.begin();
    int length = c.size();

    for (k = 1; k <= length; k++)
    {
        j = 0;
        while (j < m)
        {
            i++;
            if(i == c.size())
                i = 0;
            j++;    
        }

        if (k == length) break;
        c[i].DispName();
        cout << ",";
        c.erase(p + i);
        --i;
        
    }
    
    c[i].DispName();
    cout << endl;

}

int main()
{
    int length = 0;
    cout << "请输入人数:";
    cin >> length;
    vector<SeqList>c(length);
    SeqList game;
    game.Joseph(c);

    system("pause");
    return 0;
}

