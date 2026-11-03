#include <iostream>
#include <string>
using namespace std;

class Transport {
	string module;
	int year;
	double maxSpeed;
	double loadCapacity;
	int wheels;
	string color;
public:
	Transport() {}
	Transport(string md, int ye, double ms, double lc, int wh, string col) {
		module = md;
		year = ye;
		maxSpeed = ms;
		loadCapacity = lc;
		wheels = wh;
		color = col;
	}
	void Print() {
		cout << "Module - " << module << endl <<
			"Year of release - " << year << endl <<
			"Max Speed - " << maxSpeed << "km/h." << endl <<
			"Load Capacity - " << loadCapacity << "kg." << endl <<
			"Wheels - " << wheels << endl <<
			"Color - " << color << endl;
	}
};

class Scooter : public Transport {
	int helmet;
	bool pipa;
	string species;
	string engine;
public:
	Scooter() {}
	Scooter(string md, int ye, double ms, double lc, int wh, string col, int hl, bool pp, string sp, string en) : Transport(md, ye, ms, lc, wh, col) {
		helmet = hl;
		pipa = pp;
		species = sp;
		engine = en;
	}
	void Print() {
		Transport::Print();
		cout << "Helmet - " << helmet << endl <<
			"Pipa - " << pipa << endl <<
			"Species - " << species << endl <<
			"Engine - " << engine << endl;
	}
};

class Bicycle : public Transport {
	string species;
	int dopWheels;
	bool kids;
public:
	Bicycle() {}
	Bicycle(string md, int ye, double ms, double lc, int wh, string col, string sp, int dw, bool kd) : Transport(md, ye, ms, lc, wh, col) {
		species = sp;
		dopWheels = dw;
		kids = kd;
	}
	void Print() {
		Transport::Print();
		cout << "Species - " << species << endl <<
			"DopWheels - " << dopWheels << endl <<
			"Kids - " << kids << endl;
	}
};

class Car : public Transport {
	string species;
	string engine;
	int doors;
	bool kids;
public:
	Car() {}
	Car(string md, int ye, double ms, double lc, int wh, string col, string sp, string en, int dr, bool kd) : Transport(md, ye, ms, lc, wh, col) {
		species = sp;
		engine = en;
		doors = dr;
		kids = kd;
	}
	void Print() {
		Transport::Print();
		cout << "Species - " << species << endl <<
			"Engine - " << engine << endl <<
			"Doors - " << doors << endl <<
			"Kids - " << kids << endl;
	}
};

class BigCar : public Transport {
	string species;
	string engine;
	int doors;
	bool kids;
public:
	BigCar() {}
	BigCar(string md, int ye, double ms, double lc, int wh, string col, string sp, string en, int dr, bool kd) : Transport(md, ye, ms, lc, wh, col) {
		species = sp;
		engine = en;
		doors = dr;
		kids = kd;
	}
	void Print() {
		Transport::Print();
		cout << "Species - " << species << endl <<
			"Engine - " << engine << endl <<
			"Doors - " << doors << endl <<
			"Kids - " << kids << endl;
	}
};

class Bus : public Transport {
	string species;
	string engine;
	int doors;
	int passengers;
public:
	Bus() {}
	Bus(string md, int ye, double ms, double lc, int wh, string col, string sp, string en, int dr, int ps) : Transport(md, ye, ms, lc, wh, col) {
		species = sp;
		engine = en;
		doors = dr;
		passengers = ps;
	}
	void Print() {
		Transport::Print();
		cout << "Species - " << species << endl <<
			"Engine - " << engine << endl <<
			"Doors - " << doors << endl <<
			"Passengers - " << passengers << endl;
	}
};

class EuroTruck : public Transport {
	string species;
	string engine;
	int doors;
	int passengers;
public:
	EuroTruck() {}
	EuroTruck(string md, int ye, double ms, double lc, int wh, string col, string sp, string en, int dr, int ps) : Transport(md, ye, ms, lc, wh, col) {
		species = sp;
		engine = en;
		doors = dr;
		passengers = ps;
	}
	void Print() {
		Transport::Print();
		cout << "Species - " << species << endl <<
			"Engine - " << engine << endl <<
			"Doors - " << doors << endl <<
			"Passengers - " << passengers << endl;
	}
};


int main() {
	Transport obj1("Transport", 2020, 200, 1000, 4, "Red");
	obj1.Print();
	cout << "--------------" << endl;
	Scooter obj2("Scooter", 2021, 100, 200, 2, "Blue", 1, true, "Sport", "Electric");
	obj2.Print();
	cout << "--------------" << endl;
	Bicycle obj3("Bicycle", 2022, 50, 100, 2, "Green", "Mountain", 2, true);
	obj3.Print();
	cout << "--------------" << endl;
	Car obj4("Car", 2023, 180, 500, 4, "Black", "Sedan", "Gasoline", 4, true);
	obj4.Print();
	cout << "--------------" << endl;
	BigCar obj5("BigCar", 2024, 160, 800, 4, "White", "SUV", "Diesel", 5, true);
	obj5.Print();
	cout << "--------------" << endl;
	Bus obj6("Bus", 2025, 120, 2000, 6, "Yellow", "City", "Diesel", 3, 50);
	obj6.Print();
	cout << "--------------" << endl;
	EuroTruck obj7("EuroTruck", 2026, 140, 3000, 8, "Silver", "Freight", "Diesel", 2, 2);
	obj7.Print();
}
