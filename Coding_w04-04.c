#include <stdio.h>

int main() {
    int score_int = 90.5;
    printf("กรณีที่ 1 (int): score = %d\n", score_int);

    float score_float = 90.5f;
    printf("กรณีที่ 2 (float): score = %.1f\n", score_float);

    return 0;
}
//ใช้ int จะได้เป็นจำนวนเต็ม จะตัดจาก90.5 เป็น 90
//ใช้ float สามารถเก็บและแสดงค่า 90.5 ซึ่งเป็นทศนิยม
//ใช้ int เมื่อต้องการแสดงผลเป็นจำนวนเต็ม และใช้ float เมื่อต้องการแสดงผลเป็นทศนิยม เพื่อความถูกต้องของข้อมูล