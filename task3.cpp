#include <iostream>
#include <vector>
using namespace std;
vector<int> sort_Vec(vector<int> &vec){
    for (int i = 0; i < vec.size(); i++){
        for (int j = i+1; j < vec.size(); j++){
            if (vec[j] < vec[i]){
                int buf = vec[i];
                vec[i] = vec[j];
                vec[j] = buf;
            }
        }
    }
    return vec;
}
int main() {
    vector<int> vec;
    int input = 0;
    while (input != -2){
        cin >> input;
        if (input == -1){
            sort_Vec(vec);
            cout << vec[4] << endl;
            //output all vec
            /*
            for (int i : vec){
                cout << i << ' ';
            }
             */
            cout << endl;
        }else if (input == -2){
            return 0;
        }else{
            vec.push_back(input);
        }

    }
    return 0;
}
