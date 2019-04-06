#include <iostream>

using namespace std;

int main() {
    int T;
    cin>>T;
    for(int t=1;t<=T;t++) {
        int N;
        cin>>N;        
        // cout<<N<<endl;

        int n=0, i=0, a=0, b=0, d=0;

        d=0;
        n=N;
        for(;n;n/=10){
            d++;
        }
        // cout<<d<<endl;
        
        int num[d];
        n=N;
        i=0;
        while (n != 0){
            num[i] = n % 10;
            n /= 10;
            i++;
        }
        // for(i=0;i<d;i++){
        //     cout<<num[i]<<' ';
        // }
        // cout<<endl;
        
        int numa[d], numb[d];
        for(i=0;i<d;i++){
            if(num[i]==4){
                numa[i]=3;
            }else{
                numa[i]=num[i];
            }
        }
        // for(i=0;i<d;i++){
        //     cout<<numa[i]<<' ';
        // }
        // cout<<endl;

        n=1;
        a=0;
        for(i=0;i<d;i++){
            a+=numa[i]*n;
            n*=10;
        }
        // cout<<a<<endl;

        b=N-a;

        

        
        cout << "Case #" << t << ": "<< a << ' ' << b << endl;
    }
}
