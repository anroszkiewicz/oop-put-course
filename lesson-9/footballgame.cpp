#include <iostream>

using namespace std;

class Game
{
    public:
        virtual string result() = 0;
};

class FakeFootballGame : public Game
{
    public:
        virtual string result()
        {
            return "2 - 0";
        }
};

int main()
{
    FakeFootballGame newgame;
    if(newgame.result()=="2 - 0") cout<<"correct"<<endl;
    else cout<<"incorrect"<<endl;
}