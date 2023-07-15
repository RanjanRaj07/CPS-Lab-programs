#include <iostream>
#include <math.h>
#define PI 3.142

using namespace std;

int main(){
    int i,degree;
    float sum,x,term;
    cout << "enter the degree";
    cin >> degree;
    x= (degree*PI) / 180;
    term = x;
    sum = term;
    i = 2;
    do{
        term = -term*x*x/((i+1)*i);
        sum = sum + term;
        i = i+2;
    }while(fabs(term)>0.00001);
    cout << "the my Sine of "<<degree<<" is "<<sum<<endl;
    cout << "the sin of "<<degree<<" is "<<sin(x)<<endl;
    return 0;
}