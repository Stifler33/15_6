#include <iostream>
#include <cmath>
#include <vector>
using namespace std;
int main() {
    vector<int> vec = {-8,-7,-5,-4,-2,1,3,6,15};
    int start;
    for (int s = 0; s < vec.size() && vec[s] < 0; s++){
        start = s + 1;
    }
    for (int i = start - 1; i >= 0;){
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
