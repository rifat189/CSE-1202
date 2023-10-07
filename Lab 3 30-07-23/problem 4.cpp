// 2 matrices multipication
#include<iostream>
using namespace std;
#define row 2
#define col 2

void multipication(int a[][col], int b[][col], int c[][col]){

for(int i=0; i<row; i++){
    for(int j=0; j<col; j++){
        c[i][j]=0;
        for(int k=0; k<row; k++){
            c[i][j] += a[i][k] * b[k][j];
        }
    }
}

}

int main(){
int a[row][col], b[row][col], c[row][col];
cout<<"Enter elements for 1st matrix: "<<endl;
for(int i=0; i<row; i++){
    for(int j=0; j<col; j++){
        cin>>a[i][j];
    }
}

cout<<"Enter elements for 2nd matrix: "<<endl;

for(int i=0; i<row; i++){
    for(int j=0; j<col; j++){
                cin>>b[i][j];

    }
}

multipication(a, b, c);


printf("\n");
for(int i=0; i<row; i++){
    for(int j=0; j<col; j++){
        cout<<a[i][j]<<" ";
    }
    cout<<endl;
}

printf("\n");
for(int i=0; i<row; i++){
    for(int j=0; j<col; j++){
                cout<<b[i][j]<<" ";

    }
    cout<<endl;
}

printf("\n");
for(int i=0; i<row; i++){
    for(int j=0; j<col; j++){
                        cout<<c[i][j]<<" ";

    }
        cout<<endl;

}
return 0;
}