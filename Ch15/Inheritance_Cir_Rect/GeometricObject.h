#ifndef GEOMETRICOBJECT_H
#define GEOMETRICOBJECT_H
#include <string>
using namespace std;

class GeometricObject {
public:
	GeometricObject();
	GeometricObject(const string& color, int _x, int _y);
	GeometricObject(const GeometricObject& g);
	~GeometricObject();
	string getColor() const;
	void setColor(const string& color);
	bool isFilled() const;
	void setFilled(bool filled);
	int getX() const;
	void setX(int _x);
	int getY() const;
	void setY(int _y);
	string toString() const;
	void Draw();

protected:
	string color;
	bool filled;
	int x, y;
};
#endif