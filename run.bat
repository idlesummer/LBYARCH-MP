nasm -f win64 asm_mco2.asm
gcc -c c_mco2.c -o c_mco2.obj -m64
gcc c_mco2.obj asm_mco2.obj -o c_mco2.exe -m64
c_mco2.exe
