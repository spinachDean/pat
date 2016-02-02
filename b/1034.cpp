#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;
typedef long long LL;
LL a1, a2, b1, b2, A, B;

LL ABS( LL x )
{
    if( x < 0 ) return  -x;
    return x;
}

LL gcd( LL a, LL b)
{
    return b == 0 ? a : gcd( b, a % b );
}

void out( LL x, LL y )
{
    LL GCD = gcd( x, y );
    x /= GCD;
    y /= GCD;
    if( x * y < 0 )    
    {
        printf( "(" );
        if( ( ( x / y >= 1 ) || ( x / y <= -1 ) ) && ( x % y == 0 ) )
            printf( "%lld", x / y );
        else if( x / y >= 1 || x / y <= -1 ) 
            printf( "%lld %lld/%lld", x / y, ABS( x % y ), ABS( y ) );
        else
            printf( "%lld/%lld", -ABS( x ) , ABS( y ) );    
        printf( ")" );
    }
    else
    {        
        if( x == 0 )
            printf( "0" );
        else if( ( ( x / y >= 1 ) || ( x / y <= -1 ) ) && ( x % y == 0 ) )
            printf( "%lld", x / y );
        else if( x / y >= 1 || x / y <= -1 ) 
            printf( "%lld %lld/%lld", x / y, x % y, y );
        else
            printf( "%lld/%lld", x , y );    
    }
}

void calc( LL a1, LL b1, LL a2, LL b2, char op )
{
    switch( op )
    {
        case '+':
            A = a1 * b2 + a2 * b1;
            B = b1 * b2;    
            out( a1, b1 );
            printf( " + " );
            out( a2, b2 );
            printf( " = " );
            out( A, B );
            putchar( '\n' );
            break;
        case '-':
            A = a1 * b2 - a2 * b1;
            B = b1 * b2;
            out( a1, b1 );
            printf( " - " );
            out( a2, b2 );
            printf( " = " );
            out( A, B );
            putchar( '\n' );
            break;
        case '*':
            A = a1 * a2;
            B = b1 * b2;    
            out( a1, b1 );
            printf( " * " );
            out( a2, b2 );
            printf( " = " );
            out( A, B );
            putchar( '\n' );
            break;
        case '/':
            A = a1 * b2;
            B = a2 * b1;    
            out( a1, b1 );
            printf( " / " );
            if( a2 == 0 )
            {
                printf( "0 = Inf\n");
            }
            else
            {
                out( a2, b2 );
                printf( " = " );
                out( A, B );
                putchar( '\n' );    
            }
            break;
    }
}

int main()
{
    scanf( "%lld/%lld %lld/%lld", &a1, &b1, &a2, &b2 );
    calc( a1, b1, a2, b2, '+' );
    calc( a1, b1, a2, b2, '-' );
    calc( a1, b1, a2, b2, '*' );
    calc( a1, b1, a2, b2, '/' );
    
    return 0;
}