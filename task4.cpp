#include <iostream>
#include <cmath>
#include <vector>
using namespace std;
vector<int> sort_Vec(vector<int> &vec){
    for (int i = 0; i < vec.size(); i++){
        for (int j = i+1; j < vec.size(); j++){
            if (abs(vec[j]) < abs(vec[i])){
                int buf = vec[i];
                vec[i] = vec[j];
                vec[j] = buf;
            }
        }
    }
    return vec;
}
int main() {
    vector<int> vec = {1,-5,7,-8,-4,6,-7,-2,5,15,6};
    sort_Vec(vec);
    for (int i : vec){
        cout << i << " ";
    }
    return 0;
}
