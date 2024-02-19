#include <iostream>
using namespace std;
typedef union money//hum main k andar bhi kar saktay hain..per tab sirf main acess kr sakta hay..not other functions
{
    /* data */
    int rice;     // 4 BITS
    char car;     // 1 BIT
    float pounds; // 4 BITS
} mo;//MAX BITS ARE 4...
int main()
{
    mo person1;
    person1.rice=34;
    cout<<"EXCHANGE WITH "<<person1.rice<<" Kg OF RICE"<<endl;
    // person1.car='F';
    // cout<<"EXCHANGE CAR "<<person1.rice<<endl;
    // person1.pounds=3;
    // cout<<"EXCHANGE WITH "<<person1.rice<<" Pounds"<<endl;
    return 0;
}
/*
A GREAT EXAMPLE IN C LANGUAGE
THERE ARE 2 DRUMS..SMALL AND BIG
SMALL USED IN MORNING
BIG ONE USED IN NIGHT
SO TO SAVE MONEY..YOU WILL BRING 2 STICKS...NOT 4..
SAME HAPPENED HERE...WE USE UNION TO SAVE MEMORY..
ONE THING IS USED AT A TIME...FOR EXCHANGE USE rice or car or pounds...
IF YOU USED MORE THEN ONE...YOU'LL GET A "GARBAGE" OR "RANDOM DATA TYPE" VALUE....
*/