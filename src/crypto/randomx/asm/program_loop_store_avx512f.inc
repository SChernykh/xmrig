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
	vpxord zmm0, zmm0, zmm1
	vmovdqa32 zmmword ptr [rcx+0], zmm0
