// Inheritance
// Inheritance is an object-oriented programming concept where a class (derived class) acquires the properties and behaviors (methods and variables) of another class (base class).
// It allows code reusability and establishes a relationship between classes.

#include <iostream>
using namespace std;
class Point
{
    int x;
    int y;
    void print_points();
};

class Shape
{
public:
    int num_points; // Future
    Point *points;
    Shape();
    void set_points(Point *p);
    float get_area();
};
Shape::Shape(){
    cout<<"In Shape constructor ..."<<endl;
    points=NULL;//Initialize
    num_points=0;
    // do nothing . Can't decide what "Shape " is ...
}
float Shape::get_area(){
//again , can't do anything
return -1,0;
}
// xxxxxxxxxxxxxxxxxxxxxxxx
// let's Inherit this class 
class Triangle : public Shape
{   public:
    Triangle();
    void set_points(Point *points);
    void show_shape();
     float get_area(); // function overriding
};
Triangle::Triangle(){
    cout<<"In Traingle cosntructor"<<endl;
    num_points=3;
}
void Triangle::set_points(Point *p)
{
    this->points = p;
}
void Triangle::show_shape(){
    Point *temp = points; 
    temp++;

}
float Triangle::get_area() {
    int x0, y0, x1 , y1, x2,y2;   //remporary points for easy use
    Point *t = points;
    x0 = t->x;
}
int main()
{
}