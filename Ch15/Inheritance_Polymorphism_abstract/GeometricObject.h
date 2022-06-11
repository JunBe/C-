#ifndef GEOMETRICOBJECT_H
#define GEOMETRICOBJECT_H
#include <string>
using namespace std;

class GeometricObject {
public:
	GeometricObject();
	GeometricObject(const string& color, int _x, int _y);
	GeometricObject(const GeometricObject& g);
	virtual ~GeometricObject();
	string getColor() const;
	void setColor(const string& color);
	bool isFilled() const;
	void setFilled(bool filled);
	int getX() const;
	void setX(int _x);
	int getY() const;
	void setY(int _y);
	string toString() const;
	virtual void Draw()=0; //추상클래스 / pure virtual 함수 
	
protected:
	string color; //28
	bool filled; //29
	int x, y; //37 -> 40
};
#endif