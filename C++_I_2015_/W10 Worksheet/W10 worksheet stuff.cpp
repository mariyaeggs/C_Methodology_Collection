#include <iostream>
using namespace std;
// Function Prototypes.
int input_grades();
int input_average(int,int);

int main()
{
    int average_grade = 0; 
    average_grade = input_grades(); 
    if (average_grade >= 90 && average_grade <=100) // 90 and above
        cout << "\nGrade average is: " << average_grade << "\nThat is an A.\n" << endl;
    else if (average_grade >= 80 && average_grade <= 89) //80-89
        cout << "\nGrade average is: " << average_grade << "\nThat is a B.\n" << endl;
    else if (average_grade >= 70 && average_grade <= 79) //70-79
        cout << "\nGrade average is: " << average_grade << "\nThat is a C.\n" << endl;
    else if (average_grade >= 60 && average_grade<= 69) //60-69
        cout << "\nGrade average is: " << average_grade << "\nThat is a D.\n" << endl;
    else if (average_grade >= 0 && average_grade <= 59) //0-59
        cout << "\nGrade average is: " << average_grade << "\nThat is an F.\n" << endl;
    else
        cout << "Invalid grade." << endl;
    return 0;
}
int input_grades()
{
    int class_grades;
    int user_grade = 0;
    int total_grades = 0;
    int average = 0;
    // Get number of grades.
    cout << "Enter number of classes to average their grades: \n" << endl;
    cin >> class_grades;
   
    for (int i = 1;i <= class_grades; i++)
    {
        cout << "\nEnter grade: \n"<< endl;
        cin >> user_grade;
        total_grades += user_grade;
    }
    // Call Function.
    average = input_average(total_grades,class_grades);
    return average;
}
int input_average(int total,int number)
{

    return (total)/number;
}
