#include <bits/stdc++.h>
using namespace std;

int main()
{
  int a,b,c,t,count=0;
  vector<int> sueldos;
  cin>>t;
  while(t--){
    cin>>a>>b>>c;
    sueldos.push_back(a);
    sueldos.push_back(b);
    sueldos.push_back(c);
    sort(sueldos.begin(),sueldos.end());
    cout<<"Case "<<count+1<<": "<<sueldos[1]<<endl;
    sueldos.erase(sueldos.begin(),sueldos.end());
    count++;
    
  }
}