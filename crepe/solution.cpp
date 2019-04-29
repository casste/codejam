#include <iostream>
#include <vector>
 
using namespace std;

typedef long long ll_t;

struct PERSON{
    int x;
    int y;
    int d;
};

int main()
{
    int T;
    int P,Q;
    vector<struct PERSON> p;
    cin>>T;
    for(int t=1;t<=T;t++) {
        cin>>P>>Q;
        // cout<<P<<' '<<Q<<endl;        
        for(int pp=0;pp<P;pp++){
            int xx,yy;
            char dd;
            cin>>xx>>yy>>dd;
            p.push_back({xx,yy,dd});
        }
    
        int q[Q][Q];
        for(int x=0;x<Q;x++)
            for(int y=0;y<Q;y++){
                q[x][y]=0;
                for (int i = 0; i < p.size(); i++){                
                    switch(p[i].d){
                        default:
                        case 'N':
                            if(y>p[i].y)q[x][y]++;
                            break;
                        case 'S':
                            if(y<p[i].y)q[x][y]++;
                            break;
                        case 'E':
                            if(x>p[i].x)q[x][y]++;
                            break;
                        case 'W':
                            if(x<p[i].x)q[x][y]++;
                            break;
                    }
                }
            }
        
        int found=0;
        int maximum = 0;
        for(int x=0; x<Q; ++x)
            for(int y=0; y<Q; ++y)
                maximum = std::max(q[x][y], maximum);
        for(int x=0;x<Q;x++)
            for(int y=0;y<Q;y++)
                if(q[x][y]==maximum){
                    if(found==0){
                        found = -1;
                        cout<<"Case #"<<t<<": "<<x<<' '<<y<<endl;
                    }
                }
    }
        return 0;
}
