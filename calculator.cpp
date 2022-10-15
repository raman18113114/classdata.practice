// Program for Calculator Using Class

#include <iostream>
using namespace std;

// Defining Class And Adding data Member.
class Calculator
{
private:
    float a, b, result;

public:
    void getdata();
    void sum();
    void sub();
    void mult();
    void div();
};

// Function of Class and defining Them.

// Function of Getting Data
void Calculator::getdata()
{
    cout << "Enter A : ";
    cin >> a;
    cout << "Enter B : ";
    cin >> b;
}
// Function of Sum
void Calculator::sum()
{
    result = a + b;
    cout << a << " + " << b << " = " << result << endl;
}
// Function of Subtraction
void Calculator::sub()
{
    result = a - b;
    cout << a << " - " << b << " = " << result << endl;
}
// Function of Multiplication
void Calculator::mult()
{
    result = a * b;
    cout << a << " * " << b << " = " << result << endl;
}
// Function of Division
void Calculator::div()
{
    result = a / b;
    cout << a << " / " << b << " = " << result << endl;
}

// Calling of main Function
int main()
{
    int i = 1;
    char a;
    char opration;
    Calculator obj1;
    

    
    obj1.getdata();

    do
    {

        cout << "choice the operation from below : " << endl;
        cout << "presss '+' for addition :" << endl;
        cout << "press '-' for substraction :" << endl;
        cout << "press 'x' for substraction :" << endl;
        cout << "press '/' for substraction :" << endl;
        cout << "press '#' for re-enter the numbers :" << endl;
        cin >> opration;
        switch (opration)
        {

        case '+':
            obj1.sum();
            break;
        case '-':
            obj1.sub();
            break;
        case 'x':
            obj1.mult();
            break;
        case '/':
            obj1.div();
            break;
        case '#':
            obj1.getdata();
            break;
        default:
            cout << "invalid option :" << endl;
        }
        cout << "do you want to continue(y/n) " << endl;
        cin >> a;

    } while (a == 'y');

    return 0;
}
