#include<iostream>
#include<string>
using namespace std;

int main()
{
    string subject;
    float grade, credit_hours, total_grade = 0, total_credit_hours = 0;
    int count = 0;

    cout << "Enter the number of subjects: ";
    cin >> count;

    for (int i = 1; i <= count; i++)
    {
        cout << "Enter subject " << i << ": ";
        cin >> subject;

        while (true)
        {
            cout << "Enter grade for subject " << i << ": ";
            cin >> grade;

            if (grade >= 0 && grade <= 10)
            {
                break;
            }
            else
            {
                cout << "Invalid grade. Please enter a grade between 0 and 10." << endl;
            }
        }

        while (true)
        {
            cout << "Enter credit hours for subject " << i << ": ";
            cin >> credit_hours;

            if (credit_hours >= 0)
            {
                break;
            }
            else
            {
                cout << "Invalid credit hours. Please enter a positive number." << endl;
            }
        }

        total_grade += grade * credit_hours;
        total_credit_hours += credit_hours;
    }

    float gpa = total_grade / total_credit_hours;

    cout << "GPA: " << gpa << endl;

    return 0;
}
