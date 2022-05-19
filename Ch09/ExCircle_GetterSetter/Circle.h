#ifndef CIRCLE_H //CIRCLE_H가 정의되어있지 않으면
#define CIRCLE_H //CIRCLE_H를 정의하라.
class Circle {
public:
	
	Circle(); //Constructor without arg
	Circle(double r); //constructor with arg
	~Circle();//deconstructor
	double getArea(); //member function
	double getRadius();
	void setRadius(double r);
private:
	double radius;//member variable
};
#endif
