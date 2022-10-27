#include <iostream>

using namespace std;

class Ring
{
    public:

        int Diameter;
        string Material;
        string Stone;
        double Price;

        Ring(int d, string m, string s, double p) //parameterized
        {
            this->Diameter=d;
            this->Material=m;
            this->Stone=s;
            this->Price=p;
        }

        Ring(double diam) //converts into int
        {
            this->Diameter=int(diam);
        }
};

int main()
{
    Ring DiamondRing(10,"silver","diamond",4000);
    Ring RubyRing(9,"gold","ruby",5000);

    Ring AnotherDiamondRing(DiamondRing); //using the default copy constructor

    Ring JadeRing(8.88);


}
