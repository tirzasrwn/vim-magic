# motions

## About

Vim is renowned for its efficient and powerful motion commands, allowing users to navigate through text with remarkable speed and accuracy. Understanding and mastering these motions is crucial for becoming proficient in Vim.

## Basic Motions

- h, j, k, l: Navigate left, down, up, and right respectively.
- w, b: Move forward and backward by word.
- 0, ^ or \_, $: Move to the beginning of the line, first non-blank character, and end of the line.
- gg, G: Go to the beginning or end of the file.
- {, }: Move to the beginning or end of a paragraph.
- Ctrl-f, Ctrl-b: Scroll forward and backward one page.
- Ctrl-d, Ctrl-u: Scroll down and up half a page.
- f<char>, F<char>: Move forward and backward to the next occurrence of <char>.
- t<char>, T<char>: Move to the character before or after the next occurrence of <char>.
- \* or ;, # or ,: Search for the word under the cursor forward or backward.
- /pattern, ?pattern: Search forward or backward for the specified pattern. n, N for navigate.
- .: Repeat the last change.
- N<command>: Repeat a command N times. Example 5j: Move the cursor down 5 lines.
