//abhi tak hum log sequence control structures bana rahay thay...per abhi hum selection control structures banayengay
#include<iostream>

using namespace std;

int main(){
    int age;
    cout<< "Tell me your age"<<endl;
    cin>>age;

    // 1. Selection control structure: If else-if else ladder
    if((age<18) && (age>0)){
        cout<<"You can not come to my party"<<endl;
    }
    else if(age==18){
        cout<<"You are a kid and you will get a kid pass to the party"<<endl;
    }
    else if(age<1){
        cout<<"You are not yet born"<<endl;
    }
    else{
        cout<<"You can come to the party"<<endl;
    }

    return 0;
}
