#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
int main()
{
    string name;
    int score[4], avgscore, sum;
    cout << "Enter your name: ";
    getline(cin, name);
    cout << "Enter 5 of your test scores: " << endl;
    int i;
    for (i = 0; i < 5; i++)
    {
        cin >> score[i];
        sum += score[i];
    }
    cout << "Student name: " << name << endl;
    cout << "Test scores: ";
    for (int j = 0; j < 5; j++)
    {
        cout << score[j] << ",";
    }
    cout << endl;
    avgscore = sum / i;
    cout << "Average test score: " << fixed << setprecision(2) << avgscore;
}
