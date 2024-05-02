	lea rcx, [rsi+rax]
	mov [rsp+16], rcx
	xor r8,  qword ptr [rcx+0]
	xor r9,  qword ptr [rcx+8]
	xor r10, qword ptr [rcx+16]
	xor r11, qword ptr [rcx+24]
	xor r12, qword ptr [rcx+32]
	xor r13, qword ptr [rcx+40]
	xor r14, qword ptr [rcx+48]
	xor r15, qword ptr [rcx+56]
	lea rcx, [rsi+rdx]
	mov [rsp+24], rcx
	vcvtdq2pd zmm0, ymmword ptr [rcx+0]
	vcvtdq2pd zmm1, ymmword ptr [rcx+32]
	vpandd zmm1, zmm1, zmm13
	vpord zmm1, zmm1, zmm14
