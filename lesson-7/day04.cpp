#include <iostream>
#include <fstream>
#include <string>

using namespace std;

class Elf
{
    private:
        int sectionStart;
        int sectionEnd;
    
    public:
        Elf()
        {
            this->sectionStart=0;
            this->sectionEnd=0;
        }
        void MoveToDifferentPair(int start, int end)
        {
            this->sectionStart=start;
            this->sectionEnd=end;
        }
};

class Santa
{
    private:
        int howManyPairsMatchUp;

    public:
        Santa()
        {
            this->howManyPairsMatchUp=0;
        }
        void CompareSections(int first, int second, int third, int fourth)
        {
            if(first>=third && second>=fourth) this->howManyPairsMatchUp++;
            else if(third>=first && fourth>=second) this->howManyPairsMatchUp++;
        }
        int Result()
        {
            return this->howManyPairsMatchUp;
        }
};

int main()
{
    ifstream File("Day04.txt");
    string read;

    Santa MySanta;
    Elf FirstElf;
    Elf SecondElf;

    while(!File.eof())
    {
        getline(File,read);
        int index=read.find(",");
        string a=read.substr(0,index);
        string b=read.substr(index+1,read.size()-1);

        //here I would divide a line of input to get the numbers for each elf and assign them to objects
    }
    int result=MySanta.Result();
    cout<<result;
}