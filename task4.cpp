#include <iostream>
#include <cmath>
#include <vector>
#include <cassert>
using namespace std;
int main() {
    vector<int> vec = {-3,-2,-1,2,4,5,6};
    int start;
    for (int i = 0; i < vec.size() && vec[i] <= 0; i++){
        start = i + 1;
    }
    int i = 0;
    for (i = (start <= vec.size() && start > 0) ? start - 1 : start + 1 ; i >= 0 && start <= vec.size();){
        if (abs(vec[i]) <= abs(vec[start])){
            cout << vec[i] << " ";
            if (i < start) {
                i--;
            }
        }else{
            cout << vec[start] << " ";
            start++;
        }
    }
    cout << endl << start << endl << i;
    return 0;
}
