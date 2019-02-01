#include<iostream>

using namespace std;

bool is_prime(int a)
{
if(a==1){
    return false;
}
if(a==2){
    return true;
}
for(int i=2;i*i<=a;i++){
    if(a%i==0){
        return false;
    }

}
return true;
}
bool op_is_prime(int a)
{
if(a==1){
    return false;
}
if(a==2){
    return true;
}
for(int i=3;i*i<=a;i=i+2){
    if(a%i==0){
        return false;
    }

}
return true;
}
int main()
{
    int n;

    cin>>n;
    if(op_is_prime(n)){
        cout<<"the number" << n << "is prime";
    }
    else{
        cout<<"the number" << n << "is not prime";
    }

return 0;
}
