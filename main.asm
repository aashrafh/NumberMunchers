	
	INCLUDE MACROS.inc
	.MODEL SMALL
	.STACK 64
	.386
	.DATA
	     
	PLAYER1 DB  00 , 00 , 00 , 00 , 00 , 00 , 00 , 00 , 00 , 00 , 00 , 00 , 00 , 00 , 00 , 00 , 00 , 00 , 00 , 00 , 00 ,00
			DB  00 , 00 , 00 , 00 , 00 , 00 , 00 , 00 , 00 , 00 , 00 , 00 , 00 , 00 , 00 , 00 , 00 , 00 , 00 , 00 , 00 ,00
			DB  00 , 00 , 00 , 00 , 00 , 00 , 00 , 00 , 00 , 00 , 00 , 00 , 00 , 00 , 00 , 00 , 00 , 00 , 00 , 00 , 00 ,00
			DB  00 , 00 , 00 , 00 , 00 , 00 , 00 , 00 , 00 , 00 , 00 , 00 , 00 , 00 , 00 , 00 , 00 , 00 , 00 , 00 , 00 ,00
			DB  00 , 00 , 00 , 00 , 00 , 00 , 00 , 10 , 00 , 00 , 00 , 00 , 00 , 10 , 00 , 00 , 00 , 00 , 10 , 10 , 00 ,00
			DB  00 , 00 , 00 , 00 , 00 , 00 , 00 , 10 , 00 , 00 , 00 , 00 , 00 , 10 , 00 , 00 , 00 , 00 , 10 , 10 , 00 ,00
			DB  00 , 00 , 00 , 00 , 00 , 00 , 00 , 10 , 10 , 10 , 00 , 10 , 10 , 10 , 10 , 00 , 00 , 10 , 10 , 10 , 00 ,00
			DB  00 , 00 , 00 , 00 , 00 , 00 , 00 , 10 , 10 , 10 , 10 , 10 , 10 , 10 , 10 , 10 , 10 , 10 , 10 , 10 , 00 ,00
			DB  00 , 00 , 00 , 00 , 00 , 00 , 00 , 00 , 00 , 00 , 00 , 00 , 00 , 00 , 14 , 14 , 14 , 14 , 00 , 00 , 00 ,00
			DB  00 , 00 , 00 , 00 , 00 , 00 , 00 , 00 , 00 , 00 , 00 , 00 , 00 , 00 , 14 , 14 , 14 , 14 , 00 , 00 , 00 ,00
			DB  00 , 00 , 00 , 00 , 00 , 00 , 00 , 00 , 00 , 00 , 00 , 14 , 14 , 00 , 14 , 00 , 00 , 14 , 00 , 00 , 00 ,00
			DB  00 , 00 , 00 , 00 , 00 , 00 , 00 , 00 , 10 , 10 , 10 , 14 , 14 , 14 , 14 , 00 , 00 , 14 , 00 , 00 , 00 ,00
			DB  00 , 00 , 00 , 00 , 00 , 00 , 00 , 00 , 10 , 10 , 10 , 10 , 10 , 14 , 14 , 14 , 14 , 14 , 00 , 00 , 00 ,00
			DB  00 , 00 , 00 , 00 , 00 , 00 , 00 , 00 , 10 , 10 , 10 , 10 , 10 , 14 , 14 , 14 , 14 , 14 , 00 , 00 , 00 ,00
			DB  00 , 00 , 00 , 00 , 00 , 00 , 00 , 10 , 10 , 10 , 10 , 10 , 10 , 10 , 10 , 10 , 10 , 10 , 00 , 00 , 00 ,00
			DB  00 , 00 , 00 , 00 , 00 , 00 , 10 , 10 , 10 , 10 , 10 , 10 , 10 , 10 , 10 , 00 , 00 , 00 , 00 , 00 , 00 ,00
			DB  00 , 00 , 00 , 00 , 00 , 00 , 10 , 10 , 10 , 10 , 10 , 10 , 10 , 10 , 10 , 00 , 00 , 00 , 00 , 00 , 00 ,00
			DB  00 , 00 , 00 , 00 , 00 , 00 , 10 , 10 , 10 , 10 , 10 , 00 , 00 , 00 , 00 , 10 , 10 , 00 , 00 , 00 , 00 ,00
			DB  00 , 00 , 00 , 00 , 10 , 10 , 10 , 10 , 14 , 14 , 14 , 00 , 00 , 00 , 00 , 00 , 00 , 00 , 00 , 00 , 00 ,00
			DB  00 , 00 , 00 , 00 , 10 , 10 , 10 , 10 , 14 , 14 , 14 , 00 , 00 , 00 , 00 , 00 , 00 , 00 , 00 , 00 , 00 ,00
			DB  00 , 00 , 00 , 00 , 10 , 10 , 10 , 10 , 00 , 00 , 00 , 00 , 00 , 00 , 00 , 00 , 00 , 00 , 00 , 00 , 00 ,00
			DB  00 , 00 , 00 , 10 , 10 , 10 , 10 , 00 , 00 , 00 , 10 , 10 , 10 , 10 , 10 , 00 , 00 , 00 , 00 , 00 , 00 ,00
			DB  00 , 00 , 10 , 10 , 00 , 00 , 00 , 00 , 00 , 00 , 00 , 00 , 00 , 00 , 00 , 00 , 00 , 00 , 00 , 00 , 00 ,00
			DB  00 , 00 , 00 , 00 , 00 , 00 , 00 , 00 , 00 , 00 , 00 , 00 , 00 , 00 , 00 , 00 , 00 , 00 , 00 , 00 , 00 ,00
			DB  00 , 00 , 00 , 00 , 00 , 00 , 00 , 00 , 00 , 00 , 00 , 00 , 00 , 00 , 00 , 00 , 00 , 00 , 00 , 00 , 00 ,00
	
	PLAYER_ONE_X DW  5			;X position of the first player
	PLAYER_ONE_Y DW 131		;Y position of the first player
	LINE_COLOR DB 5
	BGC EQU 0 ;Light Cyan
	NUMS DW 50 DUP(0)
	TIME_AUX DB 0 ;variable used when checking if the time has changed
	;player common attributes
	PLAYER_X DW ?
	PLAYER_Y DW ?
	PLAYER_WIDTH DW 22 			;size of the player in X direction
	PLAYER_HIGHT DW 25 			;size of the player in Y direction
	PLAYER_VELOCITY_X DW 6     	;X (horizontal) velocity of the player
	PLAYER_VELOCITY_Y DW 3    	;Y (vertical) velocity of the player
    PLAYER_OUTER_VELOCITY DW 10
   
	.CODE
	 ; __  __     _     ___   _  _ 
	 ;|  \/  |   /_\   |_ _| | \| |
	 ;| |\/| |  / _ \   | |  | .` |
	 ;|_|  |_| /_/ \_\ |___| |_|\_|
								  
	;MAIN MENUE
	MAIN PROC FAR

			mov AX, @DATA
			mov DS, AX	
			mov es,ax 
			
		start_game:
			 Mov ah , 00h  ;change to vedio mode
			 Mov Al , 13h
			 int 10h
			 CALL INITIALIZE_SCREEN
			 
	CHECK_TIME:

			MOV AH,2Ch ;get the system time
			INT 21h    ;CH = hour CL = minute DH = second DL = 1/100 seconds
			
			CMP DL,TIME_AUX  ;is the current time equal to the previous one(TIME_AUX)?
			JE CHECK_TIME    ;if it is the same, check again
							 ;if it's different, then draw, move, etc.
			
			MOV TIME_AUX,DL ;update time
			
			;Draw vertical line
			MOV BX, 32
			MOV DI, 7
			DRAW_VERTICAL_LINES:
				VERTICAL_LINE LINE_COLOR, BX
				ADD BX, 41
				DEC DI
				JNZ DRAW_VERTICAL_LINES
			
			;Draw horizontal lines
			MOV BX, 8
			MOV DI, 6
			DRAW_HORIZONTAL_LINES:
				HORIZONTAL_LINE LINE_COLOR, BX
				ADD BX, 30
				DEC DI
				JNZ DRAW_HORIZONTAL_LINES
			
			CALL RANDOM_NUMBER
			
			; MOV AH, 0AH
			; INT 10H
			MOV SI, OFFSET NUMS
			MOV CL, 2 ;ROW
			MOV DH, 5
			DISPLAY_OUTER:
				MOV DL, 0 ;COL
				MOV CH, 8
				DATA_ROW
				ADD CL, 4
				MOV DL, 0
				DEC DH
				CMP DH, 0
				JNZ DISPLAY_OUTER
				
			; Draw Players 
			DRAW PLAYER1, PLAYER_ONE_X, PLAYER_ONE_Y, PLAYER_WIDTH, PLAYER_HIGHT 
			
		JMP CHECK_TIME ;AFTER EVERYTHING CHECKS TIME AGAIN
			
		;return the control to the dos
		; control_dos:	
			; MOV AH, 4CH
			; INT 21H
			
	MAIN ENDP
	
	INITIALIZE_SCREEN PROC NEAR
	
		mov AH, 06h    ; Scroll up function
		XOR AL, AL     ; Clear entire screen
		; Upper left corner CH=row, CL=column
		mov CL, 0
		mov CH, 1
		mov DX, 134FH  ; lower right corner DH=row, DL=column 

		mov BH, BGC     ; color 
		INT 10H
		RET
		
	INITIALIZE_SCREEN  ENDP
	
	;Linear congruential generator: https://en.wikipedia.org/wiki/Linear_congruential_generator
	; z= (a*z+b) mod m = (31*z+13)%19683
	;source: https://www.daniweb.com/programming/software-development/threads/292225/random-number-generating-in-assembly
	RANDOM_NUMBER PROC NEAR
	
		MOV DX, 0ABBAH ;43962D is initial Value z for random sequence
		MOV CX, 0032H  ;compute 0032H = 50D pseudo random numbers
		MOV SI, OFFSET NUMS
		RN:
			MOV AX, DX ;set new initial value z
			MOV BX, 001FH ;31D
			MUL BX        ;31 * z
			ADD AX, 000DH ;+13
			MOV BX, 4CE3H ;19683D
			DIV BX        ;div by 19683D
			MOV [SI], DX
			ADD SI, 2
			LOOP RN
		RET
		
	RANDOM_NUMBER ENDP
	
	END MAIN 
		






