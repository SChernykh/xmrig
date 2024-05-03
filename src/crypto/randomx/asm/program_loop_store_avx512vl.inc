	mov rcx, [rsp+24]
	mov qword ptr [rcx+0], r8
	mov qword ptr [rcx+8], r9
	mov qword ptr [rcx+16], r10
	mov qword ptr [rcx+24], r11
	mov qword ptr [rcx+32], r12
	mov qword ptr [rcx+40], r13
	mov qword ptr [rcx+48], r14
	mov qword ptr [rcx+56], r15
	mov rcx, [rsp+16]
	vxorpd ymm0, ymm0, ymm2
	vxorpd ymm1, ymm1, ymm3
	vmovdqa ymmword ptr [rcx+0], ymm0
	vmovdqa ymmword ptr [rcx+32], ymm1
