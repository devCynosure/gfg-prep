// program not complete yet

#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<vector<int> >vec1(n, vector<int>(n, 0));
    vector<vector<int> >vec2(n, vector<int>(n, 0));

    for(int i = 0; i<n; i++){
        for(int j = 0; j<n; j++){
            cin>>vec1[i][j];
        }
    }
    
    
    for(int i = 0; i<n; i++){
        for(int j = 0; j<n; j++){
            cin>>vec2[i][j];
        }
    }

    cout<<endl<<endl;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout<< vec1[i][j] * vec2[j][i]<<" ";
        }
        cout<<endl;
        
    }

    return 0;
}