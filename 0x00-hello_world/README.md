# hello worldp
`gcc -E $CFILE -o c` --> command to run C file through the preprocessor and save the outpu t into another file
 
 
`gcc -c $CFILE -o ${CFILE::-1}o` --> command to compile C file without linking it
 
`gcc -S $CFILE -o ${CFILE::-1}s` --> command to compile C file to generate the assembly code without assembling
 
