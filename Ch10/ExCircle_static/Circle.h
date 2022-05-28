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
private:
	double radius;//member variable
public:
	static int getNumobjs();
private:
	static int numobjs;
};

#endif
