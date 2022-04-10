//Reads quiz scores for each student into the two-dimensional array grade
#include <iostream>
#include <iomanip>
const int NUMBER_STUDENTS = 4, NUMBER_QUIZZES = 3;

void computeStAve(const int grade[][NUMBER_QUIZZES], double stAve[]);
void computeQuizAve(const int grade[][NUMBER_QUIZZES], double quizAve[]);
void display(const int grade[][NUMBER_QUIZZES],
    const double stAve[], const double quizAve[]);

int main()
{
    using namespace std;
    int grade[NUMBER_STUDENTS][NUMBER_QUIZZES];
    double stAve[NUMBER_STUDENTS];
    double quizAve[NUMBER_QUIZZES];
    computeStAve(grade, stAve);
    computeQuizAve(grade, quizAve);
    display(grade, stAve, quizAve);
    return 0;
}

void computeStAve(const int grade[][NUMBER_QUIZZES], double stAve[])
{
    for (int stNum = 1; stNum <= NUMBER_STUDENTS; stNum++)
    {
        double sum = 0;
        for(int quizNum = 1; quizNum <= NUMBER_QUIZZES; quizNum++)
        {
            sum = sum + grade[stNum - 1][quizNum - 1];
    
        }
        stAve[stNum -1] = sum /NUMBER_QUIZZES;
    }
}

void computeQuizAve(const int grade[][NUMBER_QUIZZES], double quizAve[])
{
    for(int quizNum = 1; quizNum <= NUMBER_QUIZZES; quizNum++)
    {
        double sum = 0;
        for (int stNum = 1; stNum <= NUMBER_QUIZZES; stNum++)
        {
            sum = sum + grade[stNum -1][quizNum - 1];
        }
        quizAve[quizNum-1] = sum / NUMBER_STUDENTS;
    }

}

void display(const int grade[][NUMBER_QUIZZES],
    const double stAve[], const double quizAve[])
    {
        using namespace std;
        cout.setf(ios::fixed);
        cout.setf(ios::showpoint);
        cout.precision(1);
        cout << setw(10) << "Student"
            << setw(5) << "Ave"
            << setw(15) << "Quizzes\n";
        for (int stNum = 1; stNum <= NUMBER_STUDENTS; stNum++)
        {
            cout << setw(10) << stNum
                << setw(5) << stAve[stNum - 1] << " ";
        
            for (int quizNum = 1; quizNum <= NUMBER_QUIZZES; quizNum++)
            {
                cout << setw(5) << grade[stNum - 1][quizNum - 1];
            }
            cout << endl;
        }
        cout << "Quiz averages = ";
        for(int quizNum = 1; quizNum <= NUMBER_QUIZZES; quizNum++)
        {
            cout << setw(5) << quizAve[quizNum -1];
        }
        cout << endl;
    }