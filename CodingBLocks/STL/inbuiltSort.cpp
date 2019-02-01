#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
    int a[] = {1,4,2,4,2,8,7,4};
    int n = sizeof(a)/sizeof(int);
    sort(a,a+n);
    for(int i=0;i<=n;i++){
        cout<<a[i]<< " ";   }

    return 0;


}
