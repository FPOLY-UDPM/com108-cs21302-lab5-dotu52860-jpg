/******************************************************************************
 * Họ và tên: [Đỗ Minh Tú]
 * MSSV:      [PS 48536]
 * Lớp:       [COM108-CS21302]
 *****************************************************************************/

//  BÀI 3: XÂY DỰNG HÀM HOÁN VỊ 
//  Input: Nhập vào từ bàn phím 2 giá trị a,b 
//  Output: hoán vị 2 giá trị của a và b 
//  Hướng dẫn thực hiện: 
//  Xây dựng hàm hoán vị sử dụng con trỏ và gọi hàm theo tham chiếu 

#include <stdio.h>

// Tạo hàm hoán vị sử dụng con trỏ
void hoanVi(int *a, int *b) {
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int a, b;

    // Nhập 2 giá trị
    printf("Nhap a va b: ");
    scanf("%d %d", &a, &b);

    // Gọi hàm hoán vị
    hoanVi(&a, &b);

    // In kết quả sau khi hoán vị
    printf("Sau khi hoan vi:\n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);

    return 0;
}

