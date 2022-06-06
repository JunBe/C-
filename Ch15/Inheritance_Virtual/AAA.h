#ifndef AAA_H
#define AAA_H
class AAA {
private:
	int pri;
protected:
	int pro;
public:
	int pub;
public:
	AAA();
	AAA(int i,int j, int k);
	virtual ~AAA();
	virtual void Print();

};
#endif