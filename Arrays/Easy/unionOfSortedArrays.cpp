#include<bits/stdc++.h>
using namespace std;

// Optimal Approach - 
// Time Complexity - O (n1 + n2)
// Space Complexity - O (n1 + n2)

vector<int> unionOfArrays(vector<int> &a1, vector<int> &a2) {
    int i = 0;
    int j = 0;
    int n1 = a1.size();
    int n2 = a2.size();
    vector<int> unionArr;
    
    while (i < n1 && j < n2) {
        if (a1[i] <= a2[j]) {
            if (unionArr.size() == 0 || unionArr.back() != a1[i]) {
                unionArr.push_back(a1[i]);
            }
            i++;
        }
        else {
            if (unionArr.size() == 0 || unionArr.back() != a2[j]) {
                unionArr.push_back(a2[j]);
            }
            j++;
        }
    }
    
    while (j < n2) {
        if (unionArr.size() == 0 || unionArr.back() != a2[j]) {
            unionArr.push_back(a2[j]);
        }
        j++;
    }
    
    while (i < n1) {
        if (unionArr.size() == 0 || unionArr.back() != a1[i]) {
            unionArr.push_back(a1[i]);
        }
        i++;
    }
    
    return unionArr;
}
 
// Brute Force Method - 
// Time Complexity = O (n1 log n) + O (n2 log n) + O (n1 + n2)

// vector<int> unionOfArrays(vector<int> &a1, vector<int> &a2) {
//     int n1 = a1.size();
//     int n2 = a2.size();
//     set<int> st;
    
//     for (int i = 0; i < n1; i++) {
//         st.insert(a1[i]);
//     }
    
//     for (int i = 0; i < n2; i++) {
//         st.insert(a2[i]);
//     }
    
//     vector<int> temp;
//     for (auto it : st) {
//         temp.push_back(it);
//     }

//     return temp;
// }

int main()
{
    vector<int> a1 = {1,1,2,3,3,4};
    vector<int> a2 = {3,3,3,4,5,6};

    vector<int> unionArray = unionOfArrays(a1, a2);

    for (int i = 0; i < unionArray.size(); i++) {
        cout << unionArray[i] << " ";
    }

    return 0;
}