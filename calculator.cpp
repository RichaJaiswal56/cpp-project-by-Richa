#include <iostream>
#include <cstdlib>
using namespace std;
void addition();
void subtraction();
void multiplication();
void division();

int main()
{
    cout << "\t\tWelcome to the calculator, developed by Richa Jaiswal!!\n"
         << endl;
    cout << "_______________Press c to exit the Program________________\n"
         << endl;
    cout << "Enter + for Addition \n"
         << endl;
    cout << "Enter - for Subtration \n"
         << endl;
    cout << "Enter * for Multiplication \n"
         << endl;
    cout << "Enter / for Division \n"
         << endl;
    char operation;
    while (1)
    {

        cout << "Enter the operation you want to perform: ";
        cin >> operation;
        switch (operation)
        {
        case '+':
            addition();
            break;
        case '-':
            subtraction();
            break;
        case '*':
            multiplication();
            break;
        case '/':
            division();
            break;
        case 'c':
            exit(0);

        default:
            cout << "\n ___________Operation Not Supported___________\n" << endl;
            break;
        }
    }

    return 0;
}
void addition()
{
    cout << "Enter the numbers you want to add: ";
    int a, b;
    cin >> a >> b;
    cout << "The addition of " << a << " and " << b << " is: " << a + b << endl;
}
void subtraction()
{
    cout << "Enter the numbers you want to add: ";
    int a, b;
    cin >> a >> b;
    cout << "The subtraction of " << a << " and " << b << " is: " << a - b << endl;
}
void multiplication()
{
    cout << "Enter the numbers you want to multiply: ";
    int a, b;
    cin >> a >> b;
    cout << "The multiplication of " << a << " and " << b << " is: " << a*b << endl;
}
void division()
{
    cout << "Enter the numbers you want to divide: ";
    int a, b;
    cin >> a >> b;
    cout << "The division of " << a << " and " << b << " is: " << (float)a / (float)b << endl;
}