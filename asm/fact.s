            global _fact
            section .text

_fact:      
            cmp rdi,0
            je case0
            mov rax,rdi
            mov rbx,rdi
            sub rbx,1

looop:      cmp rbx,0
            je end
            mul rbx
            dec rbx

end:        ret

case0:      mov rax,1
            ret