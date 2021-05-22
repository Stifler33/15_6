#include <iostream>
#include <vector>
using namespace std;
int main() {
    vector<int> array = {2,-1,2,5,0,-5,-1,2,4};

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
    int minSum = 0;

    for (int j = 0; j < maxI; j++){
        int sum2 = 0;
        for (int g = j ; g <= maxI; g++){
            sum2 += array[g];
        }
        if (sum2 > minSum) {
            minSum = sum2;
            minI = j;
        }
    }

    cout << "max index " << maxI << endl;
    cout << "min index " << minI << endl;
    cout << "min Sum " << minSum << endl;
    return 0;
}
