	.file	"char_ascii.c"
	.section	.rodata
.LC0:
	.string	"%d\n"
.LC1:
	.string	"%c\n"
	.text
	.globl	main
	.type	main, @function
main:
.LFB0:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	andl	$-16, %esp
	subl	$16, %esp
	movl	$.LC0, %eax
	movl	$65, 4(%esp)
	movl	%eax, (%esp)
	call	printf
	movl	$.LC1, %eax
	movl	$65, 4(%esp)
	movl	%eax, (%esp)
	call	printf
	movl	$.LC1, %eax
	movl	$65, 4(%esp)
	movl	%eax, (%esp)
	call	printf
	movl	$0, %eax
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
.LFE0:
	.size	main, .-main
	.ident	"GCC: (Ubuntu/Linaro 4.6.3-1ubuntu5) 4.6.3"
	.section	.note.GNU-stack,"",@progbits
