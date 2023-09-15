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

     // Moving SpaceCraft Upward
    void takeupward() // u
    {
        if (dir != 'U')
        {
            dir = 'U';
        }
    }
    
    // Printing x,y,z co-ordinates and dir
    void getPosition()
    {
        cout << "Current Position: (" << x << ", " << y << ", " << z << "), dir: " << dir << endl;
    }

    // Printing Final Position of SpaceCraft
    void FinalPosition()
    {
        cout << "Final Position: (" << x << ", " << y << ", " << z << ")" << endl;
    }

    // Printing Final dir of SpaceCraft
    void Finaldir()
    {
        cout << "Final dir: " << dir << endl;
    }

};


int main()
{
    int x = 0, y = 0, z = 0;
    char dir = 'N';
    Spacecraft Chandrayaan3(x, y, z, dir, 'N');

    string instruct;
    cin >> instruct;
    cout << endl;
    // Chandrayaan3.getPosition();
    for (int i = 0; i < instruct.length(); i++)
    {
        char code = instruct[i];
        switch (code)
        {
        case 'f':
            Chandrayaan3.Forward();
            Chandrayaan3.getPosition();
            break;
        case 'b':
            Chandrayaan3.Backward();
            Chandrayaan3.getPosition();
            break;
        case 'l':
            Chandrayaan3.takeLeft();
            Chandrayaan3.getPosition();
            break;
        case 'r':
            Chandrayaan3.takeRight();
            Chandrayaan3.getPosition();
            break;
        case 'u':
            Chandrayaan3.takeupward();
            Chandrayaan3.getPosition();
            break;
        case 'd':
            Chandrayaan3.takedownword();
            Chandrayaan3.getPosition();
            break;
        }
    }

    // Chandrayaan3.getPosition();
    cout << endl;

    Chandrayaan3.FinalPosition();
    cout << endl;

    Chandrayaan3.Finaldir();
    cout << endl;
    return 0;
}