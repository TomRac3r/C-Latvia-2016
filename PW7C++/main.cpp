#include <iostream>
#include <cmath>
using namespace std;


class Point
 {
     public :
     Point();
     Point(double x, double y);
     ~Point();
     double Change(double x, double y, const Point &P) const;
     double Distance(const Point &P) const;
     void Afficher() const;
     void Saisir();

     private:
  double x,y;
 };

Point::Point() : x(0), y(0)
{}

Point::Point(double x, double y) : x(x), y(y)
{}
Point::~Point()
{
    cout<<"Point sucessfully destroyed!"<<endl;
}
void Point::Afficher() const
{
    cout << "Coordinate x : " << this->x << endl;
    cout << "Coordinate y : " << this->y << endl;
}
void Point::Saisir()
{
    cout << "Enter x coordinate : ";  cin >> this->x;
    cout << "Enter y coordinate : ";  cin >> this->y;
}
double Point::Change(double x, double y, const Point &P) const
{
    double dx = x + P.x;
    double dy = y + P.y;
    cout << "New Point coordinate are, x : " << dx << ", y : " << dy << endl;

}
double Point::Distance(const Point &P) const
{
    double dx =x - P.x;
    double dy =y - P.y;
    return sqrt(dx*dx + dy*dy);
}



int main()
{
    cout << "Labrit." << endl;

    Point A, B;
    double d;

    cout << "Enter coordinate of Point A : " << endl;
    A.Saisir();
    cout << endl;

    cout << "Enter coordinate of Point B : " << endl;
    B.Saisir();
    cout << endl;

    d = A.Distance(B);
    cout << "Distance between AB is : " << d << endl;

     A.Change(2,3,A);


    return 0;
}
