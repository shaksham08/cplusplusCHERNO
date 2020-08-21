# Enums

This is Enumration

Is a way to give names to a value

We can also define set of values

At the end enum is just .

If we want something to be initialized to particular thing only;

```c++
#include <iostream>

enum Example
{
    A,B,C
};



int main()
{
    Example value = A;

    if (value == B)
    {

    }

    std::cout << "Hello World!\n";
}
```

Here by default the value will start from 0 so A=0,B=1,C=2

To specify your own values we can assig

```c++
#include <iostream>

enum Example : char
{
    A=0,B=2,C=6
};



int main()
{
    Example value = A;

    if (value == B)
    {

    }

    std::cout << "Hello World!\n";
}
```

We can use this in out log class which we made before.

```c++


#include <iostream>

class Log {
public:
    enum Level {
        LError=0,LWarning,LInfo
    };
    const int LogLevelError = 0;
    const int LogLevelWarning = 1;
    const int LogLevelInfo = 2;
private:
    Level m_LogLevel = LInfo;
public:
    void SetLevel(Level level)
    {
        m_LogLevel = level;
    }
    void Warn(const char* message)
    {
        if(m_LogLevel>= LWarning)
            std::cout <<"[Warning]: "<< message << std::endl;
    }
    void Error(const char* message)
    {
        if (m_LogLevel >= LError)
            std::cout << "[Error]: " << message << std::endl;
    }
    void Info(const char* message)
    {
        if (m_LogLevel >= LInfo)
            std::cout << "[Info]: " << message << std::endl;
    }
};

int main()
{
    Log log;
    log.SetLevel(Log::LInfo);
    log.Warn("This is a warning");
    log.Error("This is a error") ;
    log.Info("This is a Info");
    return 0;
}
```
