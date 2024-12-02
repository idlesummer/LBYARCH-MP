nasm -f win64 mco2.asm
gcc -c mco2.c -o mco2.obj
gcc mco2.obj mco2.obj -o mco2.exe
mco2.exe
