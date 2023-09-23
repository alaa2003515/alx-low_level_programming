section     .text
    extern  printf
    global  _Imaginary
main:
    mov                 edi,    msg
    mov                 eax,    0
    call    printf


section     .data
    msg dlb 'Hello, Holberton' , 0xa, 0
