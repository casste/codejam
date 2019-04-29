#include <iostream>
#include <sstream>
using namespace std;

int R,C;
int u[5][5];

int valid(int r, int rr, int c, int cc){
    for(int r=0;r<R;r++){
        for(int c=0;c<C;c++){
            if(u[r][c]==0 && !(r==rr || c==cc || r-c==rr-cc || r+c==rr+cc)){
                u[r][c]=-1;
                return -1;
            }
        }
    }
    return 0;
}

int main()
{
    int T;
    cin>>T;
    // cout<<T<<endl;
    for(int t=1;t<=T;t++) {
        // cout<<t<<endl;
        
        cin>>R>>C;
        // cout<<N<<endl;

        int j=0;
        int f=0;

        for(int r=0;r<R;r++){
            for(int c=0;c<C;c++){
                u[r][c]=0;
            }
        }
        stringstream out;

        for(int rr=0;rr<R;rr++){            
            for(int cc=0;cc<C;cc++){
                for(int r=0;r<R;r++){            
                    for(int c=0;c<C;c++){
                        if(valid(r, rr,c, cc)) {                            
                            out<<rr<<' '<<cc<<endl;
                            j++;
                        }
                    }
                }
            }
        }
        if(j==R*C){
            cout<<"Case #"<<t<<": POSIBLE"<<out.str()<<endl;
        }else{
            cout<<"Case #"<<t<<": IMPOSIBLE"<<endl;
        }
    }
    
    return 0;
}
