#ifndef INPUTS_H
#define INPUTS_H

#include <windows.h>
#include <iostream>
#include <Model.h>
#include <Parallax.h>
#include <Player.h>
#include <Shootball.h>

using namespace std;
class Inputs
{
    public:
        Inputs();
        virtual ~Inputs();

        void KeyPressed(Player *);
        void KeyPressed1(Shootball *);
        void KeyEnv(Parallax *,float);
        void KeyUp(Player *);
        void MouseEventDown(Player *,double ,double);
        void MouseEventDown1(Shootball *,double ,double);
        void MouseEventUp(Shootball *, double ,double );
        void MouseEventUp1(Player *,double,double);
        void MouseWheel(Model *,double);
        void MouseMove(Player *,double ,double );
        void MouseMove1(Shootball *,double,double);


        int tick_count;
        float  Wwidth, Wheight;
        double prev_Mouse_X;
        double prev_Mouse_Y;
        bool Mouse_Translate;
        bool Mouse_Roatate;
        bool Mouse_Roatate1;

        WPARAM wParam;
    protected:

    private:
};

#endif // INPUTS_H
