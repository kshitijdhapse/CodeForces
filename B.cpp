#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

void DFS(vector<vector<ll>>&grid , vector<ll>&bombs , ll x , ll y , vector<vector<ll>>&vis , ll n , ll delrow[] , ll delcol[]){
    vis[x][y] = 1;
    ll r = grid.size() , c = grid[0].size();
    for(int i=0; i<4; i++){
        ll nx = x + delrow[i];
        ll ny = y + delcol[i];
        if((nx>=0)&&(ny>=0)&&(nx<r)&&(ny<c)){
            if((vis[nx][ny] == 0) && (grid[x][y] == grid[nx][ny])){
                DFS(grid , bombs , nx , ny , vis , n , delrow , delcol);
            }
        }
    }
}

ll solve(vector<vector<ll>>&grid , vector<ll>&bombs , ll n , bool &canyou , vector<ll>&present){
    ll r = grid.size() , c = grid[0].size();
    vector<ll>ans(n+1 , 0);
    vector<vector<ll>>vis(r , vector<ll>(c , 0));
    ll delrow[] = {0 , -1 , 0 , 1}; ll delcol[] = {-1 , 0 , 1 , 0};
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            if(vis[i][j] == 0){
                ans[grid[i][j]]++;
                DFS(grid , bombs , i , j , vis , n , delrow , delcol);
            }
        }
    }

    // final answer
    ll mx = INT_MAX;
    for(int i=1; i<=n; i++){
        if((bombs[i] == 1) && (present[i] == 1)){
            canyou = true;
            mx = min(mx , ans[i]);
        }
    }
    return mx;
}
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll r,c,n;
        cin>>n;
        cin>>r>>c;
        vector<vector<ll>>grid(r , vector<ll>(c));
        vector<ll>present(n+1 , 0);
        for(int i=0; i<r; i++){
            for(int j=0; j<c; j++){
                cin>>grid[i][j];
                present[grid[i][j]] = 1;
            }
        }
        ll b , val;
        cin>>b;
        vector<ll>bombs(n+1 , 0);
        for(int i=0; i<b; i++){
            cin>>val;
            bombs[val] = 1;
        }
        bool canyou = false;
        ll ans = solve(grid , bombs , n , canyou , present);
        if(canyou){
            cout<<ans<<endl;
        }
        else{
            cout<<-1<<endl;
        }
    }
    return 0;
}