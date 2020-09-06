# Static Linking

now we know that in other language lika java , python adding libary is very easy but in c++ its not so easy , so lets make this clear.

- hate the idea of package manager
- Just straight away use direct library
- just clone and compile and run

# Likning again Binary

- here we will be using opengl library
- there are two directory include and lib directory
- inlcude directory has a bunch of header files that we can use the functions
- lib directory has those functions defined
- Now there usually two phases for this i.e dyncamic library and static library
- static linking means its gets clipped into our binary i.e exe but in dynamic libary gets clipped in runtime.
- usually try to use static linking as this is sometime faster.
- So here we are gonna see both of them static and dynamic one.

- Should i just link or compile myself , for most serious project just add the source code and then either compile them to static or dynamic

- if not access to ssource code or dont want to set it up then just link it as binary

- so here we will be linking in binary

- sometimes when binary is not available so we have to add that project and build it myself

- 32 bit binary or 64 bit binary depends only on the application target like which bit we want to target the application.
- after downloading [GLFW](https://www.glfw.org/download.html) library and extracting that we get two parts usually , i.e includes and lib directory

- include directory has all the header files that we can use function that are in prebuilt binaries and the lib folder has those prebuilt binary, dynamic or static library

- not all library provide both but GLFW does provide both.

- So here we need compiler to point the function using header files and also point the linker to the library files and also tells our linker to add those.

- Going into Dependency folder inside the visual studio project folder , then GLFW and then lib folder :- there are 3 files

1. glfw3.dll - this basically is the dynamic link library

2. glfw3.lib - this is the static library and its size is also large

3. glfw3dll.lib - this is the static link library which comes with dll liibrary which we link to our program and it tells us where to find the dll definations.this static file contains all the link of functions in dll files so that we can directly link at compile time and we dont need to ask or search for each of the functions in DLL.

4. Right click and click properties in visual studio and then select c/c++ then general and select Additional Dependencies - _\$(SolutionDir)Dependencies\GLFW\include_ , just add this relative path to the include directory.

- we can use both " " or < > as here both are fine.

```c++
#include <iostream>
#include "GLFW/glfw3.h"

int main()
{
    int a = glfwInit();
    std::cout << "Hello World!\n";
}
```

Here if we comile we dont get any error but if we run we will get the linker error as the linker will not be able to find it.

So when we Build we get error.

- Right click and in properties go to linker and input and click on additional dependency.

- here we dont need to specify the whole path here just write _glfw3.lib_ , we can also give the directory complete as well but we will keep it clean here.

- so we need to somehow specify the location so now go to general in linker adn set additional library directory and add _\$(SolutionDir)Dependencies\GLFW\lib-vc2019;%(AdditionalLibraryDirectories)_

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

- Now this runs fine and print 1

# Now coming to DLL library

- Now we will be linking that dynamically

- Dyanmic linking is linking happens at runtime.

So lets see that in next section
