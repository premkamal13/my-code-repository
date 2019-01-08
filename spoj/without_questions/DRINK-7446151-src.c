#include<stdio.h>
#define cw 4.19
#define ci 2.09
#define em 335
int main()
{
    float mw,mi,ti,tw,t,Hi,Hw,x;
    while(scanf("%f %f %f %f",&mw,&mi,&tw,&ti),(mw!=0||mi!=0||tw!=0||ti!=0))
    {
                    t=0;
                    Hw=0;
                    Hi=0;
                    x=0;
                    if(mw!=0 && mi==0)printf("%.1f g of ice and %.1f g of water at %.1f C\n",mi,mw,tw);
                    else if(mi!=0 && mw==0)printf("%.1f g of ice and %.1f g of water at %.1f C\n",mi,mw,ti);
                    else
                    {
                        if(ti==0 && tw==0)printf("%.1f g of ice and %.1f g of water at %.1f C\n",mi,mw,tw);
                        else
                        {
                            ti=-ti;
                            Hw=mw*cw*tw;
                            Hi=mi*ci*ti;
                            if(Hw>Hi)
                            {
                                     x=em*mi;
                                     if(Hw>(Hi+x)){ t=(((mw*cw*tw)-Hi-x)/((mw+mi)*cw)); mw+=mi; mi=0.0; }
                                     else
                                     {
                                         t=0.0;
                                         x=(Hw-Hi)/em;
                                         mw+=x;
                                         mi-=x;
                                     }
                            }
                            else if(Hw<Hi)
                            {
                                 x=em*mw;
                                 if((Hw+x)<Hi){ t=-1*(((mi*ci*ti)-Hw-x)/((mi+mw)*ci)); mi+=mw; mw=0.0; }
                                 else
                                 {
                                      
                                         t=0.0;
                                         x=(Hi-Hw)/em;
                                         mw-=x;
                                         mi+=x;
                                 }
                            }
                            else t=0.0;            
                            printf("%.1f g of ice and %.1f g of water at %.1f C\n",mi,mw,t);
                        }
                    }
    }
return 0;
}                           
