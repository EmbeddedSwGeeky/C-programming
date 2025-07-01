	.file	"4_fets_implementation.c"
	.section	.rodata
.LC0:
	.string	"%c"
.LC1:
	.string	"i = %d\n"
	.text
	.globl	get_string
	.type	get_string, @function
get_string:
.LFB0:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	subl	$40, %esp
	movl	$0, -12(%ebp)
	jmp	.L2
.L5:
	movl	-12(%ebp), %eax
	movl	%eax, %edx
	addl	8(%ebp), %edx
	movl	$.LC0, %eax
	movl	%edx, 4(%esp)
	movl	%eax, (%esp)
	call	__isoc99_scanf
	movl	-12(%ebp), %eax
	addl	8(%ebp), %eax
	movzbl	(%eax), %eax
	cmpb	$10, %al
	jne	.L3
	addl	$1, -12(%ebp)
	jmp	.L4
.L3:
	addl	$1, -12(%ebp)
.L2:
	movl	12(%ebp), %eax
	subl	$1, %eax
	cmpl	-12(%ebp), %eax
	jg	.L5
.L4:
	movl	$.LC1, %eax
	movl	-12(%ebp), %edx
	movl	%edx, 4(%esp)
	movl	%eax, (%esp)
	call	printf
	movl	-12(%ebp), %eax
	addl	8(%ebp), %eax
	movb	$0, (%eax)
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
.LFE0:
	.size	get_string, .-get_string
	.section	.rodata
.LC2:
	.string	"Enter a string: "
.LC3:
	.string	"You entered %s\n"
	.text
	.globl	main
	.type	main, @function
main:
.LFB1:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	andl	$-16, %esp
	subl	$32, %esp
	movl	%gs:20, %eax
	movl	%eax, 28(%esp)
	xorl	%eax, %eax
	movl	$1515870810, 18(%esp)
	movl	$1515870810, 22(%esp)
	movw	$23130, 26(%esp)
	movl	$.LC2, %eax
	movl	%eax, (%esp)
	call	printf
	movl	$10, 4(%esp)
	leal	18(%esp), %eax
	movl	%eax, (%esp)
	call	get_string
	movl	$.LC3, %eax
	leal	18(%esp), %edx
	movl	%edx, 4(%esp)
	movl	%eax, (%esp)
	call	printf
	movl	$0, %eax
	movl	28(%esp), %edx
	xorl	%gs:20, %edx
	je	.L7
	call	__stack_chk_fail
.L7:
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
.LFE1:
	.size	main, .-main
	.ident	"GCC: (Ubuntu/Linaro 4.6.3-1ubuntu5) 4.6.3"
	.section	.note.GNU-stack,"",@progbits
