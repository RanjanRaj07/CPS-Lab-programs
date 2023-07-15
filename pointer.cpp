#include <iostream>
#include <math.h>

using namespace std;

int main(){
    float *ptr;
    float a[10],mean,std,sum=0,sumstd=0;
    int n,i;

    cout << "enter the number of elements \n";
    cin >> n;
    cout << "enter the elements of array\n";
    for(i=0;i<n;i++){
        cin >> a[i];
    }
    ptr = a;
    for (i=0;i<n;i++){
        sum = sum + *ptr;
        ptr++;
    }
    mean = sum/n;
    ptr = a;
    for(i=0;i<n;i++){
        sumstd = sumstd + pow((*ptr-mean),2);
        ptr++;
    }
    std = sqrt(sumstd/n);
    cout << "sum = \t" << sum;
    cout << "\nMean = \t" << mean;
    cout << "Standard Deviation = \t"<< std;
}