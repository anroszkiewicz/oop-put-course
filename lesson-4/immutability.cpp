#include <iostream>

using namespace std;

class Student
{
    public:
        virtual string name()=0;
        virtual double average()=0;
        virtual void addNewGrade(double grade)=0;
};

class ComputerScienceStudent: public Student
{
    private:
        string firstName;
        string lastName;
        double gradeAverage;
        int numberOfSubjects;

    public:
        ComputerScienceStudent(string firstname, string lastname, double gradeAverage, int numberOfSubjects)
        {
            this->firstName=firstname;
            this->lastName=lastname;
            this->gradeAverage=gradeAverage;
            this->numberOfSubjects=numberOfSubjects;
        }
        void addNewGrade(double grade)
        {
            double newAverage;
            newAverage=(this->gradeAverage*(double)this->numberOfSubjects+grade)/((double)this->numberOfSubjects+1);
            this->gradeAverage=newAverage;
            this->numberOfSubjects++;
        }
        string name()
        {
            return this->firstName+" "+this->lastName;
        }
        double average()
        {
            return this->gradeAverage;
        }
};

int main()
{
    ComputerScienceStudent Me("Anna","Roszkiewicz",5,1);
    cout<<Me.name()<<endl;
    Me.addNewGrade(4);
    cout<<Me.average()<<endl;
    Me.addNewGrade(5);
    cout<<Me.average()<<endl;
}
