section .data
	text db "Hello, Holberton",10
	
section .text
	global _main

_main:
mov rax, 1
mov rdi, 1
mov rsi, text
mov rdx, 20
syscall

mov rax, 60
mov rdi, 0
syscall
