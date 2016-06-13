#include <iostream>
using namespace std;

int main(){
    int N = 100;
    int i,p,q,t,id[N];
    for(i = 0; i < N; i++)
        id[i] = i;
    while(cin >> p >> q){
        if(id[p] == id[q]) continue;
        for(t = id[p], i = 0; i < N; i++)
            if(id[i] == t) id[i] =id[q];
        for(i = 0; i < 10; i++)
            cout << id[i];
        cout << endl;
    }

    return 0;
}
