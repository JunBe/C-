#ifndef CIRCLE_H //CIRCLE_H�� ���ǵǾ����� ������
#define CIRCLE_H //CIRCLE_H�� �����϶�.
class Circle {
public:
	double radius;//member variable
	Circle(); //Constructor without arg
	Circle(double r); //constructor with arg
	~Circle();//deconstructor
	double getArea(); //member function
};
#endif
