# macros

## About

Vim macros are a powerful feature that allows you to record a sequence of commands and play them back, automating repetitive tasks. Understanding how to create and use macros is essential for maximizing productivity in Vim.

## Recording Macros

1. q<register>
   Description: Start recording a macro into register <register>.
   Usage: q<register>
2. q
   Description: Stop recording the macro.
   Usage: q

## Executing Macros

1. @<register>
   Description: Execute the macro stored in register <register>.
   Usage: @<register>
2. @@
   Description: Repeat the last executed macro.
   Usage: @@

## Exaples

### Copy Line, Paste, and Increment Number

1. Record Macro:
   qayyp<c-a>q: Record a macro in register 'a' to yank a line, paste, and increment the number.

2. Execute Macro:
   @a: Execute the 'a' macro.

```txt
test 1 test
test 2 test
test 3 test
```
