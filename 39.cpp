#include<iostream>
#include<conio.h>
using namespace std;
class Add
{
private:
    int L,W;
public:
    void setAdd()
    {
        cout<<endl<<"\nEnter The Data(LENGTH AND WEIGHT) To Calculate Area of Rectangle: \n";
        cin>>L>>W;
    }
    void ShowAdd()
    {
        cout<<endl<<"Area of Rectangle Is: ";
        cout<<"\n"<<L*W;
    }
};
class Calculate:private Add
{
private:
    int LE,WE,HE;
public:
    void setCal()
    {
        cout<<endl<<"\nEnter the Data(LENGTH,WEIGTH AND HEIGHT) to calculate Volume of Rectangle: \n";
        cin>>LE>>WE>>HE;
    }
    void showCal()
    {
        cout<<endl<<"Volume of Rectangle Is: \n";
        cout<<LE*WE*HE;
    }
    void showData()
    {
        setAdd();
        ShowAdd();
        setCal();
        showCal();
    }
};

int main()
{
    int i;
    while(i==0){
    Calculate c1;
    c1.showData();
    getch();
    }i++;
}
