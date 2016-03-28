Spec "Editor Functionality"
===========================

(c) IKA, Last update: 28.03.2016

Navigation / Selection
----------------------
* Move cursor (with optional search and selection at the same time)
- left, right, up, down
- next/previous element
- next/previous search result
- specific line
- start/end of text
- source code tag
- bookmark
- compilation/syntax/spellcheck error
- same element elsewhere (e.g. declaration, reference, etc.)
- by specifying explicitly marked targets, as in EasyMotion
* Select
- current element
- upstream element
- search results
* Between files
- include-file associated with given file
- open file under cursor

Text view
---------
* Whole text overview (bird-eye view)
* Split window and scroll synchronously
* Define a region and blend out everything else
* Line wrap
* Outlining / folding (multilevel, based on regexp/marker)
* Preview a fold by hovering
* Hide/blend-out specific elements or regexp matches
* Show text in hex
* Position text in window (e.g. center line with cursor)
* Show line numbers (absolute and relative)
* Show element-under-cursor info (e.g. Unicode point and syntax type)
* Color nested parenthesis
* Syntax hiliting
* Change fonts & colors (with theme support)
* Zoom in/out
* View whitespace
* Full-screen
* Alway on top with transparent background


Text generation
---------------
* Type Unicode points
* Type text via trigraphs or abbreviations
* Create a list of successive numbers
* Enclose an element or selection with a given character (e.g. make a comment)
* Copy previous/next line
* Copy character from previous/next line
* Comment out a block of text
* In a selected list of words - enclose each word in a character (e.g. "")
* In a selected list of words - add/remove/change inter-word separator
* Automatic/Manual templates - insert before/after cursor, next/prev elem, next/prev line
* Paste text from the clipboard performing changes/expansion (e.g. converting entity to component in VHDL)
* Open blank lines
* ASCII art and boxes


Text editing
------------
* Undo/redo tree
* Cut/copy/paste in line/column mode with multiple clipboard lines
* Replace selected text in line/column mode with clipboard or generated text
* Replace all occurrences of the element under cursor
* Replace regexp with a lambda generating function
* Transpose elements
* Change case of elements
* Change encoding
* Change line endings
* Remove whitespace
* (Un)tabify
* Compress (thaw) blank lines and other whitespace
* Syntax-based format
* Indent/outdent line or selection
* Paragraph reflow
* Paragraph alignment/indentation
* Spell-check
* Refactor - rename, convert to a function, etc.
* Align a lign to a column
* Align different elements of a line (or group of lines) to specific columns
* Align different elements of a line to the same elements of the previous/next line
* Align different elements of lines in a group
* Join/split lines


Context assistance
------------------
* Show help/declaration for an API / element
* Word/API completion

Utilities
---------
* Last command repetition
* Macro recording and execution (with params)
* Execute shell command
* Interface to compilation system
* Interface to SCM system
* Sort
* Browse files
* Rename files
* Open file in official viewer
* Send text to shell for execution
* Registers for storing cursor positions, text, macros
