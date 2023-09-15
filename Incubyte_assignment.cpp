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

     // Moving  SpaceCraft Backward
    void Backward() // b
    {
        
        if (dir=='N')
        {
            y--;
        }else if (dir=='S')
        {
            y++;
        }else if (dir=='E')
        {
            x--;
        }else if (dir=='W')
        {
            x++;
        }else if (dir=='U')
        {
            z--;
        }else if (dir=='D')
        {
            z++;
        }
        
        
    }

    // Moving SpaceCraft to  left
    void takeLeft() // l
    {
        switch (dir)
        {
        case 'N':
            dir = 'W';
            org = 'W';
            break;
        case 'S':
            dir = 'E';
            org = 'E';
            break;
        case 'E':
            dir = 'N';
            org = 'N';
            break;
        case 'W':
            dir = 'S';
            org = 'S';
            break;
        case 'D':
            if (org == 'N')
            {
                dir = 'W';
                org = 'W';
                break;
            }
            else if (org == 'S')
            {
                dir = 'E';
                org = 'E';
                break;
            }
            else if (org == 'E')
            {
                dir = 'N';
                org = 'N';
                break;
            }
            else
            {
                dir = 'S';
                org = 'S';
                break;
            }
        case 'U':
            if (org == 'N')
            {
                dir = 'W';
                org = 'W';
                break;
            }
            else if (org == 'S')
            {
                dir = 'E';
                org = 'E';
                break;
            }
            else if (org == 'E')
            {
                dir = 'N';
                org = 'N';
                break;
            }
            else
            {
                dir = 'S';
                org = 'S';
                break;
            }
        }
    }
    
    // Moving SpaceCraft to Right
    void takeRight() // r
    {

        switch (dir)
        {
        case 'N':
            dir = 'E';
            org = 'E';
            break;
        case 'S':
            dir = 'W';
            org = 'W';
            break;
        case 'E':
            dir = 'S';
            org = 'S';
            break;
        case 'W':
            dir = 'N';
            org = 'N';
            break;
        case 'D':
            if (org == 'N')
            {
                dir = 'E';
                org = 'E';
                break;
            }
            else if (org == 'S')
            {
                dir = 'W';
                org = 'W';
                break;
            }
            else if (org == 'E')
            {
                dir = 'S';
                org = 'S';
                break;
            }
            else
            {
                dir = 'N';
                org = 'N';
                break;
            }
        case 'U':
            if (org == 'N')
            {
                dir = 'E';
                org = 'E';
                break;
            }
            else if (org == 'S')
            {
                dir = 'W';
                org = 'W';
                break;
            }
            else if (org == 'E')
            {
                dir = 'S';
                org = 'S';
                break;
            }
            else
            {
                dir = 'N';
                org = 'N';
                break;
            }
        }
    }

     // Moving SpaceCraft Downward
    void takedownword() // d
    {
        if (dir != 'D')
        {
            dir = 'D';
        }
    }

};