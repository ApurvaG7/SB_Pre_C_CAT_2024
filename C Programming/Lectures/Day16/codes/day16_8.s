	.file	"day16_8.c"
	.text
	.def	___main;	.scl	2;	.type	32;	.endef
	.section .rdata,"dr"
LC0:
	.ascii "Current Line no : %d\12\0"
LC1:
	.ascii "day16_8.c\0"
LC2:
	.ascii "Current File = %s\12\0"
LC3:
	.ascii "Mar 28 2024\0"
LC4:
	.ascii "Todays Date = %s\12\0"
LC5:
	.ascii "10:27:03\0"
LC6:
	.ascii "Current Time = %s\12\0"
	.text
	.globl	_main
	.def	_main;	.scl	2;	.type	32;	.endef
_main:
	pushl	%ebp
	movl	%esp, %ebp
	andl	$-16, %esp
	subl	$16, %esp
	call	___main
	movl	$6, 4(%esp)
	movl	$LC0, (%esp)
	call	_printf
	movl	$LC1, 4(%esp)
	movl	$LC2, (%esp)
	call	_printf
	movl	$LC3, 4(%esp)
	movl	$LC4, (%esp)
	call	_printf
	movl	$LC5, 4(%esp)
	movl	$LC6, (%esp)
	call	_printf
	movl	$100, 4(%esp)
	movl	$LC0, (%esp)
	call	_printf
	movl	$0, %eax
	leave
	ret
	.ident	"GCC: (tdm-1) 10.3.0"
	.def	_printf;	.scl	2;	.type	32;	.endef
