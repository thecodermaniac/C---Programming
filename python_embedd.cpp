#include <iostream>
#include "C:\Python39\libs"

int main(int argc, char const *argv[])
{
    Py_Initialize();
    PyRun_SimpleString("from time import time,ctime\n"
                       "print('Today is',ctime(time()))\n");
    return 0;
}
{
	"resource": "/c:/Users/sasuk/Documents/C++ Programming/python_embedd.cpp",
	"owner": "C/C++",
	"code": "1696",
	"severity": 8,
	"message": "#include errors detected. Please update your includePath. Squiggles are disabled for this translation unit (C:\\Users\\sasuk\\Documents\\C++ Programming\\python_embedd.cpp).",
	"source": "C/C++",
	"startLineNumber": 2,
	"startColumn": 1,
	"endLineNumber": 2,
	"endColumn": 28
}