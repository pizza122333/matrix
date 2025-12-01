#include <iostream>
using namespace std;

class Matrix {
private:
    int m[2][2];

public:
    // 생성자: 2차원 배열 초기화
    Matrix(int a, int b, int c, int d) {
        m[0][0] = a; m[0][1] = b;
        m[1][0] = c; m[1][1] = d;
    }

    // 연산자 오버로딩 (행렬 덧셈)
    Matrix operator+(const Matrix& other) {
        Matrix result(0, 0, 0, 0);
        for(int i = 0; i < 2; i++) {
            for(int j = 0; j < 2; j++) {
                result.m[i][j] = this->m[i][j] + other.m[i][j];
            }
        }
        return result;
    }

    // 출력 함수
    void print() const {
        for(int i = 0; i < 2; i++) {
            for(int j = 0; j < 2; j++) {
                cout << m[i][j] << " ";
            }
            cout << endl;
        }
    }
};

int main() {
    Matrix A(2, 4, 5, -5);
    Matrix B(-2, 3, 0, -5);

    Matrix C = A + B;

    cout << "연산 결과:" << endl;
    C.print();

    return 0;
}
