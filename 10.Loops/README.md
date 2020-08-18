# loops in c++

```c++
#include<iostream>

int main()
{
	for (int i = 0; i < 5; i++)
	{
		std::cout << "HELLO WORLD" << std::endl;
	}
	return 0;
}
```

1. First declaration happens
2. Then we check the condition
3. Move to body and run
4. THen go to increment/change
5. Move again to checking

...THis moves on

## WHILE LOOP

```c++
#include<iostream>

int main()
{
	for (int i = 0; i < 5; i++)
	{
		std::cout << "HELLO WORLD" << std::endl;
	}
	int i = 0;
	while (i < 5)
	{
		std::cout << "HELLO WORLD" << std::endl;
		i++;
	}
	return 0;
}
```

# Control FLow statements

1. continue
2. break
3. return

**Continue** :- This basically tells to move to next iteration if there is one else go out of loop.

**break** :- get out of loop

**return** :- return a value and exit
