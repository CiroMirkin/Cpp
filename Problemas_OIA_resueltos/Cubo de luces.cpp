#include <iostream>
#include <vector>

using namespace std;

// ---------------------
// Resuelto por CHAT-GPT	
// ---------------------

int cubo(vector<vector<vector<int> > >& v) {
    int n = v.size();
    int cnt = 0;  // Contador de pulsaciones de botones

    // Itera a traves de los prismas 1x1xn
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            int sum = 0;  // Suma de luces en el prisma
            for (int k = 0; k < n; k++) {
                sum += v[i][j][k];
            }

            // Si la suma es impar, no se puede encender todas las luces
            if (sum % 2 != 0) {
                return -1;
            }

            // Si la suma es par y no todas las luces están encendidas, se pulsa el botón
            if (sum > 0) {
                cnt++;
            }
        }
    }

    return cnt;
}

int main() {
    int n;
    cin >> n;

    vector<vector<vector<int> > > v(n, vector<vector<int> >(n, vector<int>(n)));

    // Leer la configuracion del cubo
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            for (int k = 0; k < n; k++) {
                cin >> v[i][j][k];
            }
        }
    }

    int result = cubo(v);
    cout << result << endl;

    return 0;
}
