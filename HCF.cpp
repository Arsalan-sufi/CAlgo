#include<iostream>
using namespace std;
int HCF(int n1 , int n2)
{
    int Gd=0;
    for (int i = 1; i <=min(n1,n2); i++)
    {
       if(n1%i == 0 && n2%i == 0){
       Gd=i;
       }
    }

    return Gd;


}


int main()
{

int n1, n2;
cin>> n1 ; cin>> n2;
 int hcf=HCF (n1,n2);
cout<<hcf;
return 0;
}

