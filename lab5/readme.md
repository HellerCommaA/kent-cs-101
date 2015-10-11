
http://vega.cs.kent.edu/~mikhail/classes/csi/Labs/Lab5/

Create a project titled Lab5_Figures. This project shall contain multiple files. Write a program that repeatedly asks the user to select either square, left or right triangle, then inputs the figure size and then prints the appropriate shape in stars. For square, the program should ask whether the user wants a filled or a hollow square. The program should quit if the user inputs an invalid option. See an example dialog below:
1. square
2. bottom left triangle
3. top right triangle
select figure: 1
select size: 4
filled or hollow [f/h]: h
****
*  *
*  *
****
1. square
2. bottom left triangle
3. top right triangle
...
You can reuse your code from the Looping lab. Place the star-printing code in four separate functions: filledSquare, hollowSquare, leftTriangle and rightTriangle. Each function should accept a single integer parameter - the size of the figure and return no value (be a void-function). Create three separate files figures.cpp, figures.h, and figuresInput.cpp. Place the triangle and square function definitions in figures.cpp and their prototypes in figures.h. Make sure that the header file is protected against multiple inclusion. Place the main function in figuresInput.cpp
