#include <iostream>
#include <string>
using namespace std;

class CoffeeMachine{
   
    int waterLevel;
    int coffeeBeans;

    public:
    CoffeeMachine(int wl,int beans):waterLevel(wl),coffeeBeans(beans){
    }

    void makeCoffee(){
        if(waterLevel<100){
            cout<<"insufficient water"<<endl;
        }else{
            waterLevel-=100;
            cout<<"Coffee is ready!"<<endl;

        }
    }

};

int main(){
    CoffeeMachine c(150,50);

    c.makeCoffee();
    c.makeCoffee();

    return 0;
}
