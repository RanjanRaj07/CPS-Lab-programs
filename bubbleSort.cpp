#include <iostream>

using namespace std;

int main(){
    int i,j,n,temp,a[10];
    
    cout << "enter the no of elements of a[]\n";
    cin >> n;
    cout << "enter the elements of a[]\n" ;
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    cout << "the actual entered elements are\n";
    for(i=0;i<n;i++){
        cout << a[i] << '\t';
    }
    cout << endl;
    for(i=0;i<n-1;i++){
        for(j=0;j<n-1;j++){
            if(a[j]>a[j+1]){
                temp = a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    cout << "the sorted elements are \n";
    for(i=0;i<n;i++)
        cout << a[i] << '\t';
    cout << endl;
    return 0;

}
