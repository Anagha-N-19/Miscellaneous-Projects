#include<iostream>

using namespace std;

class Polygon{

public:
    int area;
    int side1;
};

class Square:public Polygon{

public:
    void find_area(int side1){
        area = side1 * side1;
    }
};

class Rectangle:public Polygon{
public:
    int side2;

    void find_area(int side1, int side2){
        area = side1 * side2;
    }
};

int main(){

    Square s;
    cout << "Enter side of square\n";
    cin>> s.side1;
    s.find_area(s.side1);
    cout << "Area of square: " << s.area << endl;

    Rectangle r;
    cout<< "Enter length and breadth of rectangle \n";
    cin>> r.side1>> r.side2;
    r.find_area(r.side1, r.side2);
    cout<<"Area of rectangle: "<< r.area<<endl;



    return 0;
}
