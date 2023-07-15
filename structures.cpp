#include <iostream>

using namespace std;

struct Student{
    char name[50];
    char usn[20];
    int marks;
}s[20];

int main(){
    int i,n,countav=0,countbv;
    float sum=0,avg;

    cout << "enter the number of studetnts\n";
    cin >> n;
    cout << "enter the information of students \n";
    for(i=0;i<n;i++){
        cout << "enter the name of student"<<i+1<<endl;
        cin >> s[i].name;
        cout << "enter the usn of student"<<i+1<<endl;
        cin >> s[i].usn;
        cout << "enter the marks student"<<i+1<<endl;
        cin >> s[i].marks;
        cout << endl;
    }

    cout << "Displayig the information of the students entered\n";

    for (i=0;i<n;i++){
        cout << "Name  : "<<s[i].name<<endl;
        cout << "Usn   : "<<s[i].usn<<endl;
        cout << "Marks : "<<s[i].marks<<endl;
    }

    for(i=0;i<n;i++)
        sum = sum+s[i].marks;
    avg=sum/n;

    cout << "the average marks is "<< avg<<endl;
    for(i=0; i<n; i++){
        if(s[i].marks > avg)
            countav++;
        else 
            countav++;
    }
    cout << "the students scored above average are "<<countav<<endl;
    cout << "the students scored bellow average are "<<countbv<<endl;

    return 0;
}