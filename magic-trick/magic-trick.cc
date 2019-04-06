#include <iostream>  // includes cin to read from stdin and cout to write to stdout

using namespace std;  // since cin and cout are both in namespace std, this saves some text

int main() {
  int t, ans1, ans2, arr1[4][4], arr2[4][4], i, j, k, founds, resp;

  cin >> t;  // read t. cin knows that t is an int, so it reads it as such.
  for (int tt = 1; tt <= t; ++tt) {
    founds=0;
    cin >> ans1 ;  // answer 1.
    ans1--;
    for (j=0;j<4;j++){
      for (k=0;k<4;k++){
        cin>>arr1[j][k];
      }
    }
    cin >> ans2 ;  // answer 2
    ans2--;
    for (j=0;j<4;j++){
      for (k=0;k<4;k++){
        cin>>arr2[j][k];
      }
    }

    // int esta=0;
    // if(ans1 == ans2){
    //   for(i=0;i<4;i++){
    //     for(j=0;j<4;j++){
    //       if( arr1[ans1][i] != arr2[ans2][j] ) {
    //         esta++;
    //       }
    //     }
    //   }
    // }

    // int same_arranges=-1;
    // for(i=0;i<4;i++){
    //   for(j=0;j<4;j++){
    //     if( arr1[i][j] != arr2[i][j] ) {
    //       same_arranges = 0;
    //     }
    //   }
    // }
    // if( same_arranges == -1 ){
    //   if(ans1 == ans2){
    //     cout << "Case #" << tt << ": Bad magician!" << endl;
    //   } else {
    //     cout << "Case #" << tt << ": Volunteer cheated!" << endl;
    //   }
    // }else {
    resp=0;
    for(i=0;i<4;i++){
      for(j=0;j<4;j++){
        if( arr1[ans1][i] == arr2[ans2][j] ) {
          founds++;
          resp=i;
        }
      }
    }
    if( founds == 1){
      cout << "Case #" << tt << ": " <<  arr1[ans1][resp] << " " << endl;
    }else if(founds>1) {
      cout << "Case #" << tt << ": Bad magician!" << endl;
    }else if(founds==0) {
      cout << "Case #" << tt << ": Volunteer cheated!" << endl;
    }
  }

  return 0;
}
