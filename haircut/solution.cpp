#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

struct c_clientes{
    int B;
    vector<int> m;
    // clientes(){}
    int operator()(){
        static int t=0;
        int c=0;
        for(int b=0;b<B;b++){
            c+=t/m[b]+1;
        }
        t++;
        return c;
    }
} clientes;

int main()
{
    int TC;
    cin>>TC;
    // cout<<TC<<endl;
    for(int tc=1;tc<=TC;tc++) {
        int B,N;
        vector<int> m;
        cin>>B>>N;
        for(int i=0;i<B;i++){
            int b;
            cin>>b;
            m.push_back(b);
        }

        int L=0;
        int R=N*(*min_element(m.begin(),m.end()));
        vector<int> c(R);
        clientes.B=B;
        clientes.m=m;
        generate(c.begin(),c.end(),clientes);
        vector<int>::iterator lb=lower_bound(c.begin(),c.end(),N);
        cout<<N<<' '<<lb<<endl;
        vector<int>::iterator i;
        for (i = c.begin(); i != c.end(); ++i) { 
            cout << *i << " "; 
        } 

        // cout<<"Case #"<<tc<<": "<<m<<endl;
        cout<<endl;
    }
        return 0;
 }
