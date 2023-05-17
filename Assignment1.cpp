#include <iostream>
#include <string>

using namespace std;

//class name
class Car {
private:
    int releaseYear;
    string customer;
    int speed;

public:
    Car(int year, const string maker) {
        releaseYear = year;
        customer = maker;
        speed = 0;
    }

    int getReleaseYear() const {
        return releaseYear;
    }

    string getCustomer() const {
        return customer;
    }

    int getSpeed() const {
        return speed;
    }
  
//function to increase the car speed by 10
    void accelerate() {
        speed += 10;  
    }
  
 //function to reduce the car speed by 10
    void brake() {
        speed -= 10; //function to reduce the car speed by 10
    }
};

int main() {
  
  //creating an instance mycar  
  Car mycar(2023, "Honda");

    for (int i = 0; i < 5; i++) {
        mycar.accelerate();
    }

    cout << "Current speed: " << mycar.getSpeed() << " km/h" << endl;

    for (int i = 0; i < 5; i++) {
        mycar.brake();
    }

    cout << "Current speed: " << mycar.getSpeed() << " km/h" << endl;

    return 0;
}
