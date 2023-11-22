section .data
    hello db 'Hello, World', 0xa  ; String to be printed, 0xa is the newline character
section .text
    global _start
_start:
    ; Write the string to the standard output
    mov rax, 1         ; System call number for sys_write
    mov rdi, 1         ; File descriptor 1 is stdout
    mov rsi, hello     ; Pointer to the string
    mov rdx, 13        ; Length of the string
    syscall
    ; Exit the program
    mov rax, 60        ; System call number for sys_exit
    xor rdi, rdi       ; Exit code 0
    syscall
