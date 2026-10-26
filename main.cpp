#include <iostream>
using namespace std;
int main()
{
    string student_name;
    int student_age;
    int exam_scores;
    string decision;

    cout<<"Enter student name: ";
    getline(cin,student_name);
    cout<<"Enter student age: ";
    cin>>student_age;
    cout<<"Enter student scores: ";
    cin>>exam_scores;

    //outer if checks age first
    if(student_age >=18)
    {//inner if checks scores if age passed
        if (exam_scores >=50)
        {
            decision = "Admitted";
        }
        else
        {
            decision = "Rejected Low scores";
        }
        //------------------------------------------------------------
    }
    //outer else: triggers when age is <18
    else
    {
        // inner if checks score
        if (exam_scores >=50)
        {
            decision = "Rejected underage";
        }
        else
        {
            decision = "Rejected Low score and underage";
        }
    }
    cout<<"Student name: "<<student_name<<endl;
    cout<<"Student age: "<<student_age<<endl;
    cout<<"Student scores: "<<exam_scores<<endl;
    cout<<decision<<endl;
    cout<<endl;
    return 0;
}