//Circle.h file 

class Circle
{
public:
	Circle();
	Circle(int rad);
	int radius;

	void setRadius(int r);

	int getRadius() const;
	int computeArea() const;

	void printCircle() const;
	void displayCircle() const;
	Circle operator+(const Circle& b);
	friend std::ostream& operator << (std::ostream&, const Circle&);

	//private:
		//int radius;
};

/*Circle.h file 

class Circle
{
public:
	Circle();
	Circle(int rad);
	int radius;

	void setRadius(int r);

	int getRadius() const;
	int computeArea() const;

	void printCircle() const;
	void displayCircle() const;
	Circle operator+(const Circle& b);
	friend std::ostream& operator << (std::ostream&, const Circle&);

	private:
		int radius;
};*/
