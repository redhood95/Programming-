#include<iostream>

using namespace std;



int gcd(int a, int b)
{
//base case
if(b==0){

    return a;
}

else {return gcd(b,a%b);}

}

int lcm(int a, int b)
{
return a*b/gcd(a,b);
}

int main()
{


cout<<gcd(10,15)<<endl;
cout<<lcm(10,15);

return 0;
}
