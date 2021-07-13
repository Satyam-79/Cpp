#include <iostream>
using namespace std;
int main()
{
    char vehicle, temp;
    int hour1, minute1, hour2, minute2, hour, minute, charges;
    cout << "\nEnter the type of vehicle 'c' - car ; 'b' - bus/truck ; 's' - two wheeler : ";
    cin >> vehicle;
    // cout << "Enter the entering time of vehicle in HH : ";
    // cin >> hour1;
    // cout << "Enter the entering time of vehicle in MM : ";
    // cin >> minute1;
    // cout << "Enter the leaving time of vehicle in HH : ";
    // cin >> hour2;
    // cout << "Enter the leaving time of vehicle in MM : ";
    // cin >> minute2;
    cout << "Enter the entering time of vehicle in HH:MM  : ";
    cin >> hour1 >> temp >> minute1;
    cout << "Enter the leaving time of vehicle in HH:MM  : ";
    cin >> hour2 >> temp >> minute2;
    if (minute2 < minute1)
    {
        hour2 = hour2 - 1;
        minute2 = minute2 + 60;
    }
    hour = hour2 - hour1;
    minute = minute2 - minute1;

    cout << "\nVehicle type : ";
    vehicle == 'b' ? (cout << "Bus or Truck") : vehicle == 'c' ? (cout << "Car")
                                                               : cout << "Two Wheeler";
    cout << "\nTotal parked time : " << hour << ":" << minute << endl;
    if (minute != 0)
    {
        hour = hour + 1;
    }
    if (vehicle == 'b')
    {
        if (hour <= 3)
        {
            charges = 20 * hour;
        }
        else
            charges = (20 * 3) + (30 * (hour - 3));
    }
    if (vehicle == 'c')
    {
        if (hour <= 3)
        {
            charges = 10 * hour;
        }
        else
            charges = (10 * 3) + (20 * (hour - 3));
    }
    if (vehicle == 's')
    {
        if (hour <= 3)
        {
            charges = 5 * hour;
        }
        else
            charges = (5 * 3) + (10 * (hour - 3));
    }

    cout << "Parking Charges : " << charges;

    return 0;
}