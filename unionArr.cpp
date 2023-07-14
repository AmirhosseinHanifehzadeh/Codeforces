#include <bits/stdc++.h>


using namespace std; 

int* Union(int arr1[], int arr2[], int n) 
{
    int i, j;
    int res[2 * n]; 

    i = 0; 
    j = 0; 

    for (int z = 0; z < 2 * n; z++) 
    {
        if (arr1[i] < arr2[j]) {
            res[z] = arr1[i]; 
            i++; 
        }
        
        else {
            res[z] = arr2[j];
            j++; 
        }
    }


    return res;
}

int main() {
    int arr1[] = {1,2,4,5,6};
    int arr2[] = {2,3,5,7};

        
}