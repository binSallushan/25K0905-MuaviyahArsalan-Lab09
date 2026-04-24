#include <iostream>
using namespace std;

class Package {
private:
    double weight;

public:
    Package(double w) {
        weight = w;
    }

    double getWeight() {
        return weight;
    }

    virtual double calculateCost() = 0; 

    virtual ~Package() {}
};

class LocalPackage : public Package {
public:
    LocalPackage(double w) : Package(w) {}

    double calculateCost() override {
        double cost = getWeight() * 5;

        if (getWeight() > 20) {
            cost += 15; 
        }

        return cost;
    }
};

class InternationalPackage : public Package {
public:
    InternationalPackage(double w) : Package(w) {}

    double calculateCost() override {
        return (getWeight() * 15) + 25; 
    }
};

int main() {
    Package* p1 = new LocalPackage(25);
    Package* p2 = new InternationalPackage(10);

    cout << "Local Package Cost: $" << p1->calculateCost() << endl;
    cout << "International Package Cost: $" << p2->calculateCost() << endl;

    delete p1;
    delete p2;

    return 0;
}
