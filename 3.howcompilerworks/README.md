# How c++ Compiler works

Text form to an actualy binary takes two approach

1. Compiling - obj files
2. linking - binary

Steps in compiler

1. Preprocessing
2. Converting english language to what compiler can understand
3. Convert to constant data or instructions(tree)
4. Now it can generate machine code which machine can understand.

We are using the same hello world old program

The compiler treats the files according to the extension

.c - c file
.cpp - c++ file
.h - header

But these can be changed.

## #include - preprocessor just copies where we have include that statement

(copy means exact copy and paste)

Preprocessed code can be seen by going into properties of the project and going into preprocessor and selecting preprocess to a file as yes -- this will produce a <b>.i</b> preprocessed file

<b>Math.i</b>

<h2>#define INTEGER int </h2>

Here this #define statement basically searches for all INTEGER in the program and replaces it to int

Note : We can use any name here it dosent matter it will replae it in the linked file

<h2>#if INTEGER int </h2>

#if 0
Whatever code we write here the compiler will ignore that in the preprocessor and leave this as an empty
#endif

<b>Now we can move to the compiling after preprocessor</b>

If we open the compiled object files then it will be all 0s and 1s so to open it in some readable form we should use assembly language in visual studio ouput property.

There we can see the .asm file which is almost readable.
