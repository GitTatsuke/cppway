#include <iostream>
#include <string>
#define NEXT cout<<"================================"<<endl;
#define MAIN
using namespace std;

class Human;
class Apple;


/*class Apple 
{
	friend Human;
public:
	Apple(int weight, string color) {
		this->weight = weight;
		this->color = color;
		Count++;
		id = Count;
	}



	int getId() { return id; }
	static int getCount() { return Count; }
private:
	int weight;
	string color;
	int id;
	static int Count;
};

void Human::TakeApple(Apple& apple)
{
	cout << "Apple weight = " << apple.weight << "\n" << "Apple color = " << apple.color << endl;
}
int Apple::Count = 0;*/


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

class Image 
{
public:
	void getPixels() {
		for (int i = 0; i < TOTALPIX; i++)
		{
			cout << pixel_arr[i].getInfo() << endl;
		}
	}

private:
	class Pixel 
	{
	public:
		Pixel(int r, int g, int b) {
			this->r = r;
			this->g = g;
			this->b = b;
		}
		string getInfo() {
			return "Pixel: r=" + to_string(r) + "\tg=" + to_string(g) + "\tb=" + to_string(b);
		}

	private:
		int r;
		int g;
		int b;
	};
	static const int TOTALPIX = 5;
	Pixel pixel_arr[TOTALPIX]
	{
		Pixel(5,2,6),
		Pixel(4,22,46),
		Pixel(52,27,64),
		Pixel(59,2,6),
		Pixel(5,52,69),
	};
};




//class Student : Human
//{
//public:
//	Student(int group, string type) {
//		this->group = group;
//		this->type = type;
//	}
//	Student() {
//
//	}
//
//	void Learn() {
//		cout << "Я хожу на учёбу каждый день." << endl;
//	}
//
//private:
//	int group;
//	string type;
//
//};

//class ExtramuralStudent : public Student
//{
//public:
//
//
//	void Learn() {
//		cout << "Я хожу на учёбу для сдачи экзаменов." << endl;
//	}
//private:
//
//};

//class Teacher : Human
//{
//public:
//	Teacher(string subject) {
//		this->subject = subject;
//	}
//private:
//	string subject;
//
//};


class A {

public:

	A() {
		cout << "Вызвался конструктор класса А." << endl;
	}

	string msgOne = "One";

	~A() {
		cout << "Вызвался деструктор класса А." << endl;
	}

private:
	string msgTwo = "Two";

protected:
	string msgThree = "Three";

};

class B : public A{

public:

	B() {
		cout << "Вызвался конструктор класса B." << endl;
	}


	~B() {
		cout << "Вызвался деструктор класса B." << endl;
	}
};

class C : public B{
public:

	C() {
		cout << "Вызвался конструктор класса C." << endl;
	}

	~C() {
		cout << "Вызвался деструктор класса C." << endl;
	}
};


class Gun {
public:
	virtual void Shoot() {
		cout << "BANG!" << endl;
	}
};

class SubMachineGun : public Gun{
public:
	void Shoot() override{
		cout << "BANG! BANG! BANG!" << endl;
	}
};

class Bazooka : public Gun {
public:
	void Shoot() override {
		cout << "BADABUM!" << endl;
	}
};

class Player {
public:
	void Shoot(Gun* gun) {
		gun->Shoot();
	}
};

class Man {
public:
	
	Man() {

	}
	Man(string name) {
		this->name = name;
	}
	Man(string name, int age):Man(name) {
		this->age = age;
	}
	Man(string name, int age, int height) :Man(name, age) {
		this->height = height;
	}
	Man(string name, int age, int height, double weight) :Man(name, age, height) {
		this->weight = weight;
	}
	Man(string name, int age, int height, double weight, string number) :Man(name, age, height, weight) {
		this->number = number;
	}

private:
	string name;
	int age;
	int height;
	double weight;
	string number;
};


class Car {
public:

	string CarText = "Car text";

	void AddFuel() {
		cout << "Adding driving fuel..." << endl;
	}

	void Drive() {
		cout << "Driving..." << endl;
	}

};

class Airplane {
public:

	string AirplaneText = "Airplane text";

	void AddFuel() {
		cout << "Adding flying fuel..." << endl;
	}

	void Fly() {
		cout << "Flying..." << endl;
	}

};

class FlyingCar : public Car, public Airplane{
public:
	
};


//Interfaces

class Ibicycle {
public:
	virtual void TwistTheWheel() = 0;
	virtual void Ride() = 0;
};

class SimpleBicycle : public Ibicycle
{
public:

	void TwistTheWheel() override
	{
		cout << "Twisting..." << endl;
	}

	void Ride() override
	{
		cout << "Riding..." << endl;
	}

};
class Human
{
public:
	//Human(int age, string name)
	//{
	//	this->age = age;
	//	this->name = name;
	//}


	//methods

	void RideOn(Ibicycle& bicycle)
	{
		cout << "Twisting a wheel..." << endl;
		bicycle.TwistTheWheel();
		cout << "Let's ride!" << endl;
		bicycle.Ride();
	}

	void printInfo() {
		cout << age << endl;
		cout << name << endl;
	}

	void TakeApple(Apple& apple);
	void EatApple(Apple& apple) {
		cout << "Eating..." << endl;
	}
private:
	int age;
	string name;
};


#ifdef MAIN
int main()
{
	setlocale(LC_ALL, "ru");

	/*Point Position(4,2,3);

	Position.setX(5);
	Position.setY(1);
	Position.setZ(20);

	cout << Position.getX() << endl;
	cout << Position.getY() << endl;
	cout << Position.getZ() << endl;
	NEXT
	Position.printParams();*/

	/*Apple apple(150, "red");
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
	NEXT
	cout << "Total: " << Apple::getCount() << endl;
	*/

	Image picture;
	//picture.getPixels();


	Human man;
	//Student studentBoy(27,"Common");
	//Teacher oldBoy("Math");
	//ExtramuralStudent ExStudent;

	//C c;

	Gun gun;
	SubMachineGun machineGun;
	Bazooka buzz;
	Player bot;
	//bot.Shoot(&buzz);

	FlyingCar FC;
	//FC.Drive();
	//FC.Fly();
	//cout << FC.CarText << endl;
	//cout << FC.AirplaneText << endl;
NEXT
	//FC.AddFuel();   wrong use
	//((Car)FC).AddFuel();
	//((Airplane)FC).AddFuel();
	SimpleBicycle bicycle;
	man.RideOn(bicycle);






	return 0;
	system("pause");

}
#endif