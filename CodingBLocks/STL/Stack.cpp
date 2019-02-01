#include<iostream>
#include<Cstring>
#include<stack>

using namespace std;

int main()
{

stack<string> s;
s.push("dffafa");
s.push("werwe");
s.push("wefwefewf");

while(!s.empty()){


    cout<<s.top()<<"   ";
    s.pop();
}

}
