#include <iostream>
#include <vector>
using namespace std;
int main() {
    vector<int> array = {-2,1,-3,4,-1,2,1,-5,4};

    int maxI = 0;
    int minI = 0;
    int maxSum = 0;
    int sum = 0;
    for (int i = 0; i < array.size(); i++){
        sum += array[i];
        if (sum > maxSum){
            maxSum = sum;
            maxI = i;
        }
    }
    for (int i = maxI; i >= 0; i--){
        maxSum -= array[i];
        if (maxSum == 0) {
            minI = i;
        }
    }
    cout << "max index " << maxI << endl;
    cout << "min index " << minI << endl;
    return 0;
}
