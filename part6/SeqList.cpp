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
    cout << "����������m(m <= 20):";
    cin >> m;

    while (m > 20)
    {
        cout << "���̫��,����������:";
        cin >> m;
    }

    cout << "�ӵڼ����˵�λ�ÿ�ʼ����(���ܴ���" << c.size() << "):";
    cin >> star;
    while(star > c.size()){
        cout << "��ʼλ�ô�������,��������:";
        cin >> star;
    }

    cout << "׼����������" << endl;
    getchar();
    char s[10];

    for (int i = 0; i < c.size(); i++)
    {
        cout << "��" << i + 1 << "���˵�����:";
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
    cout << "����������:";
    cin >> length;
    vector<SeqList>c(length);
    SeqList game;
    game.Joseph(c);

    system("pause");
    return 0;
}

