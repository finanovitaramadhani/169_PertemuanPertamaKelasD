#include <iostream>
using namespace std;


int main()
{//begin

    //numeric nAlas, nTinggi, nLuas
    //display 'Masukan Alasnya= '
    //accept nAlas
    //display 'Masukan Tingginya='
    //accept nTinggi
    //compute nLuas = 1/2 * nAlas * nTinggi
    //display 'Luasnya adalah = ' + nLuas

    int nAlas, nTinggi;
    double nLuas;
    cout << "Masukkan Alasnya= ";
    cin >> nAlas;
    cout << "Masukkan Tingginya= ";
    cin >> nTinggi;
    nLuas = 0, 5 * (nAlas * nTinggi);
    cout << "Luasnya adalah= " << nLuas << endl;
    system("pause");


}//end