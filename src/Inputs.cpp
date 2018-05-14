#include <Inputs.h>
#include <iostream>
float mx,my;
int f=0;
Inputs::Inputs()
{
        Mouse_Translate = false;
        Mouse_Roatate = false;
        Mouse_Roatate1= false;

    Wwidth = GetSystemMetrics(SM_CXSCREEN);
    Wheight= GetSystemMetrics(SM_CYSCREEN);
}

Inputs::~Inputs()
{
    //dtor
}

void Inputs::KeyEnv(Parallax *Bk1,float speed)
{
    switch (wParam)
            {
                case VK_LEFT:

                    break;

                case VK_RIGHT:
                  break;

                case VK_UP:
                    break;

                case VK_DOWN:
                    break;
            }
}


void Inputs::KeyPressed(Player *Player)
{
  switch (wParam)
            {
                case VK_LEFT:

                    break;

                case VK_RIGHT:

                    break;

                case VK_UP:
                    break;

                case VK_DOWN:
                    break;

                case VK_HOME:
                    break;

                case VK_END:
                    break;
            }
}


void Inputs::KeyUp(Player *Player)
{
    switch (wParam)
            {
                default:
                break;
            }
}

void Inputs::MouseEventDown(Player *ply, double x,double y)
{
        switch (wParam)
            {
                case MK_LBUTTON:


                    break;
                case MK_RBUTTON:
                    Mouse_Roatate=true;
                    break;

                case MK_MBUTTON:
                    break;

                default:
                    break;
            }

}

void Inputs::MouseEventDown1(Shootball *ball, double x,double y)
{
        switch (wParam)
            {
                case MK_LBUTTON:


                    break;
                case MK_RBUTTON:
                    Mouse_Roatate1=true;
                    break;

                case MK_MBUTTON:
                    break;

                default:
                    break;
            }

}
void Inputs::MouseEventUp1(Player *ply, double x,double y)
 {
     switch (wParam)
            {
                case MK_RBUTTON:
                    Mouse_Roatate=false;
                    break;
            }
 }

 void Inputs::MouseEventUp(Shootball *ball, double x,double y)
 {

     mx=(float)(x-Wwidth/2)/450*(Wwidth/Wheight);   // for x-coordinate of mouse click
     my=(float)(Wheight/2-y)/400*(Wwidth/Wheight);   // for y-coordinate of mouse click

     switch (wParam)
            {
                case MK_LBUTTON:
                    ball->ballappear=!ball->ballappear;
                    if(ball->ballappear==true)
                    {
                   ball->action = 1;
                    }
                    break;

                case MK_RBUTTON:
                    Mouse_Roatate1=false;
                    break;

                case MK_MBUTTON:
                    break;

                default:
                    break;
            }
 }

void Inputs::MouseMove(Player *ply,double x,double y)
{
      if(Mouse_Roatate)
      {
                    if(ply->RotateZ1<=25.0 && f==0){
                        ply->RotateZ1 += .5;
                        f = 0;
                    }else if(ply->RotateZ1>=25.0 || f==1){
                        ply->RotateZ1 -= .5;
                        f = 1;
                    }
                    if(ply->RotateZ1 == 0.0){
                        f = 0;
                   }


      }
}
void Inputs::MouseMove1(Shootball *ball,double x,double y)
{
      if(Mouse_Roatate1)
      {

                if(ball->ball_x>=-2.00 && ball->ball_y<=0.50 && f==0){
                        ball->ball_x -= 0.004;
                        ball->ball_y += 0.004;
                        f = 0;
                    }
                    else if(ball->ball_x<=-1.8 && ball->ball_y>=-0.37 && f==1){
                        f = 1;
                        ball->ball_x += 0.004;
                        ball->ball_y -= 0.004;
                    }

      }
}
