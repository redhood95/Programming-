#include<iostream>
#include<algorithm>

using namespace std;

bool comp(int a, int b){
    return a>b;

}

int main()
{
    int a[] = {1,4,2,4,2,8,7,4};
    int n = sizeof(a)/sizeof(int);
    sort(a,a+n);
    for(int i=0;i<=n;i++){
        cout<<a[i]<< " ";

        }
        int b[] = {1,4,2,4,2,8,7,4};
sort(b,b+n,comp);
cout<<"\n";
for(int i=0;i<=n;i++){
        cout<<b[i]<< " ";

        }
    return 0;


}
