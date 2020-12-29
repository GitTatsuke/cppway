#include <iostream>
#include <string>
#define NEXT cout<<"================================"<<endl;
#define MAIN
using namespace std;

class Human 
{
public:

	int age;
	string name;
	int height;
	double weight;


	//methods
	void printInfo() {
		cout << age << endl;
		cout << height << endl;
		cout << name << endl;
		cout << weight << endl;
	}
};

class Point 
{
	//incapsulated
private:

	int x;
	int z;
	int y;

public:

	Point(int valueX, int valueY, int valueZ) {
		x = valueX;
		y = valueY;
		z = valueZ;
	}
	Point() {}



	int getX() { return x; }
	int getY() { return y; }
	int getZ() { return z; }

	void setX(int x) { this->x = x; }
	void setY(int y) { this->y = y; }
	void setZ(int z) { this->z = z; }

	~Point() {

	}
};


#ifdef MAIN
int main()
{


	Point Position(4,2,3);

	Position.setX(5);
	Position.setY(1);
	Position.setZ(20);

	cout << Position.getX() << endl;
	cout << Position.getY() << endl;
	cout << Position.getZ() << endl;


	return 0;
	system("pause");

}
#endif