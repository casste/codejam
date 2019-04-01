#include <iostream>  // includes cin to read from stdin and cout to write to stdout
#include <iomanip>

using namespace std;  // since cin and cout are both in namespace std, this saves some text

int main() {
    int T, i;
    double C, F, X;
    double seconds=0.0, cookies=0.0;
    
  cin >> T;  // read t. cin knows that t is an int, so it reads it as such.
  cin >> C >> F >> X ;

  cout >> C >> " " >> F >> " " >> X >> endl;
   
  for(i=1;i<=T;++i) {
      double k=2.0;
      do{
          if(C<X){
              seconds+=(C/k);
              k+=F;
              X-=C;
          }else{
              seconds+=(X/k);
              X=0;
          }
      }while(X>0);
      cout << "Case #" << i << ": " << seconds << " " << endl;
  }
}


  
