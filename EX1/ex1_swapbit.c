/* int型数値のbitの上位16ビットと下位16ビットを交換 */
int swapbit(int x)
{
    int a, b;
    a = ( x >> 16 ) & 0xffff;
    b = x << 16;

    /* printf("a = %x   b = %x\n", a, b); */

    x = a | b;
    return x;
}
