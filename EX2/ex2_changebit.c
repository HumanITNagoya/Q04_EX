/* int型のビットの上下を反転させる */
int changebit(int x)
{
    int a, bit_size, mask;

    for( bit_size = 32 ; bit_size > 1 ; ){

        /* マスクビットの作成 */
        switch( bit_size ){
            case 32:
                mask = 0x0000ffff;
                break;
            case 16:
                mask = 0x00ff00ff;
                break;
            case 8:
                mask = 0x0f0f0f0f;
                break;
            case 4:
                mask = 0x33333333;
                break;
            default:    /* case 2: */
                mask = 0x55555555;
        }
        
        /* シフト量の計算 */
        bit_size /= 2;

        a = ( x >> bit_size ) & mask;
        x = ( x & mask ) <<  bit_size;
        x |= a;

        /* デバッグ用printf */
        /* printf( "%x\n" , x ); */
    }
    
    return x;
}


/* 下記のプログラムでも交換できますが、繰り返し回数が多くなります */
/*
int changebit( int x )
{    
    int i, ret = 0;
    for( i=0 ; i < 32 ; i++ ){
        ret <<= 1;
        ret |= ( x & 1 );
        x >>= 1;
    }
    return ret;
}
*/
