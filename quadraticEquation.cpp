#include <iostream>
#include <math.h>

using namespace std;

void main(){
    float a,b,c,x1,x2,d;
    
    cout<<"enter the values of a , b, c :\n";
    cin >> a,b,c;
    if(a*b*c==0){
        cout << "invalid input";
        exit(1);
    }
    d = (b*b-4*a*c);
    if(d=0){
        cout << "roots are real equal\n";
        x1= -b/(2*a);
        x1=x2;
        cout << "1st root is "<<x1<<" and second root is "<<x2<<endl;
    }
    else if (d>0){
        cout << "roots are real and distinct\n";
        x1 = -b + sqrt(d)/(2*a);
        x2 = -b - sqrt(d)/(2*a);
        cout << "roots are "<<x1<<" and "<<x2;
    }
    else {
        cout << "roots are imaginary \n";
        x1 = (-b)/(2*a);
        x2 = sqrt(fabs(d))/(2*a);
        cout << "1st root is "<<x1<<"+ i"<<x2<<endl;
        cout << "2nd root is "<<x1<<"- i"<<x2<<endl;
    }
}