#include <iostream>
using namespace std;

int main() {
              int i,x,n,p,max,min;
              i=0;
              x=0;
              n=0;
              p=0;
              do
              { 
                 cout<<"inserisci un numero"<<endl;
                 cin>>n;
                 if(i=0)
                 {
                    max=n;
                    }
                elseif(n>max)
                {
                    max=n;
                    }
              if(i=0)
              {
                min=n;
               }
                    elseif(n<min)
                    {  min=n;
                    }

                if(n>=0)
                {  
                    p=p+n;
                    x=x+1;
                    else
                    {
                        n=n+1;
                        }
                        while(n!=0)
        }
        {
            cout<<"il valore massimo è" <<max <<endl;
            cout<<"il valore minimo è" <<min <<endl;
            cout<<"ho inserito" << n << " valori negativi" <<endl;
            cout<<"la media dei valori positivi è" << (p/x) <<endl;
            }



}

//LEGGERE LE ISTRUZIONI NEL FILE README.md
