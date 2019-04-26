#include <stdio.h>

int main(void) {

    /*
     * 在学习过程中，我们经常会使用循环结构将数据放入数组中（也就是为数组元素逐个赋值），
     * 然后再使用循环结构输出（也就是依次读取数组元素的值），下面我们就来演示一下如何将 1~10 这十个数字放入数组中：
     *
     * 变量 i 既是数组下标，也是循环条件；将数组下标作为循环条件，达到最后一个元素时就结束循环。
     * 数组 nums 的最大下标是 9，也就是不能超过 10，所以我们规定循环的条件是 i<10，一旦 i 达到 10 就得结束循环。
     *
     */

    int nums[10];
    int i;

    // 将1 ~ 10 放入数组中
    for(i=0; i<10; i++)
    {

        nums[i] = (i+1);

    }

    //依次输出数组元素
    for(i=0; i<10; i++)
    {
        printf("%d", nums[i]);
    }

    return 0;


}
