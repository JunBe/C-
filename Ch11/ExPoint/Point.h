#ifndef POINT_H
#define POINT_H
class Point {
private:
	int x, y;
public:
	Point();
	Point(int i,int j);
	Point(const Point& p);
	~Point();
	void SetX(int i);
	int getX();
	void SetY(int j);
	int getY();
	void Print();
};
#endif

