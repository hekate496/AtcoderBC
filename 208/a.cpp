#include<iostream>
using namespace std;

int main(){
    int a, b;
    cin >> a >> b;
    if(a<=b && b<=a*6){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
}