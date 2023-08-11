#include <iostream>
using namespace std;
class cycle
{
public:
    int no_of_pedals;
    int no_of_seat;
    int no_of_break;
};
class motorcycle : public cycle
{
public:
    int no_of_engine;
};
class car : public motorcycle
{
public:
    int no_of_glasses;
};

int main()
{
    car hero;
    cout << "Enter the seat numbers ";
    cin >> hero.no_of_seat;
    cout << "Enter the number of engine :- ";
    cin >> hero.no_of_engine;
    cout << "Enter the number of glasses ";
    cin >> hero.no_of_glasses;
    cout << "the number of seats is " << hero.no_of_seat;
    cout << "the number of seats is " << hero.no_of_engine;
    cout << "the number of seats is " << hero.no_of_glasses;
    return 0;
}