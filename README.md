# dnablaOS
## Mini Description
Small OS written on NASM (on YASM) + C
## Full Description
dnablaOS - small OS written on NASM (on YASM) and C.

ASM is need only for bootloader, whole kernel written on C.
## Downloading
### Compiling yourself
Clone repo and insert following commands.
```sh
yasm -f elf32 boot.asm -o boot.o
```
```sh
gcc -m32 -c kernel.c -o kernel.o
```
```sh
ld -m elf_i386 -T link.ld -o kernel boot.o kernel.o
```
### Already built.
Click on releases and download latest `kernel`

## To-Do
- [x] Something works.
- [ ] Basic commands.