#include <iostream>

using namespace std;

int main(){
    int num,a[30],i,key,low,mid,high;
    cout << "enter the number of elements\n";
    cin >> num;
    cout << "-----------search is possible only if the elements are arranged in asscending order----------\n";
    cout << "enter the number :\n";
    for(i=0;i<num;i++){
        cin >> a[i];
    }
    cout << "enter the key element to be searched\n";
    cin >> key;
    low = 0;
    high = num-1;
    while(low<=high){
        mid=(low+high)/2;
        if(key==a[mid]){
            cout<<"the elements is found at "<<mid+1<<" position"<<endl;
            exit(0);
        }
        else if(key<mid)
            high=mid-1;
        else if(key>mid)
            low=mid+1;
    }
    cout << "unsuccesful search\n";
    return 0;
}
