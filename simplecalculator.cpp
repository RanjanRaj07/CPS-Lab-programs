#include <iostream>
#include <stdlib.h>


using namespace std;

void main() {
    float a,b,c;
    char op;
    cout << "enter the operator\n";
    cin >> op;

    cout << "enter the value of a and b\n";
    cin >> a >> b;

    switch(op){
        case '+': c=a+b;
        break;
        case '-': c=a-b;
        break;
        case '*': c=a*b;
        break;
        case '/': if(b==0) {cout<<"divide by zero error";  exit(1);}
        else c=a/b;
        break;
        deafault : cout << "invlid operator\n";exit(1);
    }
    cout <<  "result = "<< c;
}