#include <iostream>  // includes cin to read from stdin and cout to write to stdout
#include <string>

using namespace std;  // since cin and cout are both in namespace std, this saves some text

#define DEBUG 1

int main() {
  int T, C, R, M, d, cr, cc;
    
  cin >> T;  // read t. cin knows that t is an int, so it reads it as such.
  
  for(int t=1;t<=T;++t) {
    cin >> R >> C >> M ;
    cout << "Case #" << t << ":" << endl;
#ifdef DEBUG
    cout << R << " " << C << " " << M << endl;
#endif
    d=(R*C-M-1), cr=1, cc=1;
        
    if(R==1){
      cc=C;
    }

    if(C==1){
      cr=R;
    }
        
    for(int r=1; r<=R; r++) {
      for(int c=1;c<=C;c++) {
        if(r==cr && c==cc){
          cout<<'C';
        }else if(d>0) {
          d++;
          cout<<'.';
        }else{
          cout<<'*';
        }
      }
      cout<<endl;
    }
  }
}


  
