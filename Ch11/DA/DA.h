#ifndef DA_H
#define DA_H
const int DEFAULT_ARR_SIZE=4;
class DA {
private:

public:
	int size;
	int* arr;
	DA();
	DA(int n);
	DA(const DA& obj);
	~DA();
	DA& operator=(const DA& obj);
};

#endif

