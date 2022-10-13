#include <iostream>

using namespace std;

class Person
{
    public:
        string firstName;
        string lastName;
        int age;
        string occupation;
        void sayHi(string name)
        {
            cout<<"Hi "<<name<<endl;
        }
};

class Subject
{
    public:
        string name;
        int howManyHours;
        bool isImportant;
        void attendLesson(string name)
        {
            cout<<name<<" attended lesson"<<endl;
        }
};

class Room
{
    public:
        string number;
        string buildingCode;
        string buildingName;
        bool isLectureHall;
        bool isComputerRoom;
};

int main()
{
    Person me;
    me.firstName="Anna";
    me.lastName="Roszkiewicz";
    me.age=19;
    me.occupation="student";

    Person personNextToMe;
    personNextToMe.firstName="Mikolaj";
    personNextToMe.lastName="Nowak";
    personNextToMe.age=20;
    personNextToMe.occupation="student";

    me.sayHi(personNextToMe.firstName);

    Subject currentSubject;
    currentSubject.name="Object Oriented Programming";
    currentSubject.howManyHours=30;
    currentSubject.isImportant=1;

    currentSubject.attendLesson(me.firstName);
    currentSubject.attendLesson(personNextToMe.firstName);

    Room currentRoom;
    currentRoom.number="2.6.21";
    currentRoom.buildingCode="A23";
    currentRoom.buildingName="Centrum Wykladowe";
    currentRoom.isLectureHall=0;
    currentRoom.isComputerRoom=1;
}
