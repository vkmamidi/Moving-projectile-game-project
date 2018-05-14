Name:- Vinay Kumar Reddy Mamidi
Student ID:- 109863968
Course:- 291T ( Game Development)

						MIDTERM

Task:-

1) Add a model of a canon in the game screen
2) Use mouse to rotate and set angle of canon
3) use mouse click to shoot and set random velocity as you wish
4) Create an animated bullet model.
5) Move the bullet on projectile path using velocity,gravity,time etc. as parameters
6) Make your model bounce when it collides with ground.

Approach:-

In order to add a model of a canon that can rotate, I have taken a canon top and canon base and rendered the images in the scene using bindTexture and placing them one on top of the other by using gltranslatef so that it looks like a canon. 
Then I used glrotatef on the canon top so that I can rotate it about the z-axis keeping the base constant, thereby giving us the image of a canon rotating. Then in the inputs.cpp, I increased and decreased the rotation angle when right mouse button is clicked and cursor is dragged. This was done by making use of a flag called mouse rotate which was changed to true when right mouse button was pressed and then using if condition when mouse rotate is true I incremented and decremented the rotate angle. When the right mouse button is released the flag is changed back to false.
  
Similarly I added a bullet model using bindtexture which appears on the screen and moves in a projectile motion when left mouse button is clicked and this was also done by making use of flag called ballappear which when true draws the projectile motion. To do this I created a class called "Shootball" where I have written the equation for projectile motion making use of velocity, time and defined a constant gravity of 4.