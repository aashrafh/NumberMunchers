	
	INCLUDE MACROS.inc
	.MODEL SMALL
	.STACK 64
	.386
	.DATA
	
	TIME_AUX DB 0 ;variable used when checking if the time has changed
	BGC EQU 11 ;Light Cyan
	;player 1 data        
	PLAYER1 DB  11 , 11 , 11 , 11 , 11 , 11 , 11 , 11 , 11 , 11 , 11 , 11 , 11 , 11 , 11 , 11 , 11 , 11 , 11 , 11 , 11 ,11
			DB  11 , 11 , 11 , 11 , 11 , 11 , 11 , 11 , 00 , 00 , 00 , 00 , 00 , 00 , 00 , 00 , 00 , 11 , 11 , 11 , 11 ,11
			DB  11 , 11 , 11 , 11 , 11 , 11 , 11 , 11 , 00 , 00 , 00 , 00 , 00 , 00 , 00 , 00 , 00 , 11 , 11 , 11 , 11 ,11
			DB  11 , 11 , 11 , 11 , 11 , 11 , 11 , 00 , 00 , 00 , 00 , 00 , 00 , 00 , 00 , 00 , 00 , 00 , 00 , 00 , 11 ,11
			DB  11 , 11 , 11 , 11 , 11 , 11 , 00 , 10 , 00 , 00 , 00 , 00 , 00 , 10 , 00 , 00 , 00 , 00 , 10 , 10 , 00 ,11
			DB  11 , 11 , 11 , 11 , 11 , 11 , 00 , 10 , 00 , 00 , 00 , 00 , 00 , 10 , 00 , 00 , 00 , 00 , 10 , 10 , 00 ,11
			DB  11 , 11 , 11 , 11 , 11 , 11 , 00 , 10 , 10 , 10 , 00 , 10 , 10 , 10 , 10 , 00 , 00 , 10 , 10 , 10 , 00 ,11
			DB  11 , 11 , 11 , 11 , 11 , 11 , 00 , 10 , 10 , 10 , 10 , 10 , 10 , 10 , 10 , 10 , 10 , 10 , 10 , 10 , 00 ,11
			DB  11 , 11 , 11 , 11 , 11 , 11 , 00 , 00 , 00 , 00 , 00 , 00 , 00 , 00 , 14 , 14 , 14 , 14 , 00 , 00 , 11 ,11
			DB  11 , 11 , 11 , 11 , 11 , 11 , 00 , 00 , 00 , 00 , 00 , 00 , 00 , 00 , 14 , 14 , 14 , 14 , 00 , 00 , 11 ,11
			DB  11 , 11 , 11 , 11 , 11 , 11 , 11 , 00 , 00 , 00 , 00 , 14 , 14 , 00 , 14 , 00 , 00 , 14 , 00 , 00 , 11 ,11
			DB  11 , 11 , 11 , 11 , 11 , 11 , 11 , 00 , 10 , 10 , 10 , 14 , 14 , 14 , 14 , 00 , 00 , 14 , 00 , 00 , 11 ,11
			DB  11 , 11 , 11 , 11 , 11 , 11 , 11 , 00 , 10 , 10 , 10 , 10 , 10 , 14 , 14 , 14 , 14 , 14 , 00 , 00 , 11 ,11
			DB  11 , 11 , 11 , 11 , 11 , 11 , 11 , 00 , 10 , 10 , 10 , 10 , 10 , 14 , 14 , 14 , 14 , 14 , 00 , 00 , 11 ,11
			DB  11 , 11 , 11 , 11 , 11 , 11 , 00 , 10 , 10 , 10 , 10 , 10 , 10 , 10 , 10 , 10 , 10 , 10 , 00 , 00 , 11 ,11
			DB  11 , 11 , 11 , 11 , 00 , 00 , 10 , 10 , 10 , 10 , 10 , 10 , 10 , 10 , 10 , 00 , 00 , 00 , 11 , 11 , 11 ,11
			DB  11 , 11 , 11 , 11 , 00 , 00 , 10 , 10 , 10 , 10 , 10 , 10 , 10 , 10 , 10 , 00 , 00 , 00 , 11 , 11 , 11 ,11
			DB  11 , 11 , 11 , 11 , 00 , 00 , 10 , 10 , 10 , 10 , 10 , 00 , 00 , 00 , 00 , 10 , 10 , 00 , 11 , 11 , 11 ,11
			DB  11 , 11 , 11 , 00 , 10 , 10 , 10 , 10 , 14 , 14 , 14 , 00 , 00 , 00 , 00 , 00 , 00 , 11 , 11 , 11 , 11 ,11
			DB  11 , 11 , 11 , 00 , 10 , 10 , 10 , 10 , 14 , 14 , 14 , 00 , 00 , 00 , 00 , 11 , 11 , 11 , 11 , 11 , 11 ,11
			DB  11 , 11 , 11 , 00 , 10 , 10 , 10 , 10 , 00 , 00 , 00 , 00 , 00 , 00 , 00 , 11 , 11 , 11 , 11 , 11 , 11 ,11
			DB  11 , 00 , 00 , 10 , 10 , 10 , 10 , 00 , 00 , 00 , 10 , 10 , 10 , 10 , 10 , 00 , 00 , 11 , 11 , 11 , 11 ,11
			DB  11 , 00 , 10 , 10 , 00 , 00 , 00 , 11 , 11 , 11 , 00 , 00 , 00 , 00 , 00 , 11 , 11 , 11 , 11 , 11 , 11 ,11
			DB  11 , 00 , 00 , 00 , 00 , 00 , 00 , 11 , 11 , 11 , 00 , 00 , 00 , 00 , 00 , 11 , 11 , 11 , 11 , 11 , 11 ,11
			DB  11 , 11 , 11 , 11 , 11 , 11 , 11 , 11 , 11 , 11 , 11 , 11 , 11 , 11 , 11 , 11 , 11 , 11 , 11 , 11 , 11 ,11
	PLAYER_ONE_X DW  10			;X position of the first player
	PLAYER_ONE_Y DW 135		;Y position of the first player
	
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
			
			; Draw Players 
			DRAW PLAYER1, PLAYER_ONE_X, PLAYER_ONE_Y, PLAYER_WIDTH, PLAYER_HIGHT    
			
			JMP CHECK_TIME ;after everything checks time again
			
			
		;return the control to the dos
		; control_dos:	
			; MOV AH, 4CH
			; INT 21H
			
	MAIN ENDP
	
	INITIALIZE_SCREEN PROC
	
	mov AH, 06h    ; Scroll up function
	XOR AL, AL     ; Clear entire screen
	XOR CX, CX     ; Upper left corner CH=row, CL=column
	mov CL, 0
	mov CH, 1
	mov DX, 184FH  ; lower right corner DH=row, DL=column 
	mov dl,4fh
	mov dh,13h
	
	mov BH, BGC     ; color 
	INT 10H
	RET
	INITIALIZE_SCREEN  ENDP


	END MAIN 
		






