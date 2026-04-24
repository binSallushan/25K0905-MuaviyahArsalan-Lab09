#include "SecuritySystem.h"
#include <iostream>
using namespace std;

int main() {
    SecurityDevice* device = new BiometricScanner();

    device->authenticate();

    delete device;
    return 0;
}
