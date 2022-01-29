#
#           POWER FUNCTION
#           ---------------
#EAX - BASE
#EDI - EXP
# 2 * 2 * 2 * 2 * 2 = 2^5

.section .data


.section .text

    .globl _WinMain 

        _WinMain:
                movl $1, %ebx
                pushl $2
                pushl $5
                call _powr
                jmp _eof

                _powr:
                    pushl %ebp
                    movl  %esp, %ebp
                    subl  $4, %esp
                    movl 8(%ebp),%edi
                    movl 12(%ebp) , %eax
                    call powr_loop
                    movl %ebp, %esp
                    popl %ebp
                    ret;


                powr_loop:
                    cmp $0,%edi
                    je _return
                    #ebx = ebx * eax
                    imull %eax,%ebx
                    decl %edi
                    jmp powr_loop

                _return:
                    ret
                _eof:
                    call _exit
