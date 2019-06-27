/**********************************************************************
 *                                                                    *
 *       「基礎」講座　プログラミング演習１                           *
 *       function  : pgm4       2019/01/29                            *
 *       corrector :              /  /                                *
 *                                                                    *
 **********************************************************************/
#include    <stdio.h>

#define     DEC      'd'
#define     HEX      'h'
#define     END      'e'

int swapbit(int);/*Countbit Prototype*/

int main(void)
{
    int     x;
    char    ctype[20];

    (void)printf( "  ###   Bit Swap Program   ###\n" );
    
    for (;;)
    {
        (void)printf( "     Input data type :  d ==> decimal,h ==> hexa-decimal\n");
        (void)printf( "                        e ==> end\n");
        (void)printf( "     Please input type = ");

        (void)scanf ( "%s",ctype );

        switch ( *ctype )
        {
        case    DEC:
                    
                (void)printf( "     Please input data = " );
                (void)scanf ( "%d",&x );
                
                (void)printf( "     Swap bit = %x\n\n", swapbit(x) ); 
                break;

        case    HEX:
                    
                (void)printf( "     Please input data = " );
                (void)scanf ( "%x",&x );
                    
                (void)printf( "     Swap bit = %x\n\n", swapbit(x) ); 
                break;

        case    END:
                    
                (void)printf( "  ###   End of Program   ###\n" );
                return 0;

        default :

                (void)printf( "     Input type error !\n" );

        }
    }

}
