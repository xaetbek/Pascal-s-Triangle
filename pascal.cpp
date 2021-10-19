//Khayotbek Azimov

#include <iostream>

using namespace std;

int main()
{
    int n, triangle;
    cout << "Input: ";
    cin >> n;
    
    cout<<"Output: "<<endl;
    for (int i = 0; i < n; i++){
        triangle = 1;
        for (int j = 0; j <= i; j++){
            cout << triangle << " ";
            triangle = triangle * (i - j) / (j + 1);
        }
        cout << endl;
    }
    cout << endl;
    return 0;
}