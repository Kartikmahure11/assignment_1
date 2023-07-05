#include <iostream>

using namespace std;
class Area{
public:
double lenght;
double breadth;

Area(double len , double bre)
{
    lenght=len;
    breadth=bre;
}

double returnArea()
{
    return lenght*breadth;
}
};

int main()
{
    double lenght,breadth;
    cout<<"ENTER THE LENGHT OF REACTANGLE :";
    cin>>lenght;
    cout<<"ENTER THE BREADTH OF REACTANGLE :";
    cin>>breadth;


    Area a(lenght,breadth);
    double area=a.returnArea();
    cout << "AREA OF REACTANGLE :"<< area << endl;
    return 0;
}
