#include <iostream>
#include <cmath>
using namespace std;


void printMenu();
double circleArea(double r);
double rectangleArea( double l, double w );
double triangleArea(double b, double h );
double circleCircumference(double r);
double rectanglePerimeter(double l, double w);
double trianglePerimeter(double s1, double s2, double s3);
double r,l,w,h,b,s1,s2,s3;
const double pi = 3.14159265358979323846;
int choice;
int main()
{
    do{
printMenu();
    cin >> choice;

        switch (choice) {
            case 1: cout<< "You choose find the area of a Circle"<< endl <<"Enter the radius of the Circle: ";
                cin >> r;
                circleArea(r);
                cout <<  "The area of the Circle is: " << circleArea(r) << endl<< endl;
                break;
            case 2: cout<< "You choose find the area of a Rectangle"<< endl <<"Enter the Length of the Rectangle: ";
                cin >> l;
                cout <<"Enter the Width of the Rectangle:";
                cin >> w;
                rectangleArea(l,w);
                cout<< "The area of the Rectangle is: " << rectangleArea(l,w) << endl<< endl;
                break;
            case 3: cout<< "You choose find the area of a Triangle"<< endl << "Enter the base of the Triangle: ";
                cin >> b;
                cout<< "Enter the height of the Triangle: ";
                cin >> h;
                triangleArea(b,h);
                cout<< "The area of the Triangle is: " << triangleArea(b,h) << endl<<endl;
                break;
            case 4: cout <<"You choose find the circumference of a Circle"<< endl<< "Enter the radius of the Circle: ";
                cin >> r;
                circleCircumference(r);
                cout<< " The circumference of the Circle is: " << circleCircumference(r) << endl<<endl;
                break;
            case 5: cout << "You choose find the perimeter of a Rectangle"<< endl << "Enter the Length  of the Rectangle: ";
                cin >> l;
                cout << "Enter the Width of the Rectangle: ";
                cin >> w;
                rectanglePerimeter(l,w);
                cout<< "The perimeter of the Rectangle is: " << rectanglePerimeter(l,w) << endl<<endl;
                break;
            case 6: cout<< "You choose find the perimeter of a Triangle"<< endl<< "Enter the first side of the Triangle: ";
                cin >> s1;
                cout<< "Enter the second side of the Triangle: ";
                cin >> s2;
                cout<< "Enter the third side of the Triangle: ";
                cin >> s3;
                trianglePerimeter(s1,s2,s3);
                cout<< "The perimeter of the Triangle is: " << trianglePerimeter(s1,s2,s3) << endl<<endl;
                break;
            case 7: cout<< "Program Stopped"<< endl<<endl;
                break;

            default:
                cout<< "You choose a invalid choice";
                break;

        }
    } while (choice != 7);


}

void printMenu(){
    cout<< "This is a Geometry Calculator" << endl;
    cout<< "Choose what you would like to calculate"<< endl;
    cout<< "1. Find the area of a Circle" << endl;
    cout<< "2. Find the area of a Rectangle" << endl;
    cout<< "3. Find the area of a Triangle" << endl;
    cout<< "4. Find the circumference of a Circle" << endl;
    cout<< "5. Find the perimeter of a Rectangle" << endl;
    cout<< "6. Find the perimeter of a Triangle" << endl;
    cout<< "7. Stop the program"<< endl;
    cout<< "Enter the number of your choice: ";
}

double circleArea(double r)
{
    return pi * pow(r,2);
}

double rectangleArea(double l, double w)
{
    return l * w;
}

double triangleArea(double b, double h)
{
    return  0.5* b * h;
}

double circleCircumference(double r)
{
    return 2 * pi * r;
}

double rectanglePerimeter(double l, double w)
{
    return (2 * l) + (2 * w);
}

double trianglePerimeter(double s1, double s2 , double s3)
{
    return s1 + s2 + s3;
}