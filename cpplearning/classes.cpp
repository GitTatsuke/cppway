#include <iostream>
#include <string>
#define NEXT cout<<"================================"<<endl;
#define MAIN
using namespace std;

class Human;
class Apple;

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

	void TakeApple(Apple& apple);
	void EatApple(Apple& apple) {

	}
};


class Apple 
{
	friend Human;
public:
	Apple(int weight, string color) {
		this->weight = weight;
		this->color = color;
		Count++;
		id = Count;
	}

	static int Count;

	int getId() { return id; }

private:
	int weight;
	string color;
	int id;
};

void Human::TakeApple(Apple& apple)
{
	cout << "Apple weight = " << apple.weight << "\n" << "Apple color = " << apple.color << endl;
}
int Apple::Count = 0;


class Point 
{
	//incapsulated
private:

	int x;
	int z;
	int y;

public:
	Point(int valueX, int valueY, int valueZ);
	Point() {}

	void printParams();

	int getX() { return x; }
	int getY() { return y; }
	int getZ() { return z; }

	void setX(int x) { this->x = x; }
	void setY(int y) { this->y = y; }
	void setZ(int z) { this->z = z; }

	~Point() {

	}
};
Point::Point(int valueX, int valueY, int valueZ) {
	x = valueX;
	y = valueY;
	z = valueZ;
}

void Point::printParams() {
	cout << "x = " << this->x << endl;
	cout << "y = " << this->y << endl;
	cout << "z = " << this->z << endl;
}





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
	NEXT
	Position.printParams();

	Apple apple(150, "red");
	Apple apple2(120, "red");
	Apple apple3(1540, "red");
	Human Eugene;
	NEXT
	cout << "Apple id: " << apple.getId() << endl;
	Eugene.TakeApple(apple);
	NEXT
	cout << "Apple id: " << apple2.getId() << endl;
	Eugene.TakeApple(apple2);
	NEXT
	cout << "Apple id: " << apple3.getId() << endl;
	Eugene.TakeApple(apple3);




	return 0;
	system("pause");

}
#endif