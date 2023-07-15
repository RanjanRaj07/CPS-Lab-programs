#include <iostream>
#include <math.h>

using namespace std;

int main(){
    int n,num,rev=0,rem;

    cout << "enter the number \n";
    cin >> num;
    n = num;
    while(num!=0){
        rem = num%10;
        num=num/10;
        rev=rev*10+rem;
    }
    cout << "the reverse of the number given in \t"<<rev;
    if(rev==n)
    cout << "the given number "<<n<<" is a palindrom\n";
    else 
    cout << "the given number "<<n<<" is not a palindrom\n";
    return 0;
}