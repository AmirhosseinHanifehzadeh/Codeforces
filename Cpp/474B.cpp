#include <bits/stdc++.h>

using namespace std; 

int main() {
    int n; cin >> n;
    int a[n];
    int b[n]; 

    int c  = 0;  

    for (int i = 0; i < n; i++) {
        cin >> a[i];
        c += a[i]; 
        b[i] = c; 
    } 

    int m; cin >> m; 

    int q[m]; 
    for (int i = 0; i < m; i++) cin >> q[i]; 

    for (int w : q) {
        int l = 0; 
        int r = n;
        int mid;  

        while (r >= l) {
            mid = l + (r - l) / 2; 

             int test = b[mid];
             
            if (b[mid] > w) {
                if (mid != 0 && b[mid - 1] < w) break; 
                else r = mid - 1; 
            }

            else if (b[mid] < w) {
                if (mid - 1 != n && b[mid + 1] > w) {
                    mid++;
                    break; 
                }
                else l = mid + 1;
            }

            else break; 
        }
        
        mid++; 
        cout << mid << endl; 
    }
}