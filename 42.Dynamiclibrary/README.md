# Dynamic Library

- First make sure to see the static library section first before seeing this.

- Now we will be linking that dynamically

- Dyanmic linking is linking happens at runtime.

- We add external binary at runtime.

-Here in lib we will just add _glfw3dll.lib_

```c++
#include <iostream>
#include "GLFW/glfw3.h"

int main()
{
    int a = glfwInit();
    std::cout << a << std::endl;

    std::cout << "Hello World!\n";
}
```

- If we run then our executable will be generated easly and we can run the program.

- If wen then try to run then we will get glfw3.dll not found error while running this. This is where we have to show our program where is dll , just place that dll file in debug folder of solution.

```c++
#include <iostream>
#include "GLFW/glfw3.h"

int main()
{
    int a = glfwInit();
    std::cout << a << std::endl;

    std::cout << "Hello World!\n";
}
```

Now this runs prefectly.
