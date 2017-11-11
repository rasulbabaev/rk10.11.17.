#include <iostream>
using namespace std;


int main()
{	setlocale(LC_ALL, "Russian");
	using namespace std;
	
    int k, i;
    cin >> k;
    if (k <= 0)
        return 0;
        cout << "Вводите через пробел " << endl;
    int a[k];
    for (i = 0; i < k; i++) {
        cin >> a[i];
    }
    for (i = 0; i < k / 2; i++) {
        swap(a[i], a[k - i - 1]);
    }
    for (i = 0; i < k; i++) {
        cout << a[i] << " ";
    }
    return 0;
}
