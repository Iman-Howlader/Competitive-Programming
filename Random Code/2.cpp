#include <iostream>
#include <string>

using namespace std;

class Student
{
public:
    string name;
    char sec;
    int id;
    int marks;

    Student(int id, string name, char sec, int marks)
    {
        this->name = name;
        this->sec = sec;
        this->id = id;
        this->marks = marks;
    }
};

Student *fun(int id, string name, char sec, int marks)
{
    Student *k = new Student(id, name, sec, marks);
    return k;
}

int main()
{
    int id, marks;
    string name;
    char sec;
    int t;
    cin >> t;
    while (t--)
    {
        Student *can[3];
        int high_marks = 0;
        Student *highest_marks_student = nullptr;

        for (int i = 0; i < 3; ++i)
        {
            cin >> id >> name >> sec >> marks;
            can[i] = fun(id, name, sec, marks);

            if (high_marks < can[i]->marks)
            {
                high_marks = can[i]->marks;
                highest_marks_student = can[i];
            }
        }
        cout << highest_marks_student->id << " " << highest_marks_student->name << " " << highest_marks_student->sec << " " << highest_marks_student->marks << endl;
        //delete highest_marks_student;
        for (int i = 0; i < 3; i++)
        {
            delete can[i];
        }
        
    }

    return 0;
}
