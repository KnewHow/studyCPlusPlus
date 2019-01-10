#include<iostream>
#include<cstddef>

using std :: cout;
using std :: endl;

int main(){
  int ai[3][4] = {
    {1,2,3,-1},
    {4,5,6,-2},
    {7,8,9,-3}
  };

  using int_arr = int[4];

  for(int_arr *p = ai; p != ai + 3; p++) {
    for(int *q = *p; q != *p + 4; q++) {
      cout << *q << " ";
    }
    cout << endl;
  }
  cout << "--------------------------" << endl;

  for(auto &row : ai) {
    for(auto col : row) {
      cout << col << " ";
    }
    cout << endl;
  }
  cout << "--------------------------" << endl;

  for(const int(&row)[4] : ai) {
    for(int col : row) {
      cout << col << " ";
    }
    cout << endl;
  }
  cout << "--------------------------" << endl;

  for(size_t i = 0; i < 3; i++) {
    for(size_t j = 0; j < 4; j++) {
      cout << ai[i][j] << " ";
    }
    cout << endl;
  }
  cout << "--------------------------" << endl;

  for(int (*row)[4] = ai; row != ai + 3; row++) {
    for(int *col = *row; col != *row + 4; col++) {
      cout << *col << " ";
    }
    cout << endl;
  }
  return 0;
}
