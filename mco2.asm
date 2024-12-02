section .text
bits 64
default rel
global saxpy
saxpy:
    
    ;for ecx, 0, dword [n]
    xor r10, r10
    .for:
    cmp r10, rcx
    jge .endfor        
        movss xmm1, dword [rdx + r10 * 4]
        mulss xmm1, xmm0
        movss xmm2, dword [r8 + r10 * 4]
        addss xmm1, xmm2
        movss dword [r9 + r10 * 4], xmm1
    inc r10
    jmp .for
    .endfor:

    ret