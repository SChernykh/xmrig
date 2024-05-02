	;# save VM register values
	add rsp, 40
	pop rcx
	mov qword ptr [rcx+0], r8
	mov qword ptr [rcx+8], r9
	mov qword ptr [rcx+16], r10
	mov qword ptr [rcx+24], r11
	mov qword ptr [rcx+32], r12
	mov qword ptr [rcx+40], r13
	mov qword ptr [rcx+48], r14
	mov qword ptr [rcx+56], r15
	vmovdqa32 zmmword ptr [rcx+64], zmm0
	vmovdqa32 zmmword ptr [rcx+128], zmm1