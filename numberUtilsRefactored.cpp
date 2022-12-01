#include <iostream>

using namespace std;

class TwoArgumentsCalculator
{
    private:
        int argument1;
        int argument2;

    public:
        TwoArgumentsCalculator(int a, int b)
        {
            this->argument1=a;
            this->argument2=b;
        }
        int maximum()
        {
            int a=argument1;
            int b=argument2;
            return a > b ? a : b;
        }
        int minimum()
        {
            int a=argument1;
            int b=argument2;
            return a < b ? a : b;
        }
        float average()
        {
            float a=float(argument1);
            float b=float(argument2);
            return (a+b)/2;
        }
};

int main()
{
    TwoArgumentsCalculator calculator(2,3);
    cout<<calculator.maximum()<<endl;
    cout<<calculator.minimum()<<endl;
    cout<<calculator.average()<<endl;
}
