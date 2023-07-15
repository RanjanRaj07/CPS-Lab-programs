#include <iostream>
#include "math.h"

using namespace std;

int main(){
    int s;
    double n,x,d;
    cout << "enter the number\n";
    cin >> n;
    if(n>=0){
        for(s=1;s*s<n;s++);
        s--;
        for(d=0.001;d<1.0;d+=0.001){
            x=(double)s+d;
            if(x*x>n){
                x=x-0.001;
                break;
            }
        }
        cout << "the square root of number "<<n<<" is -- "<<x<<endl;
        cout << "by library function the square root is "<<sqrt(n)<<endl;
    }else
        cout << "No square root of zero and negative number\n";
    
    return 0;
}