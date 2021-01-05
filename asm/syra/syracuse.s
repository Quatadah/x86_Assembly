            global _syra
            section .text

_syra:  mov rax,0
            mov rbx,rdi

looop:      cmp rbx,1
            je end
            mov rcx,rbx
            and rcx,1
            cmp rcx,1
            je impair
            jmp pair


pair:       shr rbx,1
            add rax,1
            jmp looop

impair:     mov rdx,rbx
            add rdx,rbx
            add rdx,rbx
            add rdx,1
            mov rbx,rdx
            add rax,1
            jmp looop


end:        ret