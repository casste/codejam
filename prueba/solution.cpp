#include <iostream>
#include <algorithm>
using namespace std;

// Function to find all Permutations of a given string
// containing all distinct characters
void permutations(string str, int n, string res)
{
    // base condition (only one character is left in the string)
    if (n == 1)
    {
        cout << res + str << endl;
        return;
    }
    
    // process each character of the remaining string
    for (int i = 0; i < n; i++)
    {
        // push current character to the output string and recurse
        // for the remaining characters
        permutations(str.substr(1), n - 1, res + str[0]);

        // left rotate the string by 1 unit for next iteration
        // to right rotate the string use reverse iterator
        rotate(str.begin(), str.begin() + 1, str.end());
    }
}

// Find all Permutations of a string
int main()
{
    string str = "SE";
    string res;    // empty string

    permutations(str, str.size(), res);

    return 0;
}



// #include <iostream>

// using namespace std;

// int main() {
//     int T;
//     cin>>T;
//     for(int t=1;t<=T;t++) {
//         int N;
//         cin>>N;

//         // cout<<N<<endl;

//         bool S[N][N], E[N][N];
//         int r,c,p;
//         char out[2*N-2];
        
//         for(r=0;r<N;r++){
//             for(c=0;c<N;c++){
//                 S[r][c]=1;
//                 E[r][c]=1;
//                 // cout<<S[r][c];
//             }
//             // cout<<endl;
//         }        
//         // cout<<endl;
        
//         r=c=0;
//         for(p=0;p<(2*N-2);p++){
//             char o;
//             cin>>o;
//             // cout<<o<<endl;
//             if(o=='S') {
//                 S[r][c]=0;
//                 r++;
//             }else{
//                 E[r][c]=0;
//                 c++;
//             }
//         }
//         // for(r=0;r<N;r++){
//         //     for(c=0;c<N;c++){
//         //         cout<<S[r][c];
//         //     }
//         //     cout<<endl;
//         // }
//         // cout<<endl;
        
//         for(r=0;r<(2*N-2);r++) out[r]=0;

//         r=c=p=0;
//         if(E[r][c+1]){
//             out[p]='E';
//             c++;
//         }else{
//             out[p]='S';
//             r++;
//         }

//         for(p=1;p<(2*N-2);p++)
//         {
//             if(out[p-1]=='E'){
//                 if(S[r][c] && r<N){
//                     out[p]='S';
//                     r++;
//                 }else{
//                     out[p]='E';
//                     c++;
//                 }
//             }else{
//                 if(E[r][c] && c<N){
//                     out[p]='E';
//                     c++;
//                 }else{
//                     out[p]='S';
//                     r++;
//                 }
//             }
//         }
//         out[2*N-2]=0;
        
//         cout << "Case #" << t << ": "<< out << endl;
//     }
// }
