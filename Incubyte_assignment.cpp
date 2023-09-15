#include <bits/stdc++.h>
using namespace std;

class Spacecraft
{
private:
    int x, y, z;    // Co-ordinates of Spacecraft
    char dir; // Current direction of Spacecraft (N, S, E, W, U, D)
    char org;

public:

    // Declaring Constructor of SpaceCraft with x,y,z co-ordinates and directon.
    Spacecraft(int &startx, int &starty, int &startz, char &startdir, char origin)
    {
        x = startx;
        y = starty;
        z = startz;
        dir = startdir;
        org = origin;
    }

     // Moving  SpaceCraft Forward
    void Forward() // f
    {
        
        if (dir=='N')
        {
            y++;
        }else if (dir=='S')
        {
            y--;
        }else if (dir=='E')
        {
            x++;
        }else if (dir=='W')
        {
            x--;
        }else if (dir=='U')
        {
            z++;
        }else if (dir=='D')
        {
            z--;
        }
        
    }

};