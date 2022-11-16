#include <iostream>

using namespace std;

class Magnet
{
    public:

        string Material;
        string Manufacturer;
        int Strength;
        bool IsInUse;

        Magnet(string material, string manufacturer, int strength, bool isinuse)
        {
            this->Material=material;
            this->Manufacturer=manufacturer;
            this->Strength=strength;
            this->IsInUse=isinuse;
        }

        int strengthen(double newstrength)
        {
            this->Strength=(int)newstrength;
        }

        void putOnFridge()
        {
            this->IsInUse=1;
            cout<<"You can't use this magnet. It's on my fridge"<<endl;
        }

        string companyname()
        {
            return this->Manufacturer;
        }

        int power()
        {
            return this->Strength;
        }
};

int main()
{
    Magnet myMagnet("nikiel","company1",10,0);
    myMagnet.strengthen(22.5);
    cout<<myMagnet.companyname()<<endl;
    myMagnet.putOnFridge();
    cout<<myMagnet.power()<<endl;
}

