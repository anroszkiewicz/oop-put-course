#include <iostream>
#include <fstream>
#include <algorithm>

using namespace std;

class Elves
{
    private:
        int currentCalories;
        int maximumCalories;

    public:
        Elves()
        {
            this->currentCalories=0;
            this->maximumCalories=0;
        }
        void GetMoreFood(int newfood)
        {
            this->currentCalories=this->currentCalories+newfood;
        }
        void CompareElves()
        {
            if(this->currentCalories>this->maximumCalories) 
            {
                this->maximumCalories=this->currentCalories;
            }
        }
        void GetNewElf()
        {
            this->currentCalories=0;
        }
        int Maximum()
        {
            return this->maximumCalories;
        }
};

int main()
{
    ifstream File("Day01.txt");
    
    int x;
    string read;

    Elves MyElves;

    while(!File.eof())
    {
        getline(File,read);
        if(read!="")
        {
            x=atoi(read.c_str());
            MyElves.GetMoreFood(x);
        }
        else
        {
            MyElves.CompareElves();
            MyElves.GetNewElf();
        }
    }
    int result=MyElves.Maximum();
    cout<<result;
}