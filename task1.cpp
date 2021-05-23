#include <iostream>
#include <vector>
using namespace std;
int main() {
    vector<int> array = {5,3,2,5,0,5,1,2,4};
    int maxI = 0;
    int minI = 0;
    for (int i = 0, counter = 0,maxSum = 0;  i < array.size(); i++){
        counter += array[i];
        if (counter > maxSum){
            maxSum = counter;
            maxI = i;
        }
    }
    int sum = 0;
    for (int j = 0; j < maxI; j++){
        int counter = 0;
        for (int g = j ; g <= maxI; g++){
            counter += array[g];
        }
        if (counter > sum) {
            sum = counter;
            minI = j;
        }
    }
    cout << "max index " << maxI << endl;
    cout << "min index " << minI << endl;
    cout << "min Sum " << sum << endl;
    return 0;
}
