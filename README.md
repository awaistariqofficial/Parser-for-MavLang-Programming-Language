<img width="1536" height="1024" alt="parser" src="https://github.com/user-attachments/assets/7dd37718-7700-488e-8d3d-5cdb2c886034" />

Parser for MavLang Programming Language

This repository contains the syntax analyzer (parser) for MavLang, a custom educational programming language designed as part of a Compiler Construction course project. The parser represents Phase 02 of the project and is responsible for validating the grammatical structure of programs written in MavLang.

The parser is implemented using Bison (YACC) and is tightly integrated with the Phase 01 lexical analyzer developed using Flex. All keywords, operators, and punctuations defined during lexical analysis are reused without modification, ensuring consistency between the scanner and the parser. This strict dependency reflects real-world compiler front-end design principles.

MavLang follows a block-structured, keyword-driven syntax with clearly defined rules for program flow. The grammar supports essential programming constructs, including program initialization, variable declarations, assignment statements, conditional statements, and output operations. A context-free grammar (CFG) is designed to represent these constructs, enabling deterministic parsing and clear syntax validation.

The parser reports meaningful syntax errors by indicating the line number and the token where the error occurs, helping identify invalid program structures during parsing. When a program follows all grammar rules correctly, the parser confirms successful syntax analysis.

This project demonstrates fundamental concepts of compiler design such as grammar formulation, FIRST and FOLLOW set analysis, parse tree construction, and integration of lexical and syntax analysis phases. It is intended for academic learning and practical understanding of how programming languages are parsed at the syntax level.

Technologies Used

Flex – Lexical Analysis

Bison (YACC) – Syntax Analysis

C (GCC) – Compilation and Execution

This repository serves as a complete and functional example of a custom language parser and is suitable for educational use and compiler design demonstrations.
