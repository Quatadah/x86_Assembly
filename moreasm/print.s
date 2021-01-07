                extern printf                
                global _print
                
                section .data
buffer:         db "the value is %d",10,0

                section .text

_print:         push rbp
                mov rsi,rdi
                mov rdi,buffer
                call printf
                pop rbp
                ret


