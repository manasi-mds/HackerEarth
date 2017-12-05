#include<iostream>
#include<vector>
using namespace std;
int main() {
  int t;
  int n;
  int k;
  int min;
  cin>>t;
  int sol[t];
  for(int tot=0;tot<t;tot++) {
    cin>>n>>k;
    min = k;
    vector<int> a(n);
    for(int i=0;i<n;i++) {
      cin>>a[i];
      if(a[i]<min)
        min = a[i];
    }
    if(min<k) {
      sol[tot] = k-min;
    }
    else
      sol[tot] = 0;
  }
  for(int i=0;i<t;i++)
    cout<<sol[i]<<endl;
  return 0;
}
