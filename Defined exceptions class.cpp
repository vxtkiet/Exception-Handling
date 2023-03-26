#include <iostream>
#include <exception>
#include <stdexcept>
using namespace std;

class Overspeed : public exception
{
        private:
                int speed;
        public:
                const char* what()
                {
                        return "Check out your car speed \n";
                }
                void getSpeed()
                {
                        cout << "Your car speed is : " << speed << endl;
                }
                int setSpeed(int speed)
                {
                        this->speed = speed;
                }
};

class Car
{
        private:
                int speed;
        public:
                Car()
                {
                        speed = 0;
                        cout << "Speed is " << speed << endl;
                }
                void accelerate()
                {
                        for(;;) // infinite loop
                        {
                                speed += 10;
                                cout << "Speed is " << speed << endl;
                                if(speed >= 250)
                                {
                                        Overspeed s;
                                        s.setSpeed(speed);
                                        throw s;
                                }
                        }
                }
};


int main()
{
        Car rollroyes;
        try
        {
                rollroyes.accelerate();
        }
        catch(Overspeed s)
        {
                cout << s.what() << endl;
                s.getSpeed();
        }
	return 0;
}

