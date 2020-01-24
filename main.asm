	
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
	ARRAY_IDX DW 0
	TIME_AUX DB 0 ;variable used when checking if the time has changed
	;player common attributes
	PLAYER_X DW ?
	PLAYER_Y DW ?
	PLAYER_WIDTH DW 22 			;size of the player in X direction
	PLAYER_HIGHT DW 25 			;size of the player in Y direction
	PLAYER_VELOCITY_X DW 6     	;X (horizontal) velocity of the player
	PLAYER_VELOCITY_Y DW 3    	;Y (vertical) velocity of the player
    PLAYER_OUTER_VELOCITY DW 10
	NUMBERS DW 50 DUP(0)
	FLAG DW 50 DUP(0)
	SCORE_MES DB 'Score: ', '$'
	SCORE_NUM DW 0000H
	TIME_REM_1 DB 'Time: ', '$'
	TIME_REM_2 DB 60
	TIME_REM_3 DB ' seconds', '$'
	TIME_REM_NUMB_START DB 0
	TIME_REM_NUMB_END DB 0
	WELCOME_MES DB 'CHOOSE MULTIPLE OF ', '$'
	MULTIPLE_NUMB DW '0', '$'
	DIV_NUM DW 0
	GAME_OVER_MES DB 'GAME OVER', '$'
	OLD_TIME DB 0
	.CODE
	 ; __  __     _     ___   _  _ 
	 ;|  \/  |   /_\   |_ _| | \| |
	 ;| |\/| |  / _ \   | |  | .` |
	 ;|_|  |_| /_/ \_\ |___| |_|\_|
								  
	;MAIN MENUE
	
	MAIN PROC FAR

		MOV AX, @DATA
		MOV DS, AX	
		MOV ES,AX 
			
		START_GAME:
			MOV AH , 00H  ;CHANGE TO VEDIO MODE
			MOV AL , 13H
			INT 10H
			CALL INITIALIZE_SCREEN
			
			MOV AX, SCORE_NUM
			CALL DISPLAY_SCORE
			;Display CHOOSE message
			MOV  DL, 0   ;COLUMN
			MOV  DH, 20   ;ROW
			MOV  BH, 0    ;DISPLAY PAGE
			MOV  AH, 02H  ;SETCURSORPOSITION
			INT  10H
			MOV AH, 9
			MOV DX, OFFSET WELCOME_MES
			INT 21H
			
			CALL GET_MULTIPLE
			
			MOV AH, 9
			MOV DX, OFFSET MULTIPLE_NUMB
			INT 21H
			
			;Display time remaining
			CALL DISPLAY_TIME
			
			MOV AH,2Ch ;get the system time
			INT 21h    ;CH = hour CL = minute DH = second DL = 1/100 seconds
			MOV TIME_REM_NUMB_START, DH
			ADD DH, 60
			MOV TIME_REM_NUMB_END, DH
				
			CALL RANDOM_NUMBER
			 
		CHECK_TIME:
			CALL INITIALIZE_SCREEN
			MOV AH,2Ch ;get the system time
			INT 21h    ;CH = hour CL = minute DH = second DL = 1/100 seconds
			
			CMP DL,TIME_AUX  ;is the current time equal to the previous one(TIME_AUX)?
			JE CHECK_TIME    ;if it is the same, check again
							 ;if it's different, then draw, move, etc.
			
			MOV TIME_AUX,DL ;update time
			CALL TIME_COUNTER
			
			CONT:
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
			
			MOV SI, OFFSET NUMBERS
			MOV CL, 2 ;ROW
			MOV DH, 5
			DISPLAY_OUTER:
				MOV DL, 0 ;COL
				MOV CH, 8
				DISPLAY_INNER:
					MOV AX, [SI]
					DISPLAYNUMBER LINE_COLOR, DL, CL
					ADD SI, 2
					ADD DL, 5
					DEC CH
					CMP CH, 0
					JNZ DISPLAY_INNER
				ADD CL, 4
				MOV DL, 0
				DEC DH
				CMP DH, 0
				JNZ DISPLAY_OUTER
			
			; Draw Players 
			; CLEAR 00, OLD_X, OLD_Y, PLAYER_WIDTH, PLAYER_HIGHT
			DRAW PLAYER1, PLAYER_ONE_X, PLAYER_ONE_Y, PLAYER_WIDTH, PLAYER_HIGHT 
			CALL MOVEPLAYER
		JMP CHECK_TIME ;AFTER EVERYTHING CHECKS TIME AGAIN
		
		GAME_OVER:
			MOV  DL, 0   ;COLUMN
			MOV  DH, 22   ;ROW
			MOV  BH, 0    ;DISPLAY PAGE
			MOV  AH, 02H  ;SETCURSORPOSITION
			INT  10H
			MOV AH, 9
			MOV DX, OFFSET GAME_OVER_MES
			INT 21H
		;return the control to the dos
		; control_dos:	
			; MOV AH, 4CH
			; INT 21H
			
	MAIN ENDP
	
	TIME_COUNTER PROC NEAR
		MOV AH,2Ch ;get the system time
		INT 21h    ;CH = hour CL = minute DH = second DL = 1/100 seconds
		
		CMP DH, OLD_TIME
		JE CONT
		MOV OLD_TIME, DH
		SUB TIME_REM_2, 1
		CMP TIME_REM_2, 0
		JE GAME_OVER
		CALL DISPLAY_TIME
	TIME_COUNTER ENDP
	
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
	;source(I modified some of it): https://www.daniweb.com/programming/software-development/threads/292225/random-number-generating-in-assembly
	RANDOM_NUMBER PROC NEAR
		MOV AH,2Ch ;get the system time
		INT 21h    ;CH = hour CL = minute DH = second DL = 1/100 seconds
		
		MOV DL, 0AH
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
			; MOV DH, 00
			MOV [SI], DX
			ADD SI, 2
			LOOP RN
		RET
		
	RANDOM_NUMBER ENDP
	
	MOVEPLAYER PROC NEAR 
	;{
		;READ CHARACTER FROM KEYBOARD
		MOV AH,0
		INT 16H
		; JZ DONE

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
		
		CMP AL, 118
		JZ INC_SCORE
		
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
		INC_SCORE:
			;array index = row * 8 - 9 + col
			MOV AL, 8
			MOV BL, PLAYER_POS_ROW
			MUL BL
			SUB AL, 9
			ADD AL, PLAYER_POS_COL
			
			MOV AH, 00H
			MOV ARRAY_IDX, AX
			
			;Check for repeated choice
			MOV SI, OFFSET FLAG
			ADD SI, ARRAY_IDX
			ADD SI, ARRAY_IDX
			MOV AX, 1
			CMP [SI], AX
			JZ DONE
			MOV [SI], AX
			
			MOV SI, OFFSET NUMBERS
			ADD SI, ARRAY_IDX
			ADD SI, ARRAY_IDX
			MOV AX, [SI]
			MOV DX, 0000H
			MOV BX, DIV_NUM
			DIV BX
			CMP DX, 0000H
			JNZ DONE
			ADD SCORE_NUM, 5
			MOV AX, SCORE_NUM
			CALL DISPLAY_SCORE
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
	;}		
	MOVEPLAYER ENDP
	
	;Linear congruential generator
	GET_MULTIPLE PROC NEAR
		PUSHA
		MOV AH,2Ch ;get the system time
		INT 21h    ;CH = hour CL = minute DH = second DL = 1/100 seconds
		
		MOV DH, 00H
		MOV AX, DX ;set new initial value z
		MOV BX, 0005H ;5D
		MUL BX        ;5 * z
		ADD AX, 0003H ;+3
		MOV BX, 000BH ;11D
		DIV BX        ;div by 11D
		MOV DIV_NUM, DX
		ADD MULTIPLE_NUMB, DX
		POPA
		RET
	GET_MULTIPLE ENDP
	
	DISPLAY_TIME PROC NEAR
		MOV  DL, 0   ;COLUMN
		MOV  DH, 21   ;ROW
		MOV  BH, 0    ;DISPLAY PAGE
		MOV  AH, 02H  ;SETCURSORPOSITION
		INT  10H
		MOV AH, 9
		
		MOV DX, OFFSET TIME_REM_1
		INT 21H
		
		MOV AL, TIME_REM_2
		MOV AH, 00H
		MOV CX, 10D
		DIV Cl		;AL = AX / CX 
		MOV CH, AH	;Reminder
		MOV DL, AL
		ADD DL, 48D
		DISPLAY 4

		;Display A0
		MOV DL, CH
		ADD DL, 48D
		DISPLAY 4
		
		MOV AH, 9
		MOV DX, OFFSET TIME_REM_3
		INT 21H
		RET
	DISPLAY_TIME ENDP
	
	DISPLAY_SCORE PROC NEAR
		PUSHA
		;Display score 
		MOV  DL, 0   ;COLUMN
		MOV  DH, 0   ;ROW
		MOV  BH, 0    ;DISPLAY PAGE
		MOV  AH, 02H  ;SETCURSORPOSITION
		INT  10H
		MOV AH, 9
		MOV DX, OFFSET SCORE_MES
		INT 21H
		
		POPA
		;Display A3
		MOV CX, 1000D
		MOV DX, 0
		DIV CX		;AX = DX:AX / CX
		MOV CX, DX	;Reminer
		MOV DL, AL
		ADD DL, 48D
		DISPLAY 4
		
		;Display A2
		MOV AX, CX	;AX has reminder
		MOV CX, 100D
		MOV DX, 0
		DIV CX		;AX = DX:AX / CX
		MOV CX, DX	;reminder
		MOV	DL, AL
		ADD DL, 48D
		DISPLAY 4

		;Display A1
		MOV AX, CX
		MOV CX, 10D
		DIV Cl		;AL = AX / CX 
		MOV CH, AH	;Reminder
		MOV DL, AL
		ADD DL, 48D
		DISPLAY 4

		;Display A0
		MOV DL, CH
		ADD DL, 48D
		DISPLAY 4
		RET
	DISPLAY_SCORE ENDP
	
	END MAIN 
	