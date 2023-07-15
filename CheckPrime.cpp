#include <iostream>

using namespace std;

int isPrime(int num){
    int i;
    if(num==0 || num==1)
        return 0;
    for(i=2;i<num/2;i++){
        if(num%i==0)
         return 0;
    }
    return 1;
}

int main(){
    int n;
    cout << "enter the number\n";
    cin >> n;
    if(isPrime(n)){
        cout << " the number "<<n<<" is prime number\n";
    }
    else
        cout << "the number is not prime number\n";
    return 0;
}