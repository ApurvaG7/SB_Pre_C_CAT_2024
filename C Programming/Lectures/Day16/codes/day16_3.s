	.file	"day16_3.c"
	.text
	.def	___main;	.scl	2;	.type	32;	.endef
	.section .rdata,"dr"
	.align 4
LC0:
	.ascii "Before Swap num1 = %d  num2 = %d\12\0"
	.align 4
LC1:
	.ascii "After Swap num1 = %d  num2 = %d\12\0"
	.text
	.globl	_main
	.def	_main;	.scl	2;	.type	32;	.endef
_main:
	pushl	%ebp
	movl	%esp, %ebp
	andl	$-16, %esp
	subl	$32, %esp
	call	___main
	movl	$10, 28(%esp)
	movl	$20, 24(%esp)
	movl	24(%esp), %eax
	movl	%eax, 8(%esp)
	movl	28(%esp), %eax
	movl	%eax, 4(%esp)
	movl	$LC0, (%esp)
	call	_printf
	movl	28(%esp), %eax
	movl	%eax, 20(%esp)
	movl	24(%esp), %eax
	movl	%eax, 28(%esp)
	movl	20(%esp), %eax
	movl	%eax, 24(%esp)
	movl	24(%esp), %eax
	movl	%eax, 8(%esp)
	movl	28(%esp), %eax
	movl	%eax, 4(%esp)
	movl	$LC1, (%esp)
	call	_printf
	movl	$0, %eax
	leave
	ret
	.ident	"GCC: (tdm-1) 10.3.0"
	.def	_printf;	.scl	2;	.type	32;	.endef
