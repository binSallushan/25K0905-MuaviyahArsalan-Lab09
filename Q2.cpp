#include <iostream>
#include <string>
using namespace std;


class Payment{
    public:
    virtual void processPayment(double amount)=0;
};

class CreditCard : public Payment{
    public:
    void processPayment(double amount) override{
        amount+=amount*0.02;
        cout<<"Processing Credit Card Payment of $"<<amount<<endl;
    }
};

class PayPal: public Payment{
    public:
    void processPayment(double amount) override{

        if(amount>500.0){
            amount-=10.0;
        }
        cout<<"Processing PayPal Payment of $"<<amount<<endl;
    }
    
};

int main(){
    Payment* p1 = new CreditCard();
    Payment* p2 = new PayPal();
    p1->processPayment(550);  

    p2->processPayment(550);

    delete p1;
    delete p2;
    return 0;


}
