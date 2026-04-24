#include "SecuritySystem.h"
#include <iostream>
using namespace std;

BiometricScanner::BiometricScanner() : attempts(0) {}

void BiometricScanner::authenticate() {
    attempts++;
    cout << "Biometric authentication attempt #" << attempts << endl;
    cout << "Authentication successful!" << endl;
}
