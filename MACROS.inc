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