#pragma once
class Product
{

private:
	unsigned int first;
	double second;

public:
	unsigned int getFirst() const { return first; }
	double getSecond() const { return second; }
	void SetFirst(unsigned int value);
	void SetSecond(double value);

	bool Init(unsigned int x, double y);
	void Read();
	void Display() const;
	
	void Power();
};

