DRAW MACRO COLOR, X, Y, WIDTH, HIGHT
	LOCAL outerloop, innerloop
push CX
	 mov  SI , offset COLOR
     mov  bh , 0   ;DisplayPage doesn't change	 
     mov  Dx , Y;start Y for WALL
	
	 mov  DI , WIDTH
	 add  DI , X
	 sub  DI  ,1
	 
     mov  BX , HIGHT ; limit for y
     add  BX , Y	 
     Sub  BX , 1  
     ;Draw
	
 outerloop:
     mov cx, X ;start x for WALL
    
	 innerloop:	 
			mov al ,[SI] ;color for this cell
			mov ah ,0ch ;Draw command
			int 10h     ;int fo Draw pixel
			inc cx
			inc SI
			cmp cx , DI ;the end X for WALL
			jbe innerloop
			
        inc dx
        cmp dx  ,BX ; the end Y for WALL
        jbe  outerloop	
pop cx
ENDM DRAW

VERTICAL_LINE MACRO COLOR, COL
	LOCAL BACK
	MOV CX, COL
	MOV DX, 8
	MOV AL, COLOR
	MOV AH, 0CH
	BACK:
		INT 10H
		INC DX
		CMP DX, 160
		JNZ BACK
	
ENDM VERTICAL_LINE

HORIZONTAL_LINE MACRO COLOR, ROW
	LOCAL BACK2
	MOV CX, 0
	MOV DX, ROW
	MOV AL, COLOR
	MOV AH, 0CH
	BACK2:
		INT 10H
		INC CX
		CMP CX, 320
		JNZ BACK2
	
ENDM HORIZONTAL_LINE

DISPLAYNUMBER MACRO COLOR, COL, ROW
	PUSHA
	;Assuming AX is a 4-digit DECIMAL number
	
	MOV  DL, COL   ;COLUMN
	MOV  DH, ROW   ;ROW
	MOV  BH, 0    ;DISPLAY PAGE
	MOV  AH, 02H  ;SETCURSORPOSITION
	INT  10H
	
	;Display A3
	MOV CX, 1000D
	MOV DX, 0
	DIV CX		;AX = DX:AX / CX
	MOV CX, DX	;Reminer
	MOV DL, AL
	ADD DL, 48D
	DISPLAY COLOR
	
	;Display A2
	MOV AX, CX	;AX has reminder
	MOV CX, 100D
	MOV DX, 0
	DIV CX		;AX = DX:AX / CX
	MOV CX, DX	;reminder
	MOV	DL, AL
	ADD DL, 48D
	DISPLAY COLOR

	;Display A1
	MOV AX, CX
	MOV CX, 10D
	DIV Cl		;AL = AX / CX 
	MOV CH, AH	;Reminder
	MOV DL, AL
	ADD DL, 48D
	DISPLAY COLOR

	;Display A0
	MOV DL, CH
	ADD DL, 48D
	DISPLAY COLOR
	POPA
	
ENDM DISPLAYNUMBER

DISPLAY MACRO COLOR

	PUSH AX
	MOV  AL, DL
	MOV  BL, COLOR
	MOV  BH, 0    ;DISPLAY PAGE
	MOV  AH, 0EH  ;TELETYPE
	INT  10H
	POP AX
	
ENDM DISPLAY

DATA_ROW MACRO
	LOCAL DISPLAY_INNER
	DISPLAY_INNER:
		MOV AX, [SI]
		DISPLAYNUMBER LINE_COLOR, DL, CL
		ADD SI, 2
		ADD DL, 5
		DEC CH
		CMP CH, 0
		JNZ DISPLAY_INNER
ENDM DATA_ROW