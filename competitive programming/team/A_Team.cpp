#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,a,b,c,s=0;
    cin >> n;
    for ( int i = 0; i < n; i++)
    { 
        cin >> a >> b >> c;
        if(a+b+c>=2){
            s+=1;
        }

    }
    cout<<s;
    
    return 0;
}