#ifndef HotDogStand_H
#define HotDogStand_H
class HotDogStand{
public:
	HotDogStand(); //���� ���� ������
	HotDogStand(int n); // ���� �ִ� ������
	HotDogStand(const HotDogStand& obj); //ī�� Constructor
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
