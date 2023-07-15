#include <iostream>

using namespace std;

int main(){
    int i,j,k,m,n,a[5][5],b[5][5],p,q,c[5][5];

    cout << "enter the size of matrix a(row and column)\n";
    cin >> m >> n;
    cout << "enter the size of the matrix b(row and column)\n";
    cin >> p >> q;
    if(n==p){
        cout<<"enter the elements of matrix a\n";
        for(i=0;i<m;i++){
            for(j=0;j<n;j++){
                cin >> a[i][j];
            }
        }
        cout << "enter the elements of the matrix b\n";
        for(i=0;i<p;i++){
            for(j=0;j<q;j++){
                cin >> b[i][j];
            }
        }
        for (i=0;i<m;i++){
            for(j=0;j<q;j++){
                c[i][j]=0;
                for(k=0;k<n;k++){
                    c[i][j]+=a[i][k]*b[k][j];
                }
            }
        }

        cout << "the product matrix of a and b is \n";
        for(i=0;i<m;i++){
            for(j=0;j<q;j++){
                cout << c[i][j]<<"\t";
            }
            cout << endl;
        }
    }else {
        cout << "matrix multiplication not possible\n";
    }
    return 0;
}