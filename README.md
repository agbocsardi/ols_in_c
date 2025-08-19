# OLS Regression in C

## Motivation

I have always been a decent programmer among peers. Coming from math and data science I learned Python and R the purely procedural way: here's an algorithm, now make the computer do it. 

This carried me quite far! However, there comes a point where procedural programming in Jupyper notebooks breaks down. I started working with bigger and bigger codebases, repetition became a problem, coding styles started to matter more, and soon I found myself down the rabbit hole of software engineering best practices.

And while cosplaying as an engineer with my fancy setup is fun, where the rubber hits the road is the actual problems you solve. I wanted to step into the world of low-level languages to learn more about the way the computer works, just as using the terminal taught me more about how an OS works.

I picked C to start out with because of [my philosophy of preferring "boring old tech" over shiny new toys](https://youtu.be/n_awKyEm7W4), and even if I end up going for a different language in the future (Rust does seem very appealing with their pretty errors and nice tooling), I think I will appreciate it more if I experience C first-hand before.

I am also a firm believer in learning by doing, so this little toy project is the result of that. As an empirical researcher regressions are very much our bread and butter, so implementing one feels fitting. I also plan on using no external libraries or tools, to really lean into the depths.

## Goals

I want to create a text-based OLS Regression application that does three main things:
1. reads a `CSV` file the user specified,
2. allows the user to specify a formula,
3. and returns a nice regression table as output.

I will elaborate on each step below.

### Reading the data

- [] Get file path from user, and read file contents
- [] Parse it into a suitable data format <!-- TODO: research what this would be in C -->
- [] Returning the column names and data types to the user (tho I don't intend to get into categoritcal/binary/etc)


### Formula specification

- [] Print out an example formula for the user
- [] Receive and validate user-specified formula
- [] Parse it into equation for OLS


### Fit OLS model

- [] Based on the specification, update the weights in my equation based on OLS principles
- [] Return nice regression table summary


## Notes

Compile and run the code with: 
```sh
gcc -Wall -I/opt/homebrew/include -c main.c && ./main
```
