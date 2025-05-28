#include <bits/stdc++.h>
using namespace std ; 

int main () {

    int n;
    cin >> n;

    int coin[] = {10, 5, 2 ,1};

    for (int i = 0 ; i < 4 ; i++) {
        int count = n / coin[i];
        cout << coin[i] << " = " << count << "\n"; 
        n = n % coin[i];
    }




}