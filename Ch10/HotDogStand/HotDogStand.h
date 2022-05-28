#ifndef HotDogStand_H
#define HotDogStand_H
class HotDogStand{
public:
	HotDogStand(); //인자 없는 생성자
	HotDogStand(int n); // 인자 있는 생성자
	HotDogStand(const HotDogStand& obj); //카피 Constructor
	~HotDogStand(); //Deconstructor
	void JustSold(); // function
	void SetID(int n); //ID setter
	int getID(); //ID getter
	int getnumSold(); //numSold getter

private:
	int ID;
	int numSold;

public:
	static int GetTotalSold();

private:
	static int totalSold;
};
#endif
