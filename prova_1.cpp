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
    cout<<"MI TROVO IN BRANCH C-2"<<endl;
    
    int array[10];
    for(int i = 0; i< 10; i++)
    {
        array[i] = i;
    }
    cout<< "Valore: "<<somma(a,b)<<endl;
    return 0;
}