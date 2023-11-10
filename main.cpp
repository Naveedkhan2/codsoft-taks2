#include <iostream>

using namespace std;
// making function for operations
//addition
float sum(float a,float b)
{
    return(a+b);
}
//subtraction
float subtract(float c,float d)
{
    return(c-d);
}
//Multiplication
float multi(float e,float f)
{
  return(e*f);

}
//Devision
float devide(float g,float h)
{
    return (g/h);
}

int main()
{
char tryagain;

 do
{
 float num1,num2;
 char operations;

 cout <<"Enter first number = ";
 cin >>num1;
 cout <<"Enter second number = ";
 cin >>num2;

 cout<<"Enter operation to perform = ";
 cin>>operations;

 switch(operations)
 {
 case '+':
    cout <<"The sum = "<<sum(num1,num2)<<endl;
    break ;

 case '-':
    cout <<"The subtraction = "<<subtract(num1,num2)<<endl;
    break;

 case '*':
    cout <<"The Multiplication = "<<multi(num1,num2)<<endl;
    break;

 case '/':
    cout <<"The Devision = "<<devide(num1,num2)<<endl;//1/0 =infinity that shows as inf
    break;

 default :
     cout<<"Invalid operations Only (+,-.*,/)"<<endl;
     break;
 }
     cout << "would u like to try again? (Y/N): ";
     cin >> tryagain;


}
    while (tryagain == 'Y' || tryagain == 'y');

    return 0;
}
