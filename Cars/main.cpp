#include <iostream>
#include "CarClass.h"

using namespace std;

int main(int argc, char *argv[]){
{
Car Jeep(2018, "Wrangler");
            cout << "Accelerate" << endl;
            for (int i = 0; i < 5; i++)
            {
                Jeep.accelerate();
                cout << "Current Speed: " << Jeep.getSpeed() << endl;
            }
            cout << endl;
            cout << "Decelerate" << endl;
            for (int i = 0; i < 5; i++)
            {
                Jeep.brake();
                cout << "Current Speed: " << Jeep.getSpeed() << endl;
            }
            cout << endl;
            system("pause");
            return 0;
        }
}
