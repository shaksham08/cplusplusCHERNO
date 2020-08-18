# Classes

classes is a way to put data and functions together.

```c++
#include <iostream>


int main()
{
    int pos1, x1, y1, speed1;
    int pos2, x2, y2, speed2;
}
```

For example we want to create a game where there are two player so we need to define so many things which actually becomes a little bit messy;

```c++
#include <iostream>

class Player {
    int x, y;
    float speed;
};

int main()
{
    //Variable that are created from classes are called objects.
    //An object is an instance of a class, and may be called a class instance or class object
    Player playerone;
    Player playertwo;
}
```

Note by default a class makes its variables as private which means only inside the class we can access so we have to make it public to access outside of the class.

```c++
#include <iostream>

class Player {
public:
    int x, y;
    float speed;
};

int main()
{
    //Variable that are created from classes are called objects.
    //An object is an instance of a class, and may be called a class instance or class object
    Player playerone;
    Player playertwo;
    playerone.x = 5;
    playerone.y = 10;
    playerone.speed = 4.5;
}
```

Now we want to move the player so we have to create a funciton for that.

```c++
#include <iostream>

class Player {
public:
    int x, y;
    float speed;
};

void move(Player player, int xa, int ya)
{
    player.x += xa * player.speed;
    player.y += ya * player.speed;
}

int main()
{
    //Variable that are created from classes are called objects.
    //An object is an instance of a class, and may be called a class instance or class object
    Player playerone;
    Player playertwo;
    playerone.x = 5;
    playerone.y = 10;
    playerone.speed = 4.5;
}
```

But we can move this function inside the class where it will be called as a method.

```c++
#include <iostream>

class Player {
public:
    int x, y;
    float speed;


    void move( int xa, int ya)
    {
        x += xa *speed;
        y += ya * speed;
    }
};



int main()
{
    //Variable that are created from classes are called objects.
    //An object is an instance of a class, and may be called a class instance or class object
    Player playerone;
    Player playertwo;
    playerone.x = 5;
    playerone.y = 10;
    playerone.speed = 4.5;
    playerone.move(1, 1);
}

```

Now every player object will have its own move function.

This just clean up our code and make the code complexity easier.

What classes can do can be done without it also so c language are still used.
