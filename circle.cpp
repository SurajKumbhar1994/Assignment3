//Q12. write a program to accept number of circles N and radius and coordinates of center (x,y) for each circle. Select appropriate data
// structure and explain why you chose it. Arrange the circles in increasing order of their area and print all the data of each circle.
#include <iostream>
#include <algorithm>
#include <iterator>
#include <map>

using namespace std;

class Point
{
    float x, y;

public:
    Point()
    {
        x=0;
        y=0;
    }
    void setX(float x)
    {
        this->x = x;
    }
    void setY(float y)
    {
        this->y = y;
    }

    float getX()
    {
        return x;
    }
    float getY()
    {
        return y;
    }
};

class Circle
{
    double radius;
    Point P;

public:
    Circle()
    {
        radius=0;
    }
    double getRadius()
    {
        return radius;
    }
    void setRadius(double r)
    {
        radius = r;
    }
    void setPointXY(float x, float y)
    {
        P.setX(x);
        P.setY(y);
    }
    float getPointX()
    {
        return P.getX();
    }
    float getPointY()
    {
        return P.getY();
    }
    double area()
    {
        return 3.14 * (radius * radius);
    }
};

void printData(map<double, Circle> m1)
{
    int count=0;
    for (auto i : m1)
 {
    count++;
    cout<<"Details of circle "<<count<<endl;
    cout<<"Radius of circle = "<<i.second.getRadius()<<endl;
    cout<<"Coordinates of center of circle x,y ";
    cout<<i.second.getPointX()<<","<<i.second.getPointY();
    cout<<endl;
    cout<<"Area of the circle = "<<i.first<<endl;
    cout<<"-----------------------------------------------------------"<<endl;
 }
}

void insertData(map<double, Circle> &m1, Circle c, int N)
{
    double r;
    float x, y;
    for (int i = 0; i < N; i++)
    {
        cout << "Enter radius of the circle " << i + 1 << endl;
        cin >> r;
        cout << "Enter coordinates of center of circle x,y = " << endl;
        cin >> x >> y;
        c.setRadius(r);
        c.setPointXY(x,y);
        m1.insert({ c.area(), c });
    }
}

int main()
{
    int N;
    Circle c;
    map<double, Circle> m1;
    cout << "Enter Number of circle you want to enter" << endl;
    cin >> N;
    insertData(m1,c,N);
    printData(m1);
    return 0;   
}

