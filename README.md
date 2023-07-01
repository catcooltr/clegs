# 🤓 `clegs`

Learn C a là rustlings!

## Installation

I highly, highly recommend working through these C tutorials "in the cloud" through GitHub Codespaces. 
This service is free for (at the time of writing) up to 60 hours per month. Working through these
exercises in a GitHub Codespace allows you to work in a Linux environment with **all** debugging 
tools and compilers automatically installed. This removes potential pain paints when compiling
these programs on different operating systems. Codespaces help you focus on learning C, *not*
debugging operating-system-specific issues. 

To use a GitHub Codespace, you'll need a GitHub account. Then...

1. Fork this repository using the "fork" button at the top-right of the repository's webpage.
2. Click the green "Code" button, then select a Codespace.
    - You can run this Codespace in your browser, or in your Visual Studio Code installation
      on your computer using the GitHub Codespaces extension.

## Usage

It would be so cool to have an automated script (like `rustlings`) that guides each student 
through the exercises, and offers help along the way. Unfortunately, **that script does not 
exist yet!** Honestly, it may never exist. That's okay --- VSCode offers a pretty 
user-friendly debugging experience. I recommend using Visual Studio Code with the C/C++ 
Extension Pack, and "running" the programs under [`/exercises`](/exercises/) that you're 
most interested in. All program files are grouped by core concept, and each file's name 
describes the specific content it explores.

Want to work through all of them? I recommend working through the exercises in the following order.

## Exercises

### Primitive Types

- [ ] [`integers.c`](/exercises/primitives/integers.c)
- [ ] [`floats.c`](/exercises/primitives/floats.c)

### User Types (Structures)

- [ ] [`structures.c`](/exercises/structs/structures.c)
- [ ] [`unions.c`](/exersises/structs/unions.c)

### Arrays 

- [ ] [`general.c`](/exercises/arrays/general.c)
- [ ] [`characters.c`](/exercises/arrays/characters.c)

### Pointers

- [ ] [`arrays.c`](/exercises/pointers/arrays.c)
- [ ] [`arguments.c`](/exersises/pointers/arguments.c)
- [ ] [`double.c`](/exercises/pointers/double.c)

### Memory

- [ ] [`stack.c`](/exercises/memory/stack.c)
- [ ] [`heap.c`](/exercises/memory/heap.c)
- [ ] [`pointers.c`](/exercises/memory/pointers.c)
- [ ] [`unbounded.c`](/exercises/memory/unbounded.c)

### Strings

- [ ] [`terminator.c`](/exercises/strings/terminator.c)
- [ ] [`builtin.c`](/exercises/strings/builtin.c)
- [ ] [`safety.c`](/exercises/strings/safety.c)

### Streams

- [ ] [`printf.c`](/exercises/streams/printf.c)
- [ ] [`standard.c`](/exercises/streams/standard.c)
- [ ] [`redirection.c`](/exercises/streams/redirection.c)
- [ ] [`files.c`](/exercises/streams/files.c)

### Applications

- [ ] [`sorting.c`](/exercises/applications/sorting.c)
- [ ] [`faults.c`](/exercises/applications/faults.c)
- [ ] [`maps.c`](/exercises/applications/maps.c)
