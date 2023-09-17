# Tlang!
- Tlang is very experimental and everything is subject to change everywhere. I made the tlang compiler as a test so that I can then port my original TheLanguage codebase into C. the future of tlang is in Arabic.
Visit https://rainboi64.github.com/TheLanguage for more info.

tlang is a simple scripting language made for fun in lazy afternoon when I was looking for my yearly dose of C programming, tlang is a strongly typed, object oriented, just-in-time compiled, programming language that's 3 times faster than python!
tlang is under 3000 lines of code of pure C, meaning that it's incredibly lightweight and can be easily integrated into existing C codebases. The language features a concise syntax and an intuitive object-oriented model.
tlang has a built-in garbage collector, supports first-class functions, and has a standard library.

visit https://tlang.doocs.app/ for more info!

In tlang, you can print "Hello World!" with just one line of code using the print command.
```
print "Hello World!";
```

this is a simple Fibonacci stress test program made in tlang 
```
fn fib(n) {
  if (n < 2) return n;
  return fib(n - 2) + fib(n - 1);
}

let start = clock();
print fib(35);
print clock() - start;
```
this is another example of using tlang for calculating the factorial of a number using a recursive function:
```
fn factorial(n) {
	if (n < 2) return 1;
	return n * factorial(n - 1);
}
```

# Running a tlang program
to run a tlang program simply use tlang file.tl or you can use the repl to quickly test out code snippets and experiment with the language's features.
# Language Features
### Declaring Functions
To declare a function in tlang, use the fn keyword followed by the function name and its parameters in parentheses, then use curly braces to enclose the function body.
```
fn eatBagels() {
	print "A bagel was consumed!";
}
```

### Declaring Variables 
to declare a variable in tlang, use the let keyword followed by the variable name, an optional type declaration, and an assignment operator with an initial value.
```
let name = "Yaman";
let dinner = "lasangia";
let beverage = "soda";
print name + " ate " + dinner + " and drank " + beverage;
```

To add conditional logic in tlang, use the if statement followed by a boolean expression inside parentheses, and then curly braces to define the code block that should execute if the condition is true.
```
if ((condition) and (anotherCondition or thisCondition))
{
	// do something
}
```

### While Loops
To create a looping structure in tlang, use the while keyword followed by a boolean expression inside parentheses, and then curly braces to define the code block that should keep executing while the expression is true.
```
while (condition)
{
	// do something
}
```
### For loops
To iterate over a specified range of values in tlang, use the for keyword followed by an assignment, then a condition.
```
for (let x = 0; x < 10; x = x + 1)
{
	print x;
}
```

