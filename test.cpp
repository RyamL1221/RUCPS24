#include <iostream>

using namespace std;
typedef long long ll;
typedef long double ld;


int main(int argc, char** argv){
    ll n = 1000;
    string res;
    ll lb = 1;
    ll ub = n+1;
    ll mp = (ub-lb)/2;
    cout << mp << "\n";
    cin >> res;
    while(res != "correct"){
        if(res != "lower"){
            lb = mp;
            mp = (ub-lb)/2 + lb;
            cout << mp << "\n";
            cin >> res;
        }else{
            ub = mp;
            mp = (ub-lb)/2 + lb;
            cout << mp << "\n";
            cin >> res; 
        }
    }
    return EXIT_SUCCESS;
}
