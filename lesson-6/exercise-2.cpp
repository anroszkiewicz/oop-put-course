#include <iostream>
#include <cmath>
#include <stdexcept>

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
            if(this->base<=0 || this->base==1) throw invalid_argument("invalid base");
            if(this->argument<=0) throw out_of_range("invalid argument");

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
    catch(invalid_argument)
    {
        cout<<"Can't calculate logarithm."<<endl;
        cout<<"Base should be a positive number not equal to one."<<endl;
    }
    catch(out_of_range)
    {
        cout<<"Can't calculate logarithm."<<endl;
        cout<<"Argument should be a positive number."<<endl;
    }
}
