#include <iostream>

using namespace std;
int convert(int bin);

int main(){
    int bin,dec;
    cout << "enter the binary number\n";
    cin >> bin;
    dec = convert(bin);
    cout << "decimal value of the binary is \t"<< dec<<endl;
}

int convert (int bin){
    if(bin==0) return 0;
    else return (bin % 10 + 2*convert(bin/10));
}