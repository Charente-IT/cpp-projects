#include <iostream>
using namespace std;

int main(){
    //A C++ programme to calculate the electricity bill for a given household
    double units, rate, fixedcharge, taxrate, baseAmount, tax, totalbillAmount;
    //Inputting the units,rate,fixedcharge, and taxrate of electricity consumed
    cout<<"enter the total units in (kWh) : ";
    cin>>units;
    cout<<"enter the rate per unit";
    cin>>rate;
    cout<<"enter the fixedcharge";
    cin>>fixedcharge;
    cout<<"enter the taxrate in (%) ";
    cin>>taxrate;

    //calculating the baseAmount, tax, and totalbillAmount of electricity consumed
    baseAmount = units*rate+fixedcharge;
    tax = (taxrate/100)*baseAmount;
    totalbillAmount = baseAmount+tax;

    //outputting the totalbillAmount
    cout<<"Total electricity bill amount :$ "<<totalbillAmount<<endl;
    return 0;
}





