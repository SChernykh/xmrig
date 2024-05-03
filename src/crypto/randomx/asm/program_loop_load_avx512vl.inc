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
	vcvtdq2pd ymm0, xmmword ptr [rcx+0]
	vcvtdq2pd ymm1, xmmword ptr [rcx+16]
	vcvtdq2pd ymm2, xmmword ptr [rcx+32]
	vcvtdq2pd ymm3, xmmword ptr [rcx+48]
	vandpd ymm2, ymm2, ymm13
	vandpd ymm3, ymm3, ymm13
	vorpd ymm2, ymm2, ymm14
	vorpd ymm3, ymm3, ymm14
