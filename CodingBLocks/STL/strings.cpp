#include<iostream>
#include<Cstring>
#include<algorithm>

using namespace std;

bool comp(string s1,string s2){
return s1<s2;
}

int main(){


string s("hello world");
cout << s << endl;

string s2 ="another way";

cout<<s2<<endl;
string s3;
getline(cin,s3);
cout<<s3<<endl;

string arr[] = {"apple", "mango","peech", "doc","lallalalal"};
sort(arr,arr+5);
for(int i=0;i<=5;i++){
        cout<<arr[i]<< " ";
        }
    string arr2[] = {"apple", "mango","peech", "doc","lallalalal"};
     sort(arr,arr+5,comp);
     cout<<"\n";
for(int i=0;i<=5;i++){
        cout<<arr[i]<< " ";
        }
}
