#include <iostream>
using namespace std;
int somma (int n1, int n2)
{
    int somma = n1+n2;
    return somma;
}
int main()
{
    int a = 5;
    int b = 3;

    cout<< "Valore: "<<somma(a,b)<<endl;
    return 0;
}