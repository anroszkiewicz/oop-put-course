#include <iostream>
#include <cmath>

using namespace std;

class Number
{
    public:
        virtual double doubleValue()=0;
};

class Logarithm : public Number
{
    private:
        double base,argument;

    public:
        Logarithm(double inputBase, double inputArgument)
        {
            this->base = inputBase;
            this->argument = inputArgument;
        }
        double doubleValue()
        {
            if(this->base<=0 || this->base==1 || this->argument<=0) throw(this->base);

            return log(this->argument)/log(this->base);
        }
};

int main()
{
    double myBase,myArgument;
    cin>>myBase>>myArgument;
    try
    {
        Logarithm myLogarithm(myBase,myArgument);
        cout<<myLogarithm.doubleValue();
    }
    catch(double base)
    {
        cout<<"Can't calculate logarithm."<<endl;
        cout<<"Base should be a positive number not equal to one."<<endl;
        cout<<"Argument should be a positive number."<<endl;
    }
}
