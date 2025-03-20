section .data
    ; Define the string "Hello, World\n"
    msg db 'Hello, World', 0xA  ; 0xA is the newline character
    len equ $ - msg             ; Calculate the length of the string

section .text
    global _start               ; Entry point for the program

_start:
    ; System call for write (syscall number 1)
    mov rax, 1                  ; syscall number for write
    mov rdi, 1                  ; file descriptor (1 = stdout)
    mov rsi, msg                ; pointer to the string
    mov rdx, len                ; length of the string
    syscall                     ; invoke the system call

    ; System call for exit (syscall number 60)
    mov rax, 60                 ; syscall number for exit
    xor rdi, rdi                ; exit code 0
    syscall                     ; invoke the system call
