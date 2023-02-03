#include <iostream>
#include <cassert>
#include <vector>

using std::vector;

int binary_search(const vector<int> &a, int x, int n) {
  int left = 0, right = n-1; 

  while(left<= right){
    int mid = left + (right-left)/2;
    if(x== a[mid]){
      return mid;
    }else if(a[mid]>x){
      right = mid-1;
    }else{
      left = mid+1;
    }
  }
      return -1;
}


int first_occurence(const vector<int>&a, int x, int n) {
  int out = binary_search(a, x, n);
  if(out !=-1){
     for(int i = out;i>0&& a[i]==x;--i ){
        out = i;
     }
  }
  return out;
}

int main() {
  int n;
  std::cin >> n;
  vector<int> a(n);
  for (size_t i = 0; i < a.size(); i++) {
    std::cin >> a[i];
  }
  int m;
  std::cin >> m;
  vector<int> b(m);
  for (int i = 0; i < m; ++i) {
    std::cin >> b[i];
  }
  for (int i = 0; i < m; ++i) {
    std::cout << first_occurence(a, b[i], n) << ' ';
  }
}