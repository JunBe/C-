#ifndef CIRCLE_H //CIRCLE_H�� ���ǵǾ����� ������
#define CIRCLE_H //CIRCLE_H�� �����϶�.
class Circle {
public:
	
	Circle(); //Constructor without arg
	Circle(double r); //constructor with arg
	Circle(const Circle& obj);
	~Circle();//deconstructor
	double getArea(); //member function
	double getRadius();
	void setRadius(double r);
	void ShowYourself();
private:
	double radius;//member variable
};
#endif