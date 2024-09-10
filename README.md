# DSA Repository

This repository contains solutions to various Data Structures and Algorithms (DSA) problems, organized by topics and difficulty levels. Each topic folder includes relevant exercises, homework assignments, and example codes to help reinforce key concepts.


## Folder Structure

The repository is structured by topic, with each topic having its own folder. Each folder contains:

- **Homework Assignments**: Exercises designed to help you practice and understand each concept thoroughly.
- **Example Programs**: Sample C++ programs demonstrating the implementation of specific algorithms and data structures.


## Topics Covered

1. **Flowchart and Pseudocode**  
   Basic introduction to flowcharting and pseudocoding for problem-solving and algorithm design. Includes examples like calculating simple interest, finding the maximum of two numbers, checking driving license eligibility, etc.

2. **Variables, Datatypes, and Operators**  
   Explanation of different data types, variables, and various operators in C++. Examples include using conditional and logical operators, unary operators, and type conversion.

3. **Conditional Statements and Loops**  
   Understanding decision-making constructs (like `if-else`, `switch`) and loops (`for`, `while`, `do-while`). Examples cover finding sums, checking prime numbers, etc.

4. **Patterns**  
   Covers a wide variety of pattern-based problems, such as square, triangle, and pyramid patterns, to enhance logic-building and iteration skills.

5. **Functions**  
   Introduction to functions, their usage, and best practices for modular programming. (To be updated)

## Compile C++ Files with a Custom Command

To simplify the process of compiling and running C++ files, you can create a custom command (alias or function) on both Windows and Linux systems. Follow the instructions below to set up the custom command for your environment.

### For Linux

1. **Open Your Shell Configuration File:**

   Depending on the shell you are using (`bash` or `zsh`), open the corresponding configuration file:

   ```bash
   nano ~/.bashrc  # For Bash, but for Zsh nano ~/.zshrc
   ```

2. **Add the Custom Function:**

   Append the following function definition to the end of the file:

   ```bash
   cpp() {
     if [ -z "$1" ]; then
       echo "Usage: cpp <file_name.cpp>"
       return 1
     fi

     # Get the base name of the file without the extension
     base_name="${1%.cpp}"

     # Compile the file using g++
     g++ "$1" -o "$base_name.out" && ./"$base_name.out" && rm "$base_name.out" 
   }
   ```

3. **Apply the Changes:**

   Save the file and apply the changes by running:

   ```bash
   source ~/.bashrc  # or source ~/.zshrc for Zsh
   ```

4. **Use the Custom Command:**

   Now you can use your new `cpp` command to compile and run a C++ file:

   ```bash
   cpp test.cpp
   ```

### For Windows (PowerShell)

1. **Open PowerShell Profile:**

   To create a custom function in PowerShell, open your PowerShell profile file:

   ```powershell
   if (!(Test-Path -Path $PROFILE)) {
       New-Item -ItemType File -Path $PROFILE -Force
   }
   ```

2. **Edit the Profile:**

   Open the profile file in Notepad:

   ```powershell
   notepad $PROFILE
   ```

3. **Add the Custom Function:**

   Add the following function definition to the profile file:

   ```powershell
   function cpp {
       param (
           [string]$fileName
       )

       if (-not $fileName) {
           Write-Host "Usage: cpp <file_name.cpp>"
           return
       }

       # Get the base name of the file without the extension
       $baseName = [System.IO.Path]::GetFileNameWithoutExtension($fileName)

       # Compile the C++ file using g++
       g++ $fileName -o "$baseName.exe"

       # Check if compilation succeeded
       if ($LASTEXITCODE -eq 0) {
           # Run the executable
           .\${baseName}.exe

           # Optionally, delete the executable after running
           Remove-Item "${baseName}.exe"
       } else {
           Write-Host "Compilation failed."
       }
   }
   ```

4. **Save and Reload the Profile:**

   Save the file and reload the profile in PowerShell:

   ```powershell
   . $PROFILE
   ```

5. **Use the Custom Command:**

   Now you can use the `cpp` command in PowerShell to compile and run a C++ file:

   ```powershell
   cpp test.cpp
   ```

## License

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.

## Contributing

Feel free to contribute to this repository by opening pull requests or raising issues.

Happy coding!
