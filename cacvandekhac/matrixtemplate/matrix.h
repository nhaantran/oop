template <class T>
class Matrix
{
private:
    T **data;
    int nRows, nCols;
public:
    // Hàm khởi tạo ma trận mặc định.
    Matrix();
    // Hàm khởi tạo kích thước ma trận (bao gồm cấp phát động) với số //hàng bằng r và số cột bằng c.
    Matrix(int r, int c) ;
    // Hàm hủy (bao gồm giải phóng bộ nhớ)
    ~Matrix() ;
    void setAt(int i, int j, T x) ; // Đặt giá trị phần tử (i,j) bằng x.
    int getAt(int i, int j) ; //Lấy giá trị phần tử (i,j) của ma trận
    void display() ; //Hiển thị ma trận ra màn hình.
    void resize(int r, int c); //Đặt lại kích thước ma trận
    // Cộng hai ma trận
    template <class Y>
    friend Matrix operator+(const Matrix<Y> &m1, const Matrix<Y> &m2);
    // Nhân hai ma trận
    template <class Y>
    friend Matrix<Y> operator*(const Matrix<Y> &m1, const Matrix<Y> &m2);
};