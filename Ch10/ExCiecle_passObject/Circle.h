#ifndef CIRCEL_H //CIRCLE_H�� ���ǵǾ����� ������
#define CIRCEL_H //CIRCLE_H�� �����϶�.
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
