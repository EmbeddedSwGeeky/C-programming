	.file	"bit_fields.c"
	.section	.rodata
.LC0:
	.string	"sizeof ctrl = %u\n"
.LC1:
	.string	"Enable = %d, Reset = %d\n"
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
	subl	$32, %esp
	movl	$.LC0, %eax
	movl	$8, 4(%esp)
	movl	%eax, (%esp)
	call	printf
	movzbl	26(%esp), %eax
	orl	$4, %eax
	movb	%al, 26(%esp)
	movl	24(%esp), %eax
	andl	$-229377, %eax
	orl	$131072, %eax
	movl	%eax, 24(%esp)
	movl	24(%esp), %eax
	sall	$14, %eax
	sarl	$29, %eax
	movsbl	%al, %ecx
	movzbl	26(%esp), %eax
	sall	$5, %eax
	sarb	$7, %al
	movsbl	%al, %edx
	movl	$.LC1, %eax
	movl	%ecx, 8(%esp)
	movl	%edx, 4(%esp)
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
