#include<iostream>
using namespace std;
int main()
{
int n = 4;
for(int i =0; i<n;i++){
    for(int j=1;j<=i+1;j++){ //triangle pattern
        cout<<j;
        
    }
    cout<<endl;
}
return 0;
}