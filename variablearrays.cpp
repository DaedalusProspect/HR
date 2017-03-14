#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n, q;
    
    cin >> n >> q;
    int *arr[n];
    
    for (int i=0; i<n; i++)
    {
        int num;
        cin >> num;
        arr[i] = new int[num];
        for (int x=0; x<num; x++)
        {
            int input;
            cin >> input;
            arr[i][x] = input;
        }
    }
    
    for (int i=0; i<q; i++)
    {
        int a, b;
        cin >> a >> b;
        cout << arr[a][b] << endl;
    }
    

    return 0;
}
