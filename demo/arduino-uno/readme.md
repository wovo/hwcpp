These directories contain demos for the Arduino Uno board.

Some of these demos are used by the documentation.

The makefile.link is included by the makefiles in the demo subdirectories;
it calls the makefile.link one step up in the directory chain.

The update_codelite_workspace.bat calls bmptk to create (or update) a CodeLite
workspace file that contains a project for each subdirectory.
