#include <iostream>
#include <string>

using namespace std;

class Car {
private:
    int number;
    int weight;
    string name;
public:
    Car();
    void run();
};

Car::Car() {
     number = 0;
     weight = 0;
     name = "Benz";
}

void Car::run() {
     cout << name << "runs" << endl;
}

int main() {
    Car car;
    car.run();
    cout << "Hello World!" << endl;
}
