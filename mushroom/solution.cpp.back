#include <iostream>
#include <algorithm>
using namespace std;

// Function to find all Permutations of a given string
// containing all distinct characters
string org;
string solve;

int permutations(string str, int n, string res, int N)
{

    // base condition (only one character is left in the string)
    if (n == 1)
    {

        string nueva=res+str;
        bool marca=true;

        int rutaorg[2*N-2][2];
        rutaorg[0][0] = 0;
        int suma=0;
        for(int i=0;i<org.size();i++){
            if(org[i]=='E'){
                rutaorg[i][0]=suma;
                suma++;
                rutaorg[i][1]=suma;
            }else{
                rutaorg[i][0]=suma;
                suma+=5;
                rutaorg[i][1]=suma;
            }
            // cout<<rutaorg[i][0]<<','<<rutaorg[i][1]<<endl;
        }


        int rutanueva[2*N-2][2];
        rutanueva[0][0] = 0;
        suma=0;
        for(int i=0;i<nueva.size();i++){
            if(nueva[i]=='E'){
                rutanueva[i][0]=suma;
                suma++;
                rutanueva[i][1]=suma;
            }else{
                rutanueva[i][0]=suma;
                suma+=5;
                rutanueva[i][1]=suma;
            }
            // cout<<rutanueva[i][0]<<','<<rutanueva[i][1]<<endl;
        }

        for(int i=0;i<nueva.size();i++){
            for(int j=0;j<nueva.size();j++){
                if(rutanueva[j][0]==rutaorg[i][0] && rutanueva[j][1]==rutaorg[i][1]){
                    marca=false;
                }
            }
        }

        if( marca ){
            solve=nueva;
            return -1;
        }
        
        // cout << marca + res + str << endl;        
        return 0;
    }
    
    // process each character of the remaining string
    for (int i = 0; i < n; i++)
    {
        // push current character to the output string and recurse
        // for the remaining characters
        if(permutations(str.substr(1), n - 1, res + str[0], N)){
            return -1;
        }

        // left rotate the string by 1 unit for next iteration
        // to right rotate the string use reverse iterator
        rotate(str.begin(), str.begin() + 1, str.end());
    }

    return 0;
}

// Find all Permutations of a string
int main()
{
    string str;
    string res;    // empty string
    int T;
    cin>>T;
    for(int t=1;t<=T;t++) {
        int N;
        cin>>N;        
        cin>>org;
        str=org;

        if(permutations(str, str.size(), res, N)){
            cout<<"Case #"<<t<<": "<<solve<<endl;
        }
    }

    return 0;
}
