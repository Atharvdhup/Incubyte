# Chandrayaan 3 Lunar Craft Control Program

Welcome to the Chandrayaan 3 Lunar Craft Control Program repository! This program allows you to control the Chandrayaan 3 lunar spacecraft using a series of commands. The spacecraft navigates through the galaxy using galactic coordinates (x, y, z) and follows a set of movement and rotation commands to reach its final destination.

## Problem Statement

As a scientist at ISRO controlling Chandrayaan 3, your task is to create a program that translates commands sent from Earth into instructions understood by the spacecraft. The spacecraft's initial position (x, y, z) and direction (N, S, E, W, Up, Down) are provided. You need to implement the following functionalities:

- Move the spacecraft forward/backward (f, b): The spacecraft moves one step forward or backward based on its current direction.
- Turn the spacecraft left/right (l, r): The spacecraft rotates 90 degrees to the left or right, changing its facing direction.
- Turn the spacecraft up/down (u, d): The spacecraft changes its angle, rotating upwards or downwards.

## Example

Given the starting point (0, 0, 0) with the initial direction N and the following commands:

```cpp
["f", "r", "u", "b", "l"]
```

The spacecraft's position and direction change as follows:

- "f" - (0, 1, 0) - N
- "r" - (0, 1, 0) - E
- "u" - (0, 1, 0) - U
- "b" - (0, 1, -1) - U
- "l" - (0, 1, -1) - N

Final Position: (0, 1, -1)

Final Direction: N

## Requirements

- The spacecraft's initial direction (N, S, E, W, Up, Down) represents the reference frame for movement and rotation.
- The spacecraft cannot move or rotate diagonally; it can only move in the direction it is currently facing.
- Assume that the spacecraft’s movement and rotations are rigid, and it cannot move beyond the galactic boundaries.

## Usage

1. Clone this repository to your local machine:

   ```shell
   git clone <repository-url>
   ```

2. Navigate to the repository directory:

   ```shell
   cd <repository-directory>
   ```

3. Compile the code using your C++ compiler:

   ```shell
   g++ -o spacecraft_control spacecraft_control.cpp
   ```

4. Run the program:

   ```shell
   ./spacecraft_control
   ```

Input a sequence of commands when prompted, and the program will display the spacecraft's position and direction after each command, as well as the final position and direction.

## Guidelines

- Follow Test-Driven Development (TDD) practices throughout this assessment.
- Take an incremental approach and demonstrate it in your commits.
- Keep your code clean, readable, and modularized.
- Do not throw exceptions or handle cases for invalid arguments.

## Contributing

If you would like to contribute to this project, feel free to fork the repository and submit pull requests with your improvements.

## License

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.

## Acknowledgments

Thank you for your contribution to the Chandrayaan 3 lunar spacecraft control program! If you have any questions or feedback, please don't hesitate to reach out.
