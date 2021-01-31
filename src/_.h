#include<Arduino.h>
#include<arduinoFFT.h>
#include<Adafruit_NeoPixel.h>
#define EX extern
#define Q Serial.printf
#define R return
#define Z(b,a...) if(b){a;}else
//#define N(n,a...) for(I i=0;i<n;i++){a;}
#define N(n,a...) {I _n=(n),i=0;W(i<_n){a;++i;}}
#define Nj(n,a...) {I _n=(n),j=0;W(j<_n){a;++j;}}

#define W(a...) while(({a;}))
typedef void _;typedef int I;typedef double F;typedef char*S;
