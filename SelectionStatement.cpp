#include <iostream>

using namespace std;

void main(){
    int n;
    float amount;
    char name[20];
    cout << "enter the consumer name\n";
    cin >> name;
    cout << "enter the number of units consumed \n";
    cin>> n;
    if(n<200){
        amount = n*80;
    }
    else if(n>200 && n<300){
        amount = 200*80;
        amount = amount + (n-200)*88;
    }
    else {
        amount = (n-300)*100;
        amount = amount+100*88;
        amount = amount+200*80;
    }
    amount = amount/100;
    amount = amount+100;
    if(amount > 400){
        amount = amount+(15*amount)/100;
    }
    cout << "total amount need to be paid is Rs-"<<amount;
}