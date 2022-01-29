;;    boot.asm
;;
;;    dnablaOS / Rewrite
;;        (c) atdelta

;nasm directive - 32 bit
bits 32
section .text
        ;multiboot spec
        align 4
        dd 0x1BADB002            ;magical numbers
        dd 0x00                  ;flags
        dd - (0x1BADB002 + 0x00) ;checksum. mn+f+cs should equal 0

global start
extern kmain	        ;kmain is in EXTERNal file

start:
  cli 			;blocking interrupts
  mov esp, stack_space	;stack indicator
  call kmain
  hlt		 	;stopping cpu

section .bss
resb 8192		;8KB/stack
stack_space: