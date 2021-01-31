#include<_.h>
const I sn=128,on=16; I c,c1,pc,cc;F bg;F*sx,*sy;I o[on][on];      Adafruit_NeoPixel q=Adafruit_NeoPixel(on*on,D7,NEO_RGB+NEO_KHZ800);arduinoFFT ff=arduinoFFT();
I hsv(F h,F s,F v){I n[]={5,3,1};F f[3];h*=360;N(3,F k=fmod(n[i]+h/60,6);f[i]=v-v*s*max(0.,min(k,min(4-k,1.)));f[i]*=256);R q.Color(f[0],f[1],f[2]);} EX S lgo[];
_ set(I n,F h,F s,F v){q.setPixelColor(n,hsv(h,s,v));} _ out(){q.clear();N(16,Nj(16,I v=o[i][j],x=15-i,y=i%2?j:15-j,z=16*x+y;
                                                         Z(!v&&43>lgo[0][16*(15-j)+i],set(z,0,0,.4))set(z,.3+.027*j*v,v?.6:1./sn*j,v?j/40+.5:.05+bg)));q.show();}
_ setup(){sx=(F*)calloc(sn,sizeof(F)),sy=(F*)calloc(sn,sizeof(F)); q.begin(),q.setBrightness(80),q.show();Serial.begin(115400);W(!Serial);delay(300);Q("boo\n");}
_ loop(){N(sn,sx[i]=analogRead(A0),sy[i]=0);ff.Windowing(sx,sn,FFT_WIN_TYP_HAMMING,FFT_FORWARD),ff.Compute(sx,sy,sn,FFT_FORWARD),ff.ComplexToMagnitude(sx,sy,sn);
 F a,v; ff.MajorPeak(sx,sn,sn<<1,&a,&v); bg=v/512/128; N(2,sx[i]=0); ++c;        //++c;++c1;c1%=256;bg=64<c1/2?128-c1/2:c1/2; N(on,Q("%10.2f ",sb[i]));Q("\n\n");
 F sb[on];N(on,sb[i]=0);N(sn>>1,sb[i*on/(sn>>1)]+=sx[i]);  N(on,Nj(on,o[i][j]=0)); N(on,I r=on*sb[i]/4096;r=min(r,on-1);Nj(r,o[i][j]=1)); out();}

