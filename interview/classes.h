//
// Created by Вадим Яровой on 11.12.2021.
//

#include <string>
#include <iostream>

#ifndef INTERVIEW_CLASSES_H
#define INTERVIEW_CLASSES_H

using namespace std;

class Vehicle {
private: // инкапсуляция
    double _weight;
public:
    Vehicle(); // конструкторы
    Vehicle(double weight);

    double getWeight() const;

    void setWeight(double weight);

    virtual void drive() = 0; // чисто виртуальная функция
};

// паттерн фабрика
class Plane : public Vehicle {
private:
    string _engine;
    int _maxPower; // camel case
    int _wings;
public:
    Plane();

    Plane(string engine, int max_power, int wings, double weight);

    string getEngine() const;

    int getMaxPower() const;

    int getWings() const;

    void setEngine(string engine);

    void setMaxPower(int max_power);

    void setWings(int wings);

    void drive() override;
};

class Car : public Vehicle {
private:
    string _engine;
    int _maxPower;
    int _wheels;
public:
    Car();

    Car(string engine, int max_power, int wheels, double weight);

    string getEngine() const;

    int getMaxPower() const;

    int getWheels() const;

    void setEngine(string engine);

    void setMaxPower(int max_power);

    void setWheels(int wheels);

    void drive() override;
};

class Human {
private:
    Human() {
        _name = "Vadim";
        _age = 20;
    };
    string _name;
    int _age;
public:
    static Human* getInstance() {
        static Human _instance;
        return &_instance;
    }
    string getName() const;
    int getAge() const;
    void setName(string name);
    void setAge(int age);
};

class Driver : public Human {
public:
    static void drive(Vehicle *vehicle) {
        vehicle->drive();
    }
};


#endif //INTERVIEW_CLASSES_H
