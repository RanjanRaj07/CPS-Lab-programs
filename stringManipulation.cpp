#include <iostream>
#include <string.h>

using namespace std;


int length(char s1[]);
int compare(char s1[],char s2[]);
void concat(char s1[],char s2[]);

int main(){
    char s1[200],s2[200];
    int len,res,count;

    cout << "enter the string s1: \t";
    cin >> s1;
    cout << endl;
    len = length(s1);
    cout << "enter the string s2: \t";
    cin >> s2;
    cout << endl;
    cout << "length of the string is "<<len;
    res = compare(s1,s2);
    if(res==0)
        cout << "both string's are equal\n";
    else 
        cout << "the strings are not equal\n";
    

    concat(s1,s2);
    cout << "the concatination of the 2 strings is "<<s1;

}

int length(char s1[]){
    int len=0;
    while(s1[len]!='\0')
        len++;

    return len;
}

int compare (char s1[],char s2[]){
    int count=0;
    while (s1[count]==s2[count])
    {
        if(s1[count]=='\0' || s2[count]=='\0')
            break;
        else count++;
    }
    if(s1[count]=='\0'&&s2[count]=='\0')
        return 0;
    else 
        return -1;
    
}

void concat(char s1[],char s2[]){
    int i,j;
    i = strlen(s1);
    for(j=0;s2[j]!='\0';j++,i++){
        s1[i]=s2[j];
    }
    s1[i]='\0';
}