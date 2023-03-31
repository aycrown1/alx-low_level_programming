section .data
    message db "Hello, Holberton", 0x0A, 0

section .text
    global main

    extern printf

main:
    push rbp
    mov rbp, rsp

    lea rdi, [message]
    mov rax, 0
    call printf

    mov rsp, rbp
    pop rbp
    mov rax, 0
    ret

