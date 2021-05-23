#include <iostream>
#include <vector>
using namespace std;
int main() {
    vector<int> vec = {2,3,7,9,4,6,1};
    int result = 9;
    for (int i = 0; i < vec.size(); i++){
        int sum = vec[i];
        for (int j = i+1; j < vec.size(); j++){
            if (sum + vec[j] == result){
                cout << sum << endl;
                cout << vec[j] << endl;
                return 0;
            }
        }
    }
}
