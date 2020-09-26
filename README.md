# Banknotes_project
primary algorithms usage in a programming project
Colorful banknotes

A banknote collector has N different banknotes. We know the color, the country of origin and the value of each banknote. The country names and the colors may only contain the letters of the English alphabet and the underscore character (“_”), their maximum length is 50 characters.
Write a program that determines the following:


1. The banknote with the smallest value.

2. A color that occurs in only one country’s banknotes.

3. The set of colors of banknotes.

4. The country from which there are banknotes in the most colors.

The first line of the standard input contains the number of banknotes (1≤N≤1000). In the next N*3 lines, there is a description of a banknote in every 3 lines: the country, the color, and the value (100≤Vi≤100000). There cannot be two banknotes with the same color from the same country.
Output
The standard output should contain a line with a single # character before the solution of each subtask. This # character line is followed by as many lines as needed for the output of a subtask. If you cannot solve a subtask, you should output only the line containing the # character. If the output format is not correct (less/more # characters are in the output), you will get “Output format error”, even if you have correct solutions for some subtasks.

Subtask 1 : A single line should contain the color and the country of the banknote with the smallest value, separated by a space. (If there are multiple possible answers, print the one that occurs first in the input.)

Subtask 2 : Print a color that occurs in only one country’s banknotes. (If there are multiple possible answers, print the one that occurs first in the input.) If there is no such color, then print the word NONE.

Subtask 3 : In the first line you should print the number of different colors (C). The next C lines should contain the names of the colors (in any order, each of them in a separate line).

Subtask 4 : Print the name of the country from which there are banknotes in the most colors. (If there are multiple possible answers, print the one that occurs first in the input.)
