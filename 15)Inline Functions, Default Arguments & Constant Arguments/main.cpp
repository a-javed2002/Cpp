//inline functions...kabhi kabaar compiler nhi banata inline...bcz his prespectives are different..
#include <iostream>
using namespace std;
inline int product(int a,int b){
    return a*b;
}
int main()
{   
    int a, b;
    // cout << "ENTER VALUE OF a" << endl;
    // cin >> a;
    // cout << "ENTER VALUE OF b" << endl;
    // cin >> b;
    cout<<"ENTER VALUE OF a AND b"<<endl;
    cin>>a>>b;
// actual parameter values are copied in formal parameters then the process happen then the value return..it takes time
//therefore we use "inline" with in functions...
    cout<<"THE PRODUCT OF a AND b IS "<<product(a,b)<<endl;
    cout<<"THE PRODUCT OF a AND b IS "<<product(a,b)<<endl;
    cout<<"THE PRODUCT OF a AND b IS "<<product(a,b)<<endl;
    cout<<"THE PRODUCT OF a AND b IS "<<product(a,b)<<endl;
    cout<<"THE PRODUCT OF a AND b IS "<<product(a,b)<<endl;
    cout<<"THE PRODUCT OF a AND b IS "<<product(a,b)<<endl;
    cout<<"THE PRODUCT OF a AND b IS "<<product(a,b)<<endl;
    cout<<"THE PRODUCT OF a AND b IS "<<product(a,b)<<endl;
    cout<<"THE PRODUCT OF a AND b IS "<<product(a,b)<<endl;
    cout<<"THE PRODUCT OF a AND b IS "<<product(a,b)<<endl;
    cout<<"THE PRODUCT OF a AND b IS "<<product(a,b)<<endl;
    cout<<"THE PRODUCT OF a AND b IS "<<product(a,b)<<endl;
    cout<<"THE PRODUCT OF a AND b IS "<<product(a,b)<<endl;
    cout<<"THE PRODUCT OF a AND b IS "<<product(a,b)<<endl;
    cout<<"THE PRODUCT OF a AND b IS "<<product(a,b)<<endl;
    cout<<"THE PRODUCT OF a AND b IS "<<product(a,b)<<endl;
    cout<<"THE PRODUCT OF a AND b IS "<<product(a,b)<<endl;
    cout<<"THE PRODUCT OF a AND b IS "<<product(a,b)<<endl;
    return 0;
}
//don't use inline in big functions...it will take a lot of cache...too much memory will be used...it
//use in small functions only....