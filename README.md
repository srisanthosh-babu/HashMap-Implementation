# HashMap Implementation in C

This project implements a simple hash map in C using separate chaining to handle collisions. It provides basic operations such as creating the map, inserting key-value pairs, removing entries, checking whether a key exists, displaying the contents, and freeing memory.

## Features

- Create a hash map
- Insert key-value pairs
- Remove entries by key
- Check whether a key already exists
- Display all stored entries
- Clean up allocated memory

## Project Files

- `hashMap.c` - Contains the hash map implementation
- `header.h` - Defines the node structure, hash map structure, and function prototypes
- `main.c` - Demonstrates basic usage of the hash map

## Build and Run

Compile the program with:

```bash
gcc main.c hashMap.c -o program
```

Run it with:

```bash
./program
```

On Windows, you can also run the generated executable:

```bash
program.exe
```

## Example Behavior

The sample driver inserts a few key-value pairs, displays them, removes some entries, and then clears the memory.
