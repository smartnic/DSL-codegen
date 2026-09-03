### executed

for generating parser

```
java -cp /home/kunal/Documents/antlr-4.13.2-complete org.antlr.v4.Tool /home/kunal/Documents/grammar/hello.g4 -Dlanguage=Cpp
```

for creating parse tree

```
g++ -std=c++17     
    main.cpp     
    helloLexer.cpp     
    helloParser.cpp     
    helloListener.cpp     
    helloBaseListener.cpp     
    -I/home/kunal/Documents/antlr4-cpp-runtime-4.13.2-source/runtime/src     
    -L/home/kunal/Documents/antlr4-cpp-runtime-4.13.2-source/runtime
    -lantlr4-runtime     
    -o testHello
```
