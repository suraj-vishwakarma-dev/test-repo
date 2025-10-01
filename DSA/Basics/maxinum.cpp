#include <iostream>
using namespace std;

int main(){
    int a;
    int b;
    int c;
    cin>>a>>b>>c;
    if (a>b && a>c) {
        cout<<"a is grater";
    }
    else if (b>a && b>c){
        cout<<"b is greater";
    }
    else {
        cout<<"c is grater";
    }
    return 0;
}