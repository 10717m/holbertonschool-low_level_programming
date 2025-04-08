section .data
    msg db 'Hello, World', 10   ; Message + newline (ASCII 10)
    len equ $ - msg             ; Length calculation

section .text
    global _start

_start:
    ; write(1, msg, len)
    mov rax, 1      ; syscall: write
    mov rdi, 1      ; fd: stdout
    mov rsi, msg    ; buffer
    mov rdx, len    ; length
    syscall

    ; exit(0)
    mov rax, 60     ; syscall: exit
    xor rdi, rdi    ; status: 0
    syscall
