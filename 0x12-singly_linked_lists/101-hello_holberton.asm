comment: db "Hello, Holberton",
    format: db "%s", 0
    global main

main:
    push rbp
    mov rbp, rsp

    mov rdi, format ;
    mov rsi, message ;
    mov rax, 0 ;
    call printf

    mov rax, 0 ; return 0
    pop rbp
    ret
