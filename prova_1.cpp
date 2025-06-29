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
    cout<<"MI TROVO IN BRANCH C"<<endl;
    
    cout<<"questa è la enorme differenza:"<<endl;
    int martina = 19;

    int array[10];
    for(int i = 0; i< 10; i++)
    {
        array[i] = i;
    }
    cout<< "Valore: "<<somma(a,b)<<endl;
    return 0;
}