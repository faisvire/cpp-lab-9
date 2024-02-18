#include <iostream>
#include <utility> //для работы pair
using namespace std;
template <typename T>
std::pair<T, T> minmax(T* massiv, int n) {
    T maxm = massiv[0];
    T minm = massiv[0];
    for (int i = 0; i < n; ++i) {
        maxm = max(massiv[i], maxm);
        minm = min(massiv[i], minm);
    }
    return std::make_pair(maxm, minm);
}
std::pair<std::string, std::string> minmax(std::string* massiv, int n) {
    cout << "Working with strings:" << endl;
    std::string maxm = massiv[0];
    std::string minm = massiv[0];
    for (int i = 0; i < n; ++i) {
        maxm = max(massiv[i], maxm);
        minm = min(massiv[i], minm);
    }
    return std::make_pair(maxm, minm);
}
int main() {
    int n;
    cin >> n;
    auto massiv = new std::string[n];
    //auto massiv = new int[n];
    for (int i = 0; i < n; ++i) {
        cin >> massiv[i];
    }
    cout << "max - " << minmax(massiv, n).first << endl;
    cout << "min - " << minmax(massiv, n).second;
    delete[] massiv;
}
