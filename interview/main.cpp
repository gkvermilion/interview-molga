#include "classes.h"
#include <iostream>

using namespace std;

int main() {
    Plane superJet;
    Car toyota;
    cout << Human::getInstance()->getName() << endl;
    Driver::drive(&superJet);
    Driver::drive(&toyota);
}
