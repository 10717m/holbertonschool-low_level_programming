section .data
msg db 'Hello, World', 10   ; 'Hello, World' followed by newline (ASCII 10)
len equ $ - msg             ; Calculate the length of the message

section .text
global _start

_start:
; Syscall: write(1, msg, len)
mov rax, 1      ; syscall number for write (1)
mov rdi, 1      ; file descriptor (1 = stdout)
mov rsi, msg    ; pointer to message
mov rdx, len    ; message length
syscall         ; invoke syscall

; Syscall: exit(0)
mov rax, 60     ; syscall number for exit (60)
mov rdi, 0      ; exit status (0 = success)
syscall         ; invoke syscall
