#include<bits/stdc++.h>
using namespace std;
int r,c;
const int N=2000;
int visited[N][N];
int maze[N][N];
int dx[4]={0,0,-1,1};int dy[4]={1,-1,0,0};

pair<int,int>find_unvisited()
{
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            if(visited[i][j]==0&&maze[i][j]==0)
            {
                return {i,j};
            }
        }
    }
    return {-1,-1};
}

bool is_inside(pair<int,int>coord)
{
    int x=coord.first,y=coord.second;
    if(x>=0&&x<r&&y>=0&&y<c)
    {
        return true;
    }
    return false;
}

bool is_safe(pair<int,int>coord)
{
    int x=coord.first,y=coord.second;
    if(maze[x][y]==-1)
    {
        return false;
    }
    return true;
}

void BFS(pair<int,int>src)
{
    queue<pair<int,int>>q;
    visited[src.first][src.second]=1;
    q.push(src);
    while(!q.empty())
    {
        pair<int,int>head=q.front();
        q.pop();
        int x=head.first,y=head.second;
        for(int i=0;i<4;i++)
        {
            int new_x=x+dx[i];
            int new_y=y+dy[i];
            pair<int,int>adj_node={new_x,new_y};
            if(is_safe(adj_node)&&is_inside(adj_node)&&visited[new_x][new_y]==0)
            {
                visited[new_x][new_y]=1;
                q.push(adj_node);
            }
        }
    }
}

int main()
{
    int cnt=0;
    cin>>r>>c;
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            char x;cin>>x;
            if(x=='#')
            {
                maze[i][j]=-1;
                visited[i][j]=-1;
            }
            else
            {
                maze[i][j]=0;
            }
        }
    }
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            if(visited[i][j]==0&&maze[i][j]==0)
            {
                BFS({i,j});
                cnt++;
            }

        }
    }
    cout<<cnt<<endl;
}
