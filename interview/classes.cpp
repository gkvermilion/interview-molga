//
// Created by Вадим Яровой on 11.12.2021.
//

#include "classes.h"

Vehicle::Vehicle() {
    _weight = 1;
}

Vehicle::Vehicle(double weight) {
    this->_weight = weight;
}

double Vehicle::getWeight() const {
    return _weight;
}

void Vehicle::setWeight(double weight) {
    _weight = weight;
}


Plane::Plane() {
    _engine = "JZ2";
    _maxPower = 718;
    _wings = 2;
}

Plane::Plane(string engine, int max_power, int wings, double weight) {
    _engine = engine;
    _maxPower = max_power;
    _wings = wings;
    this->setWeight(weight);
}

string Plane::getEngine() const {
    return _engine;
}

int Plane::getMaxPower() const {
    return _maxPower;
}

int Plane::getWings() const {
    return _wings;
}

void Plane::setEngine(string engine) {
    _engine = engine;
}

void Plane::setMaxPower(int max_power) {
    _maxPower = max_power;
}

void Plane::setWings(int wings) {
    _wings = wings;
}

void Plane::drive() {
    cout << "Самолет летит по воздуху" << endl;
}

Car::Car() {
    _engine = "1JZ";
    _maxPower = 200;
    _wheels = 4;
}

Car::Car(string engine, int max_power, int wheels, double weight) {
    _engine = engine;
    _maxPower = max_power;
    _wheels = wheels;
    this->setWeight(weight);
}

string Car::getEngine() const {
    return _engine;
}

int Car::getMaxPower() const {
    return _maxPower;
}

int Car::getWheels() const {
    return _wheels;
}

void Car::setEngine(string engine) {
    _engine = engine;
}

void Car::setMaxPower(int max_power) {
    _maxPower = max_power;
}

void Car::setWheels(int wheels) {
    _wheels = wheels;
}

void Car::drive() {
    cout << "Машина едет по дороге" << endl;
}


string Human::getName() const {
    return _name;
}

int Human::getAge() const {
    return _age;
}

void Human::setName(string name) {
    _name = name;
}

void Human::setAge(int age) {
    _age = age;
}
