#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int time;
    float avg, distance, d[4], sumdist;
    ;
    // Inputting time
    cout << "Enter the time car travelled(The time cannot be negative and must be in range 1-5): ";
    cin >> time;
    // Checking conditions for time
    if (time >= 1 && time <= 5)
    {
        // Inputting distance according to number of hours
        for (int i = 0; i < time; i++)
        {
            int distance;
            cout << "Enter distance " << i + 1 << endl;
            cin >> distance;
            if (i == 0)
            {
                d[i] = distance;
            }

            else if (distance != d[i - 1])
            {
                d[i] = distance;
            }
            else
            {
                cout << "Error: Distance Cannot be same";
                break;
            }
        }

        // Finding total Distance
        for (int j = 0; j < time; j++)
        {
            sumdist += d[j];
        }
        // Average speed
        avg = (float)sumdist / time;
        cout << fixed << setprecision(4) << "Average Speed = " << avg;
    }
    else
    {
        cout << "The time is invalid";
    }
}
