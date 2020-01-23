	
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
	OLD_X DW  5			;X position of the first player
	OLD_Y DW 131		;Y position of the first player
	LINE_COLOR DB 5
	BGC EQU 0 ;Light Cyan
	PLAYER_POS_ROW DB 5
	PLAYER_POS_COL DB 1
	ARRAY_IDX DB 0
	TIME_AUX DB 0 ;variable used when checking if the time has changed
	;player common attributes
	PLAYER_X DW ?
	PLAYER_Y DW ?
	PLAYER_WIDTH DW 22 			;size of the player in X direction
	PLAYER_HIGHT DW 25 			;size of the player in Y direction
	PLAYER_VELOCITY_X DW 6     	;X (horizontal) velocity of the player
	PLAYER_VELOCITY_Y DW 3    	;Y (vertical) velocity of the player
    PLAYER_OUTER_VELOCITY DW 10
	NUMBERS DB 50 DUP(0)
	SCORE_MES DB 'Score: ', '$'
	TIME_REM DB 'Time: ', '$'
	WELCOME_MES DB 'CHOOSE MULTIPLE OF ', '$'
	GAME_OVER_MES DB 'GAME OVER', '$'
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
			CALL INITIALIZE_SCREEN
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
			
			MOV SI, OFFSET NUMBERS
			MOV CL, 2 ;ROW
			MOV DH, 5
			DISPLAY_OUTER:
				MOV DL, 0 ;COL
				MOV CH, 8
				DISPLAY_INNER:
					MOV AX, [SI]
					DISPLAYNUMBER LINE_COLOR, DL, CL
					INC SI
					ADD DL, 5
					DEC CH
					CMP CH, 0
					JNZ DISPLAY_INNER
				ADD CL, 4
				MOV DL, 0
				DEC DH
				CMP DH, 0
				JNZ DISPLAY_OUTER
			
			;Display Game message
			
			; Draw Players 
			; CLEAR 00, OLD_X, OLD_Y, PLAYER_WIDTH, PLAYER_HIGHT
			DRAW PLAYER1, PLAYER_ONE_X, PLAYER_ONE_Y, PLAYER_WIDTH, PLAYER_HIGHT 
			CALL MOVEPLAYER
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
	; z= (a*z+b) mod m = (17*z+13)%101
	;source: https://www.daniweb.com/programming/software-development/threads/292225/random-number-generating-in-assembly
	RANDOM_NUMBER PROC NEAR
	
		MOV DX, 000AH ;11D is initial Value z for random sequence
		MOV CX, 0032H  ;compute 0032H = 50D pseudo random numbers
		MOV SI, OFFSET NUMBERS
		RN:
			MOV AX, DX ;set new initial value z
			MOV BX, 0011H ;17D
			MUL BX        ;17 * z
			ADD AX, 000DH ;+13
			MOV BX, 03E9H ;101D
			DIV BX        ;div by 101D
			; MOV DL, 0AH
			MOV [SI], DL
			INC SI
			LOOP RN
		RET
		
	RANDOM_NUMBER ENDP
	
	MOVEPLAYER PROC NEAR 
	
		;READ CHARACTER FROM KEYBOARD
		MOV AH,0
		INT 16H
		JZ DONE

		CMP AL, 115
		JZ DOWN
		;UP
		CMP AL, 119
		JZ UP
		;LEFT
		CMP AL, 097
		JZ LEFT
		;RIGHT
		CMP AL, 100
		JZ RIGHT
		
		JMP DEFAULT
		
		RIGHT:
			INC PLAYER_POS_COL
			CMP PLAYER_POS_COL, 9
			JZ  RIGHT_BOUND
			ADD PLAYER_ONE_X, 40
			JMP DONE
		LEFT:
			DEC PLAYER_POS_COL
			CMP PLAYER_POS_COL, 0
			JZ  LEFT_BOUND
			SUB PLAYER_ONE_X, 40
			JMP DONE
		UP:
			DEC PLAYER_POS_ROW
			CMP PLAYER_POS_ROW, 0
			JZ  UP_BOUND
			SUB PLAYER_ONE_Y, 29
			JMP DONE
		DOWN:
			INC PLAYER_POS_ROW
			CMP PLAYER_POS_ROW, 6
			JZ  DOWN_BOUND
			ADD PLAYER_ONE_Y, 29
			JMP DONE
		DEFAULT: 
			JMP DONE
		
		RIGHT_BOUND:
			MOV PLAYER_POS_COL, 8
			JMP DONE
		LEFT_BOUND:
			MOV PLAYER_POS_COL, 1
			JMP DONE
		UP_BOUND:
			MOV PLAYER_POS_ROW, 1
			JMP DONE
		DOWN_BOUND:
			MOV PLAYER_POS_ROW, 5
			JMP DONE
			
		DONE:
			RET
			
	MOVEPLAYER ENDP
	
	SELECT_NUMBER PROC NEAR
		MOV AH,0
		INT 16H
		JZ DONE_SEL
		
		CMP AL, 32
		JNZ DONE_SEL
		
		;array index = row * 8 - 9 + col
		MOV AL, 8
		MOV BL, PLAYER_POS_ROW
		MUL BL
		SUB AL, 9
		ADD AL, PLAYER_POS_COL
		
		MOV ARRAY_IDX, AL
		
		DONE_SEL:
			RET
	SELECT_NUMBER ENDP
	
	;Linear congruential generator
	GET_MULTIPLE PROC NEAR
	
		MOV DX, 0005H ;11D is initial Value z for random sequence
		MOV AX, DX ;set new initial value z
		MOV BX, 0005H ;5D
		MUL BX        ;5 * z
		ADD AX, 0003H ;+3
		MOV BX, 000BH ;11D
		DIV BX        ;div by 11D
		
		RET
	GET_MULTIPLE ENDP
	END MAIN 