#include<iostream>
using namespace std;

class Shape{
    public: double a,b;
        virtual void get_data ()= 0;
        virtual void display_area () = 0;
};

class Triangle:public Shape{
	public:void get_data(){
		cout<<"Enter base and altitude of a triangle:\n";
		cin>>a>>b;
	}
    public: void display_area (){
        cout<<"Area of triangle is : "<<0.5*a*b<<endl;
    }
};

class Rectangle:public Shape{
	public:void get_data(){
		cout<<"Enter length and breadth for rectangle:\n";
		cin>>a>>b;
	}
    public: void display_area(){
        cout<<"Area of rectangle is : "<<a*b<<endl;
    }
};

int main()
{
    Triangle t1;
    Shape *t = &t1;
    t->get_data();
	t->display_area();
	
	
    Rectangle r1;
    Shape *r = &r1;
    r->get_data();
    r->display_area();
    return 0;
}
