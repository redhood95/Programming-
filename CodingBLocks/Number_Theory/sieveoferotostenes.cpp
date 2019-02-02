#include<iostream>

using namespace std;



void primes(int *p,int n)
{
    p[1]=0;
        p[0]=0;
        p[2]=1;
    for(int i=3;i<=n;i++)
      {
          p[i]=1;

      }
    for(int i=3;i<=n;i+=2)
        {
        if(p[i])
            {
            for(int j=i*i;j<=n;j+=2*i){
                p[j]=0;
            }
            }

        }
return;
}

int main()
{
int N =1000;
int p[N]={0};
primes(p,100);
for(int i=0;i<=100;i++)
    {
    if(p[i]){
        cout<<i<<endl;
    }
    }
return 0;
}
