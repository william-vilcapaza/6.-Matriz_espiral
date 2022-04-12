#include <iostream>
using namespace std;

int main() {
    int paso = 1, cont = 1;
    int a[50][50];
    int matris;
    cout << "Inserte el numero de lados y columnas que tendra la matriz: ";
    cout << "***Debe ser cuadrada*** : " ;
    cin >> matris;

    for ( int k = 0; k < matris; k++ ) for ( int j = 0; j < matris; j++ ) a[k][j] = 0;
    for ( int i = 0; i < matris; i++ ) {

        if ( paso == 1 ) {
            for ( int j = 0; j < matris; j++ ) {
                if ( a[i][j] == 0 )
                    a[i][j] = cont++;
            }
        }

        paso++;

        if ( paso == 2 ) {
            for ( int j = 0; j < matris; j++ ) {
                if ( a[j][matris - ( i + 1 )] == 0 )
                    a[j][matris - ( i + 1 )] = cont++;
            }
        }

        paso++;

        if ( paso == 3 ) {
            for ( int j = matris - 1; j >= 0; j-- ) {
                if ( a[matris - ( i + 1 )][j] == 0 )
                    a[matris - ( i + 1 )][j] = cont++;
            }
        }

        paso++;

        if ( paso == 4 ) {
            for ( int j = matris - 1; j >= 0; j-- ) {
                if ( a[j][i] == 0 )
                    a[j][i] = cont++;
            }
        }

        paso = 1;
    }

    for ( int ii = 0; ii < matris; ii++ ) {
        for ( int j = 0; j < matris; j++ ) {
            if ( a[ii][j] < 10 ) cout << "0"; cout << a[ii][j] << "  ";
        }
        cout << endl;
    }
    cin.ignore();
    return 0;
}
