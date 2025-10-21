#include <iostream>

using namespace std;

const int MAX_N = 100;
const int MAX_M = 100;

int main() {
	int n, m;
	cin >> n >> m;
	cin.ignore();

	char matrix[MAX_N][MAX_M];
	int result[MAX_N][MAX_M];

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin.get(matrix[i][j]);
		}
		cin.ignore();
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			int count = 0;

			for (int di = -1; di <= 1; di++) {
				for (int dj = -1; dj <= 1; dj++) {
					int ni = i + di;
					int nj = j + dj;

					if (ni >= 0 && ni < n && nj >= 0 && nj < m) {
						if (matrix[ni][nj] == '!')
							count++;
					}
				}
			}

			result[i][j] = count;
		}
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cout << result[i][j];
		}
		cout << endl;
	}

	return 0;
}
