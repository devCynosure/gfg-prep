#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<vector<int>> vec(n, vector<int> (n, 0));
    vector<vector<int>> ans(n, vector<int> (n, 0));

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            /* code */
            cin>>vec[i][j];
        }
        
        /* code */
    }

    for(int i = 0; i<n; i++){
        for(int j = 0; j<n; j++){
            ans[i][j] = vec[j][i];
            cout<<ans[i][j]<<" ";

        }
        std::cout<<endl;
    }

    return 0;
    
}