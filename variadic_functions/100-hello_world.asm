section .data
    msg db "Hello world",10      ; 10 is the ASCII code for a new line (LF)

global main

section .text

main:
    mov rax, 1
    mov rdi, 1
    mov rsi, msg
    mov rdx, 13
    syscall
    
    mov rax, 60
    mov rdi, 0
    syscall
