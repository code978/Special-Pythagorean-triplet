#include<bits/stdc++.h>
using namespace std;

int main(){

    int res = 0;
    for(int i=1;i<=500;i++){
        for(int j=1;j<=500;j++){
            for(int k=1;k<=500;k++){
                if( ((i*i + j*j) == k*k) && ((i+j+k) == 1000) ){
                    cout<<"i : "<<i<<" j : "<<j<<" k : "<<k<<endl;
                    res = i*j*k;
                    break;
                }
            }
        }
    }
    cout<<res;
    getchar();
}
