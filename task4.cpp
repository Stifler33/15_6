#include <iostream>
#include <cmath>
#include <vector>
using namespace std;
int main() {
    vector<int> vec = {-2,-1,1,2,3};
    int start = 0;
    for (int s = 0; s < vec.size() && vec[s] < 0; s++){
        start = s + 1;
    }
    for (int i = start - 1; i >= 0 || start < vec.size();){
        if (vec[start] > abs(vec[i])){
            cout << vec[i] << " ";
            i--;
        }else {
            cout << vec[start] << " ";
            start++;
        }
    }
    return 0;
}
