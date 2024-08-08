# Advent of Code 2023

Advent of Code is an annual event that provides a series of daily programming puzzles during the month of December.
Day 1: Calibration Values

## [Day 1](https://adventofcode.com/2023/day/1)

Each line of the document contains a calibration value, formed by combining the first and last digit on the line. Some digits are spelled out with letters (one, two, three, etc.). You need to find the real first and last digit on each line. For example:
```
two1nine → 29
eightwothree → 83
abcone2threexyz → 13
xtwone3four → 24
4nineeightseven2 → 42
zoneight234 → 14
7pqrstsixteen → 76
```
Sum these values to get the total calibration. For the given example, the sum is 281.

## [Day 2](https://adventofcode.com/2023/day/2)

You have several games recorded (your puzzle input). Each game is listed with its ID and a list of subsets of cubes revealed, for example:
```
Game 1: 3 blue, 4 red; 1 red, 2 green, 6 blue; 2 green
Game 2: 1 blue, 2 green; 3 green, 4 blue, 1 red; 1 green, 1 blue
Game 3: 8 green, 6 blue, 20 red; 5 blue, 4 red, 13 green; 5 green, 1 red
Game 4: 1 green, 3 red, 6 blue; 3 green, 6 red; 3 green, 15 blue, 14 red
Game 5: 6 red, 1 blue, 3 green; 2 blue, 1 red, 2 green
```
You need to determine which games would have been possible if the bag contained only 12 red cubes, 13 green cubes, and 14 blue cubes.

In this example, games 1, 2, and 5 are possible because the maximum number of cubes shown at any time does not exceed the bag's limits (12 red, 13 green, 14 blue). However, game 3 is impossible because 20 red cubes are shown, and game 4 is impossible because 15 blue cubes are shown at one point.

Sum the IDs of the possible games. For the given example, the sum of IDs of possible games is 8.
