                global _inverse
                section .text

_inverse:       push rbp
                mov rdx,rsi
                shr rdx,1

                mov r8,rsi
                sub r8,1
                shl r8,3
                add r8,rdi

                mov rcx,0

while:          mov r9,[rdi]
                mov r10,[r8]
                mov [rdi],r10
                mov [r8],r9

                
                add rdi,8
                sub r8,8

                inc rcx
                cmp rcx,rdx
                jle while

end:            mov rax,[rdi]
                pop rbp
                ret