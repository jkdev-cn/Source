#include "stdio.h"

int main(int argc, char const *argv[]) {
  int num = 1250;//定义一个数，可以从键盘输入，这里直接写就行
  int a = num / 1000;//除以1000取整得到千位,1250除以100会得到1.25，但是C语言会取整数得到1
  int b = num / 100 % 10;//除以100自动取整得到12，对10求于得2，得百位
  int c = num / 10 % 10;//同理求得十位
  int d = num % 10;//同理得各位

  int sum = a + b + c + d;
  if (sum / 2 == 0) {
    printf("结果是偶数\n");
  }else {
    printf("结果不是偶数\n");
  }

  return 0;
}
