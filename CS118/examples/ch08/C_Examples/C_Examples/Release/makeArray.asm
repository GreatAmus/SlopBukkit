; Listing generated by Microsoft (R) Optimizing Compiler Version 15.00.21022.08 

	TITLE	d:\AsmBook5\examples_download\examples\ch08\C_Examples\C_Examples\makeArray.c
	.686P
	.XMM
	include listing.inc
	.model	flat

INCLUDELIB LIBCMT
INCLUDELIB OLDNAMES

PUBLIC	__$ArrayPad$
PUBLIC	_makeArray
EXTRN	___security_cookie:DWORD
EXTRN	@__security_check_cookie@4:PROC
; Function compile flags: /Odtp
_TEXT	SEGMENT
_myString$ = -40					; size = 30
__$ArrayPad$ = -8					; size = 4
_i$ = -4						; size = 4
_makeArray PROC
; File d:\asmbook5\examples_download\examples\ch08\c_examples\c_examples\makearray.c
; Line 4
	push	ebp
	mov	ebp, esp
	sub	esp, 40					; 00000028H
	mov	eax, DWORD PTR ___security_cookie
	xor	eax, ebp
	mov	DWORD PTR __$ArrayPad$[ebp], eax
; Line 8
	mov	DWORD PTR _i$[ebp], 0
	jmp	SHORT $LN3@makeArray
$LN2@makeArray:
	mov	eax, DWORD PTR _i$[ebp]
	add	eax, 1
	mov	DWORD PTR _i$[ebp], eax
$LN3@makeArray:
	cmp	DWORD PTR _i$[ebp], 30			; 0000001eH
	jge	SHORT $LN4@makeArray
; Line 9
	mov	ecx, DWORD PTR _i$[ebp]
	mov	dl, BYTE PTR _i$[ebp]
	mov	BYTE PTR _myString$[ebp+ecx], dl
	jmp	SHORT $LN2@makeArray
$LN4@makeArray:
; Line 11
	mov	ecx, DWORD PTR __$ArrayPad$[ebp]
	xor	ecx, ebp
	call	@__security_check_cookie@4
	mov	esp, ebp
	pop	ebp
	ret	0
_makeArray ENDP
_TEXT	ENDS
PUBLIC	_main
; Function compile flags: /Odtp
_TEXT	SEGMENT
_main	PROC
; Line 15
	push	ebp
	mov	ebp, esp
; Line 17
	call	_makeArray
; Line 20
	xor	eax, eax
	pop	ebp
	ret	0
_main	ENDP
_TEXT	ENDS
END