/* PR target/89261 */
/* { dg-do compile } */
/* { dg-options "-O2" } */

typedef double __v2df __attribute__ ((vector_size (16), aligned (1 << 28)));

__v2df foo = { 1.0, 2.0 };

/* { dg-final { scan-assembler "\.align\[ \t]+268435456" } } */
