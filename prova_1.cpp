#include <iostream>
using namespace std;
int somma (int n1, int n2)
{
    int somma = n1+n2;
    return somma;
}
int main()
{
    //questa è la mia versione solo main 2 credo così si separano tutti sti cazzo di branch
    int a = 5;
    int b = 3;
    char gay = 'gay';
    //char str[9] = "gayyyyyy";
    cout<< "Valore: "<<somma(a,b)<<endl;
    //portiamo avanti il tutto con un bel if:
    bool t = true;
    if(t == true)
    cout<<"MI TROVO IN BRANCH C-2"<<endl;
    
    int array[10];
    for(int i = 0; i< 10; i++)
    {
        cout<<"procediamo alla grande";
    }
    char str[] = "DIO PORCO:)";
    cout<<"continuiamo a procedere dai"<<endl;
    
    cout<<"gkngdkaosgjnioasdjgijsajgilòasdighsaildòhgdas";
    return 0;
}