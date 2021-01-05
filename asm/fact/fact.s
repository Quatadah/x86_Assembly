            global _fact
            section .text

_fact:      
            mov rax,rdi
            cmp rax,0
            je end
            mov rbx,rdi
            sub rbx,1

looop:      cmp rbx,0
            je end
            mul rbx
            dec rbx
            jmp looop

end:        ret