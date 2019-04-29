#include <iostream>
using namespace std;

int main()
{
    int T;
    cin>>T;
    // cout<<T<<endl;
    for(int t=1;t<=T;t++) {
        // cout<<t<<endl;
        
        int N;
        cin>>N;
        // cout<<N<<endl;

        int n,a=0,c=0;
        for(int i=0;i<N;i++){
            cin>>n;
            if(n>=a){
                a+=n;
            }else{
                a=n;
            }
            c+=a-n;
        }
        cout<<"Case #1: "<<a<<' '<<c<<endl;
    }
    
    return 0;
}
