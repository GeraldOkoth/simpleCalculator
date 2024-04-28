//Simple calculator
#include <iostream>
#include <math.h>

using namespace std;
/**
 * This is a simple calculator which implements some mathematical functions
 *
 *
 */
//Global variable declaration.
const double PI = 3.142;
int num;

//Function prototype/function declaration.
double areaOfCircle(double radius);
double areaOfTriangle(double base, double height);
double areaOfRectangle(double length, double width);
double averageOfNums(double firstNumber, double secondNumber);
double sumOfEvenNums();
double sumOfOddNums();
double basicOperations();


int main()
{
    //local variables
    float area, base, height, length, width, firstNumber, secondNumber;
    double radius, average;
    int selectOption;

    cout << "\t\t\t\t\t\t======Calculator======" <<endl;
    cout << "\t\t\t\t\t\t      ----------" <<endl;

    cout << "This calculator provides specific functions to compute some mathematical operations." <<endl;
    cout << "Please select an option below for the mathematical operation you want to perform: " <<endl <<endl;

    cout << "---options---" <<endl;
    cout << "1. Area of a Circle" <<endl << "2. Area of a Triangle" <<endl << "3. Area of a Rectangle" <<endl << "4. Average" <<endl
         << "5. Sum of Even numbers" <<endl << "6. Sum of Odd numbers" <<endl << "7. Basic operations" <<endl <<endl;

    cin >> selectOption; //Store user's input.
    switch(selectOption)
    {
        case 1:
            cout << "You have selected option 1." <<endl;
            cout << "Please enter the radius of the circle: ";
            cin >> radius;
            area = areaOfCircle(radius); //variable is only being accessed and not modified
            cout <<"\nArea of the circle is " <<area <<" square units" << endl;
            break;
        case 2:
            cout << "You have selected option 2." <<endl;
            cout << "Please enter the base and height of the triangle: " <<endl;
            cout << "Base: ";
            cin >> base;
            cout << "Height: ";
            cin >> height;
            area = areaOfTriangle(base, height); //variable is only being accessed and not modified
            cout <<"\nArea of the triangle is " <<area <<" square units" << endl;
            break;
        case 3:
            cout << "You have selected option 3." <<endl;
            cout << "Please enter the length and width of the rectangle: " <<endl;
            cout << "length: ";
            cin >> length;
            cout << "width: ";
            cin >> width;
            area = areaOfRectangle(length, width); //variable is only being accessed and not modified
            cout <<"\nArea of the rectangle is " <<area <<" square units" << endl;
            break;
        case 4:
            cout << "You have selected option 4." <<endl;
            cout << "Please enter at least two numbers: " <<endl;
            cout << "first number: ";
            cin >> firstNumber;
            cout << "second number: ";
            cin >> secondNumber;
            average = averageOfNums(firstNumber, secondNumber); //variable is only being accessed and not modified
            cout <<"\nThe average is " <<average  << endl;
            break;
        case 5:
            cout << "You have selected option 5." <<endl;
            cout << "Sum of even numbers between 1 and 100 is: " << sumOfEvenNums() <<endl;
            break;
        case 6:
            cout << "You have selected option 6." <<endl;
            cout << "Sum of odd numbers between 1 and 100 is: " << sumOfOddNums() <<endl;
            break;
        case 7:
            cout << "You have selected option 7." <<endl;
            basicOperations();
            break;
        default:
            cout << "invalid option! Please try again." <<endl;
    }
    return 0;
}

//Function definition
//Function to compute area of a circle upon radius input from the user
double areaOfCircle(double radius)
{
    return radius * radius * PI;
}
//Function to compute area of a triangle upon base and height input from the user
double areaOfTriangle(double base, double height)
{
    return (base * height)/2;
}
//Function to compute area of a rectangle upon length and width input from the user
double areaOfRectangle(double length, double width)
{
    return length * width;
}
//Function to compute the average of numbers entered by the user
double averageOfNums(double firstNumber, double secondNumber)
{
    return (firstNumber + secondNumber)/2;
}
//Function to compute the sum of even numbers
double sumOfEvenNums()
{
    int sum = 0;
    for(num = 2; num < 100; num++)
    {
        if(num%2 == 0)
        {
            sum += num;
        }
    }
    return sum;
}
//Function to compute the sum of odd numbers
double sumOfOddNums()
{
    int sum = 0;
    for(num = 1; num < 100; num++)
    {
        if(num%2 != 0)
        {
            sum += num;
        }
    }
    return sum;
}
//Function to perform basic operations
double basicOperations()
{
    int firstNum;
    int secondNum;
    char operator1;
    int result;

    cout <<"Please enter a number: " <<endl;
    cin >> firstNum;
    cout <<"Please enter another number: " <<endl;
    cin >> secondNum;
    cout <<"Please enter an operator: " <<endl;
    cin >>operator1;

    if (operator1 != '+' && operator1 != '-' && operator1 != '*' && operator1 != '/')
        cout <<"You entered an invalid operator! Please try again." << endl;
    else
    {
        switch(operator1)
        {
            case '+':
                cout <<firstNum <<" + " <<secondNum <<" = " <<result <<endl;
                result = firstNum + secondNum;
                break;
            case '-':
                cout <<firstNum <<" - " <<secondNum <<" = " <<result <<endl;
                result = firstNum - secondNum;
                break;
            case '*':
                cout <<firstNum <<" * " <<secondNum <<" = " <<result <<endl;
                result = firstNum * secondNum;
                break;
            case '/':
                cout <<firstNum <<" / " <<secondNum <<" = " <<result <<endl;
                result = firstNum / secondNum;
                break;
            default:
                cout <<"Invalid input!";
        }
    }
    return result;
}


