#include <iostream>  // includes cin to read from stdin and cout to write to stdout
#include <set>

using namespace std;  // since cin and cout are both in namespace std, this saves some text

// #define DEBUG 1

int main() {
    int T, N, t, i, war_naomi_points, war_ken_points, deceitful_war_naomi_points, deceitful_war_ken_points;
    double mass, war_naomi_choice, war_ken_choice, deceitful_war_naomi_choice, deceitful_war_ken_choice;
    set<double> war_naomi, war_ken, deceitful_war_naomi, deceitful_war_ken;
    set<double>::iterator war_naomiit, war_kenit, deceitful_war_naomiit, deceitful_war_kenit;
    
    cin >> T;  // read t. cin knows that t is an int, so it reads it as such.
#ifdef DEBUG
    cout << T << endl;
#endif
  
    for(t=1;t<=T;++t) {
        cin >> N ;
#ifdef DEBUG
        cout << N << endl;
#endif

        war_naomi.clear();        
        for(i=0;i<N;i++)
        {
            cin >> mass;
            war_naomi.insert(mass);
            deceitful_war_naomi.insert(mass);
        }
#ifdef DEBUG
        for(war_naomiit=war_naomi.begin(); war_naomiit!=war_naomi.end(); war_naomiit++){
            cout<<*war_naomiit<<' ';
        }
        cout<<endl;
#endif

        war_ken.clear();
        for(i=0;i<N;i++)
        {
            cin >> mass;
            war_ken.insert(mass);
            deceitful_war_ken.insert(mass);
        }
#ifdef DEBUG
        for(war_kenit=war_ken.begin(); war_kenit!=war_ken.end(); war_kenit++){
            cout<<*war_kenit<<' ';
        }
        cout<<endl;
#endif

        war_naomi_points=0;
        war_ken_points=0;
        cout << "Case #" << t << ": ";
#ifdef DEBUG            
        cout<<endl;
#endif        
        for(i=0;i<N;i++) {
            war_naomiit = war_naomi.begin();
            war_naomi_choice=*war_naomiit;
            war_naomi.erase(war_naomi_choice);
            for(war_kenit=war_ken.begin(); war_kenit!=war_ken.end(); war_kenit++){
                war_ken_choice = *war_kenit;
                if(war_ken_choice>war_naomi_choice){
                    break;                    
                }
            }
            war_ken.erase(war_ken_choice);
            if(war_ken_choice>war_naomi_choice){
                war_ken_points++;
            }else{
                war_naomi_points++;
            }
#ifdef DEBUG            
            cout<<war_naomi_choice<<' '<<war_ken_choice<<' ';
            cout<<endl;
#endif
        }

        deceitful_war_naomi_points=0;
        deceitful_war_ken_points=0;
#ifdef DEBUG            
        cout<<endl;
#endif        
        for(i=0;i<N;i++) {
            deceitful_war_naomiit = deceitful_war_naomi.begin();
            deceitful_war_naomi_choice=*deceitful_war_naomiit;
            deceitful_war_naomi.erase(deceitful_war_naomi_choice);

            deceitful_war_kenit = deceitful_war_ken.end();
            deceitful_war_ken_choice = *deceitful_war_kenit;
            for(deceitful_war_noemiit=deceitful_war_noemi.end(); deceitful_war_noemiit!=deceitful_war_noemi.begin(); deceitful_war_noemiit--){
                if(*deceitful_war_noemiit<deceitful_war_ken_choice){
                    break;                    
                }
            }
                        
            deceitful_war_ken.erase(deceitful_war_ken_choice);
            for(deceitful_war_kenit=deceitful_war_ken.begin(); deceitful_war_kenit!=deceitful_war_ken.end(); deceitful_war_kenit++){
                deceitful_war_ken_choice = *deceitful_war_kenit;
                if(deceitful_war_ken_choice>deceitful_war_naomi_choice){
                    break;                    
                }
            }
            deceitful_war_ken.erase(deceitful_war_ken_choice);
            if(deceitful_war_ken_choice>deceitful_war_naomi_choice){
                deceitful_war_ken_points++;
            }else{
                deceitful_war_naomi_points++;
            }
#ifdef DEBUG            
            cout<<deceitful_war_naomi_choice<<' '<<deceitful_war_ken_choice<<' ';
            cout<<endl;
#endif
        }
        cout<<deceitful_war_naomi_points<<" "<<war_naomi_points<<endl;

        
    }
}
