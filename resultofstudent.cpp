#include <iostream>
#include <string>
using namespace std;
struct student
{
    string name;
    int marks;
};
void data(struct student s[], int n)
{
    int i;
    for (int i = 0; i < n; i++)
    {
        cout << "enter student name" << endl;
        cin >> s[i].name;
    here:
        cout << "enter " << s[i].name << "'s marks" << endl;
        cin >> s[i].marks;
        if (s[i].marks > 100)
        {

            cout << "invalid marks!!" << endl;

            goto here;
        }
    }
}
    float avg(struct student s[], int n)
    {
        int sum = 0, i;
        float avg;
        for (i = 0; i < n; i++)
            sum = sum + s[i].marks;
        avg = (float)sum / n;
        return avg;
    }
    void order(struct student s[], int n)
    {
        int i, j;
        for (i = 0; i < n; i++)
        {
            for (j = 0; j < n - 1 - i; j++)
            {
                if (s[j].marks < s[j + 1].marks)
                {
                    int temp = s[j].marks;
                    string name = s[j].name;
                    s[j].marks = s[j + 1].marks;
                    s[j].name = s[j + 1].name;
                    s[j + 1].marks = temp;
                    s[j + 1].name = name;
                }
            }
        }
    }
    char grade(int g){
        if(g>81)
        return 'A';
        else if (g>61)
        return 'B';
        else if (g>41)
        return 'C';
        else if (g>21)
        return 'D';
        else
        return 'E';

    }
    void print(struct student s[], int n)
    {   cout<<"students result"<<endl;
        int i;
        for (i = 0; i < n; i++)
        {
            cout << i+1<<". student name:" << s[i].name << endl;
            cout << "marks obtained:" << s[i].marks << endl;
            cout<< "grade:"<<grade(s[i].marks )<<endl;
            cout << "---------------------------------------------------------" << endl;
        }
    }
    main()
    {
        int n, i;
        cout << "enter number of students" << endl;
        cin >> n;
        student s[n];
        data(s, n);
        float average;
        average = avg(s, n);
        cout << endl
             << "average is " << average << endl;
        cout << "--------------------------------------------------------" << endl;
        order(s, n);
        print(s, n);
    }