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
        
        string org;
        cin>>org;
        // cout<<org<<endl;
        int o[2*N-2][2];
        o[0][0] = 0;
        int suma=0;
        for(int i=0;i<(2*N-2);i++){
            if(org[i]=='E'){
                o[i][0]=suma;
                suma++;
                o[i][1]=suma;
            }else{
                o[i][0]=suma;
                suma+=N;
                o[i][1]=suma;
            }
            // cout<<o[i][0]<<','<<o[i][1]<<endl;
        }

        string sol="";
        int existe;
        for(int r=0,z=0;r<(N-1);r++){
            // cout<<z<<endl;
            existe=0;
            for(int i=0;i<2*N-2;i++){
                if((o[i][0]==z && o[i][1]==z+1) ||
                   (o[i][0]==z+1 && o[i][1]==z+N+1) ){
                    existe=-1;
                }
            }
            if(existe){
                // cout<<"No existe: "<<z<<","<<z+N<<" o "<<z+N<<","<<z+N+1<<endl;
                sol+="SE";
            }else{
                // cout<<"existe: "<<z<<","<<z+1<<" o "<<z+1<<","<<z+N+1<<endl;
                sol+="ES";
            }
            z+=N+1;
        }
        // cout<<endl;
        
        
        cout<<"Case #"<<t<<": "<<sol<<endl;
    }
    
    return 0;
}
