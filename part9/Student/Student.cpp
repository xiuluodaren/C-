#include "Student.h"

void student::display(vector<student>& c)
{
    cout << "ѧ��" << setw(20) << "�ɼ�" << endl;
    for (int i = 0; i < c.size(); i++)
    {
        cout << c[i].GetNum() << setw(12) << c[i].GetScore() << endl;
    }
    
}

void student::set(vector<student>& c)
{
    student a;
    string s;
    double b;

    while (1)
    {
        cout << "ѧ��:";
        cin >> s;
        if (s == "0")
        {
            ofstream wst("stud.txt");
            if (!wst)
            {
                cout << "û����ȷ�����ļ�!" << endl;
                return;
            }

            for (int i = 0; i < c.size(); i++)
            {
                wst << c[i].number << " " << c[i].score << " ";
            }

            wst.close();
            cout << "һ��д��" << c.size() << "��ѧ����Ϣ.\n";
            return;
        }

        a.SetNum(s);
        cout << "�ɼ�:";
        cin >> b;
        a.Setscore(b);
        c.push_back(a);
        
    }

}

void student::read()
{
    string number;
    double score;
    ifstream rst("stud.txt");
    if (!rst)
    {
        cout << "�ļ��򲻿�\n";
        return;
    }

    cout << "ѧ��" << setw(20) << "�ɼ�" << endl;

    while (1)
    {
        rst >> number >> score;
        if (rst.eof())
        {
            rst.close();
            return;
        }

        cout << number << setw(12) << score << endl;
        
    }
    
}

int main()
{
    vector<student> st;
    student stud;
    stud.set(st);
    cout << "��ʾ����������Ϣ����:\n";
    stud.display(st);
    cout << "�����ļ��ڵ���Ϣ����:\n" << endl;
    stud.read();


    system("pause");
    return 0;
}



