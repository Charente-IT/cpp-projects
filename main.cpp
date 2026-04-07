
#include <iostream>

using namespace std;

int main()
{
int x;
int y;
char operation ;
int result;

cout<<"what is the first number?";
cin>>x;
retype:
cin>>operation;

cout<<"what is the second number?"
cin>>y;
switch
case (operation == "+")
{
    result = x + y;

}
case (operation == "-")
{
    result = x - y;

}
case (operation == "÷")
{
    result = x/y;

}
case (operation == "X")
{
    result = x*y;
}
default {operation==NULL}{
cout<<"That is an invalid "
goto retype;
}
cout<<"The result of the calculation is :"<<result<<endl;
    }
    result=0;
    }
