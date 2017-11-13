#include <iostream>


int main()

{
	setlocale(LC_ALL, "Russian");
	using namespace std;
    int i, n, x;
    cin >> n;
    if (n <= 0){
	    cout << " error";
        return 0;
    }
    cout << "Вводите через пробел"<< endl;
    
    int *a = new int[n];
    for (i = 0; i < n; i++) {
        cin >> a[i];
    }
    cin >> x;
    int b[x - 1], c[n - x - 1];
    for (i = 0; i < x; i++) {
        b[i] = a[i];
    }
    for (i = 0; i < n - x; i++) {
        c[i] = a[i + x];
    }
    for (i = 0; i < n - x; i++) {
        cout << c[i] << " ";
    }
    for (i = 0; i < x; i++) {
        cout << b[i] << " ";
    }
    return 0;
}
