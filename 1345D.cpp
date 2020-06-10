#include <iostream>
#include <cstdio>
#include <string.h>
#include <math.h>
#include <queue>
#include <string>
#include <vector>
#include <algorithm>
#define ll long long
#define Inf 0x3f3f3f3f
using namespace std;
const int maxn=1e5;
char s[1005][1005];
bool vis[1005][1005];
int gx[1005];
int gy[1005];
int dx[4]={1,0,-1,0};
int dy[4]={0,1,0,-1};
void dfs(int x,int y){
	vis[x][y]=1;
	for(int k=0;k<4;k++){
		int nx=x+dx[k],ny=y+dy[k];
		if(s[nx][ny]=='#'&&!vis[nx][ny]){
			dfs(nx,ny);
		}
	}
}
int main()
{
	int n,m;
	cin>>n>>m;
	int all=0;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			cin>>s[i][j];
			if(s[i][j]=='#'){
				all++;
			}
		}
	}
	if(all==0){
		printf("0\n");
		return 0;
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			if(s[i][j]=='#'){
				if(gx[i]){if(j-gx[i]>1){printf("-1\n");return 0;}}
				gx[i]=j;
				if(gy[j]){if(i-gy[j]>1){printf("-1\n");return 0;}}
				gy[j]=i;
			}
		}
	}
	int wx=1,wy=1;
	for(int i=1;i<=n;i++){
		if(!gx[i]){wx=0;break;}
	}
	for(int i=1;i<=m;i++){
		if(!gy[i]){wy=0;break;}
	}
	if((wx+wy)==1){puts("-1");return 0;}
	int ans=0;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			if(s[i][j]=='#'&&!vis[i][j]){
				dfs(i,j);
				ans++;
			}
		}
	}
	printf("%d\n",ans);
	return 0;
}
