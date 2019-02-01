#include<iostream>

using namespace std;

void primes(int *p)
{
    for(int i=2;i<=10000;i++)
        p[i]=1;

    for(int i=2;i<=10000;i++)
        {
        if(p[i])
            {
            for(int j=2*i;j<=10000;j+=i){
                p[j]=0;
            }
            }

        }
        p[1]=0;
        p[0]=0;
}
int main()

{

return 0;
}
