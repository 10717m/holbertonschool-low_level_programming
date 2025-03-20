section .data
hello db 'Hello, World', 0xA  ; 'Hello, World' followed by a newline (0xA)

section .text
global _start

_start:
; Write the string to stdout
mov rax, 1              ; syscall number for write
mov rdi, 1              ; file descriptor 1 (stdout)
mov rsi, hello          ; pointer to the string
mov rdx, 13             ; length of the string (12 characters + 1 newline)
syscall                 ; invoke the system call

; Exit the program
mov rax, 60             ; syscall number for exit
xor rdi, rdi            ; exit code 0
syscall                 ; invoke the system call
