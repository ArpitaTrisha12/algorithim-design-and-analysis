#include<bits/stdc++.h>
using namespace std;
int graph[10][10];
int main()
{ int vertex,edges;
cin>>vertex>>edges;
int begin,end;
for(int i=0;i<edges;i++)
{
    cin>>begin>>end;
    graph[begin][end]=1;
    graph[end][begin]=1;

}
//output
for(int i=0;i<vertex;++i){
         printf(" %d-> ",i);
for(int j=0;j<vertex;j++){
    if(graph[i][j]==1)
     cout<< j << " ";

}
    cout<<"\n";
}
return 0;
}
