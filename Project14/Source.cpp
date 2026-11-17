#include <iostream>
#include <string>
using namespace std;

class Transport {
protected:
	string module;
	int year;
	double maxSpeed;
	double loadCapacity;
	int wheels;
	string color;
	double fuelConsumption;

public:
	Transport() {}

	Transport(string md, int ye, double ms, double lc, int wh, string col, double fc) {
		module = md;
		year = ye;
		maxSpeed = ms;
		loadCapacity = lc;
		wheels = wh;
		color = col;
		fuelConsumption = fc;
	}

	virtual void Print() {
		cout << "Module - " << module << endl <<
			"Year of release - " << year << endl <<
			"Max Speed - " << maxSpeed << " km/h" << endl <<
			"Load Capacity - " << loadCapacity << " kg" << endl <<
			"Wheels - " << wheels << endl <<
			"Color - " << color << endl <<
			"Fuel Consumption - " << fuelConsumption << " l/100km" << endl;
	}

	virtual void PrintMaxSpeed() = 0;
	virtual void PrintFuelConsumption() = 0;
	virtual void PrintWheels() = 0;
	virtual void PrintPassengers() = 0;
};

class Scooter : public Transport {
	int helmet;
	bool pipa;
	string species;
	string engine;

public:
	Scooter() {}

	Scooter(string md, int ye, double ms, double lc, int wh, string col, double fc, int hl, bool pp, string sp, string en)
		: Transport(md, ye, ms, lc, wh, col, fc) {
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

	void PrintMaxSpeed() {
		cout << "Max Speed: " << maxSpeed << " km/h" << endl;
	}

	void PrintFuelConsumption() {
		cout << "Fuel Consumption: " << fuelConsumption << " l/100km (or Electric)" << endl;
	}

	void PrintWheels() {
		cout << "Number of wheels: " << wheels << endl;
	}

	void PrintPassengers() {
		cout << "Number of passengers: 1-2" << endl;
	}
};

class Bicycle : public Transport {
	string species;
	int dopWheels;
	bool kids;

public:
	Bicycle() {}

	Bicycle(string md, int ye, double ms, double lc, int wh, string col, double fc, string sp, int dw, bool kd)
		: Transport(md, ye, ms, lc, wh, col, fc) {
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

	void PrintMaxSpeed() {
		cout << "Max Speed: " << maxSpeed << " km/h" << endl;
	}

	void PrintFuelConsumption() {
		cout << "Fuel Consumption: 0 l/100km (Muscle powered)" << endl;
	}

	void PrintWheels() {
		cout << "Number of wheels: " << wheels << endl;
	}

	void PrintPassengers() {
		cout << "Number of passengers: 1" << endl;
	}
};

class Car : public Transport {
	string species;
	string engine;
	int doors;
	bool kids;

public:
	Car() {}

	Car(string md, int ye, double ms, double lc, int wh, string col, double fc, string sp, string en, int dr, bool kd)
		: Transport(md, ye, ms, lc, wh, col, fc) {
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

	void PrintMaxSpeed() {
		cout << "Max Speed: " << maxSpeed << " km/h" << endl;
	}

	void PrintFuelConsumption() {
		cout << "Fuel Consumption: " << fuelConsumption << " l/100km" << endl;
	}

	void PrintWheels() {
		cout << "Number of wheels: " << wheels << endl;
	}

	void PrintPassengers() {
		cout << "Number of passengers: 5" << endl;
	}
};

class BigCar : public Transport {
	string species;
	string engine;
	int doors;
	bool kids;

public:
	BigCar() {}

	BigCar(string md, int ye, double ms, double lc, int wh, string col, double fc, string sp, string en, int dr, bool kd)
		: Transport(md, ye, ms, lc, wh, col, fc) {
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

	void PrintMaxSpeed() {
		cout << "Max Speed: " << maxSpeed << " km/h" << endl;
	}

	void PrintFuelConsumption() {
		cout << "Fuel Consumption: " << fuelConsumption << " l/100km" << endl;
	}

	void PrintWheels() {
		cout << "Number of wheels: " << wheels << endl;
	}

	void PrintPassengers() {
		cout << "Number of passengers: 7" << endl;
	}
};

class Bus : public Transport {
	string species;
	string engine;
	int doors;
	int passengers;

public:
	Bus() {}

	Bus(string md, int ye, double ms, double lc, int wh, string col, double fc, string sp, string en, int dr, int ps)
		: Transport(md, ye, ms, lc, wh, col, fc) {
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

	void PrintMaxSpeed() {
		cout << "Max Speed: " << maxSpeed << " km/h" << endl;
	}

	void PrintFuelConsumption() {
		cout << "Fuel Consumption: " << fuelConsumption << " l/100km" << endl;
	}

	void PrintWheels() {
		cout << "Number of wheels: " << wheels << endl;
	}

	void PrintPassengers() {
		cout << "Number of passengers: " << passengers << endl;
	}
};

class EuroTruck : public Transport {
	string species;
	string engine;
	int doors;
	int passengers;

public:
	EuroTruck() {}

	EuroTruck(string md, int ye, double ms, double lc, int wh, string col, double fc, string sp, string en, int dr, int ps)
		: Transport(md, ye, ms, lc, wh, col, fc) {
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

	void PrintMaxSpeed() {
		cout << "Max Speed: " << maxSpeed << " km/h" << endl;
	}

	void PrintFuelConsumption() {
		cout << "Fuel Consumption: " << fuelConsumption << " l/100km" << endl;
	}

	void PrintWheels() {
		cout << "Number of wheels: " << wheels << endl;
	}

	void PrintPassengers() {
		cout << "Number of passengers: " << passengers << endl;
	}
};

int main() {
	Transport* transport = nullptr;
	int choice;

	cout << "Choose the type of vehicle to create:\n";
	cout << "1. Scooter\n";
	cout << "2. Bicycle\n";
	cout << "3. Car\n";
	cout << "4. BigCar\n";
	cout << "5. Bus\n";
	cout << "6. EuroTruck\n";
	cout << "Your choice (1-6): ";
	cin >> choice;

	switch (choice) {
	case 1:
		transport = new Scooter("Scooter", 2021, 100, 200, 2, "Blue", 2.5, 1, true, "Sport", "Electric");
		break;
	case 2:
		transport = new Bicycle("Bicycle", 2022, 50, 100, 2, "Green", 0.0, "Mountain", 2, true);
		break;
	case 3:
		transport = new Car("Car", 2023, 180, 500, 4, "Black", 8.5, "Sedan", "Gasoline", 4, true);
		break;
	case 4:
		transport = new BigCar("BigCar", 2024, 160, 800, 4, "White", 11.0, "SUV", "Diesel", 5, true);
		break;
	case 5:
		transport = new Bus("Bus", 2025, 120, 2000, 6, "Yellow", 25.0, "City", "Diesel", 3, 50);
		break;
	case 6:
		transport = new EuroTruck("EuroTruck", 2026, 140, 3000, 8, "Silver", 32.0, "Freight", "Diesel", 2, 2);
		break;
	default:
		cout << "Invalid choice!" << endl;
		return 1;
	}

	if (transport != nullptr) {
		cout << "\n--- Calling Print() via base pointer ---\n";
		transport->Print();

		cout << "\n--- Calling pure virtual methods via base pointer ---\n";
		transport->PrintMaxSpeed();
		transport->PrintFuelConsumption();
		transport->PrintWheels();
		transport->PrintPassengers();

		delete transport;
	}

	return 0;
}