            section .text
            global _plusone

_plusone:   
            mov rax,rdi
            inc rax
            ret

