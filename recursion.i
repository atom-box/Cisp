#line 1 "RECURSION.cbl"






 IDENTIFICATION DIVISION.
 PROGRAM-ID. RECURSION.
 ENVIRONMENT DIVISION.
 INPUT-OUTPUT SECTION.
 FILE-CONTROL.
 SELECT OPTIONAL CALL-STACK ASSIGN TO "stack.dat" 
 ORGANIZATION IS INDEXED
 ACCESS IS RANDOM
 RECORD KEY IS COMMAND-ID.
 DATA DIVISION.
 FILE SECTION.
 FD CALL-STACK.
 01 CALL-STACK-FILE.
 02 COMMAND-ID PIC 9(5).
 02 COMMAND-NAME PIC X(20).
 02 COMMAND-RESULT PIC X(20).
 02 COMMAND-RESULT-NUMERIC
 REDEFINES COMMAND-RESULT PIC 9(20).
 02 COMMAND-RETURN-ID PIC 9(5).
 02 COMMAND-RETURNS-RESULT PIC X.
 88 COMMAND-RETURNS-RESULT-YES VALUE 'Y' FALSE 'N'.
 WORKING-STORAGE SECTION.
 01 WS-CALL-STACK.
 02 WS-COMMAND-ID PIC 9(5).
 02 WS-COMMAND-NAME PIC X(20).
 02 WS-COMMAND-RESULT PIC X(20).
 02 WS-COMMAND-RESULT-NUMERIC
 REDEFINES WS-COMMAND-RESULT PIC 9(20).
 02 WS-COMMAND-RETURN-ID PIC 9(5).
 02 WS-COMMAND-RETURN-VALUE PIC X(20).
 02 WS-COMMAND-RETURNS-RESULT PIC X.
 88 WS-COMMAND-RETURNS-RESULT-YES VALUE 'Y' FALSE 'N'.
 01 WS-CALL-STACK-EOF PIC A(1).
 01 WS-CALL-STACK-NEXT-ID PIC 9(5).
 01 WS-IS-LAST-EXPRESSION PIC X.
 88 WS-IS-LAST-EXPRESSION-YES VALUE 'Y' FALSE 'N'.
 01 WS-RETURN.
 02 WS-RETURN-VALUE PIC X(20).
 02 WS-RETURN-VALUE-NUMERIC PIC 9(20).



 01 WS-LOG-OPERATION-FLAG PIC X(5).
 01 WS-LOG-RECORD.
 02 WS-LOG-RECORD-FUNCTION-NAME PIC X(40).
 02 WS-LOG-RECORD-MESSAGE PIC X(100).
 LINKAGE SECTION.
 01 LS-RECURSION-FLAG PIC X(30).
 01 LS-RECURSION-OBJECT.
 02 LS-COMMAND-NAME PIC X(20).
 02 LS-COMMAND-RESULT PIC X(20).
 02 LS-COMMAND-RESULT-NUMERIC
 REDEFINES LS-COMMAND-RESULT PIC 9(20).
 02 LS-COMMAND-RETURNS-RESULT PIC X.
 88 LS-COMMAND-RETURNS-RESULT-YES VALUE 'Y' FALSE 'N'.
 PROCEDURE DIVISION USING LS-RECURSION-FLAG LS-RECURSION-OBJECT.
 MAIN-PROCEDURE.
 EVALUATE LS-RECURSION-FLAG
 WHEN "INIT" 
 PERFORM INIT-CALL-STACK-PROCEDURE
 PERFORM LOG-INIT-CALL-STACK
 WHEN "ADD-TO-CALL-STACK" 
 DISPLAY "ADD-TO-CALL-STACK" 
 PERFORM CALL-STACK-ADD-PROCEDURE
 WHEN "REMOVE-FROM-CALL-STACK" 
 DISPLAY "REMOVE-FROM-CALL-STACK" 
 WHEN "PRINT" 
 PERFORM PRINT-CALL-STACK-PROCEDURE
 WHEN "CLOSE" 
 DISPLAY "CLOSED CALL STACK FILE" 
 PERFORM CLOSE-CALL-STACK-PROCEDURE.
 GOBACK.
 LOG-INIT-CALL-STACK.
 MOVE "ADD" TO WS-LOG-OPERATION-FLAG.
 MOVE "RECURSION:INIT" TO WS-LOG-RECORD-FUNCTION-NAME.
 MOVE "Initialized Call Stack" TO WS-LOG-RECORD-MESSAGE.
 CALL 'LOGGER' USING WS-LOG-OPERATION-FLAG WS-LOG-RECORD.
 LOG-ADD-TO-CALL-STACK.

 MOVE 'RECURSION:ADD-TO-CALL-STACK' 
 TO WS-LOG-RECORD-FUNCTION-NAME.
 STRING COMMAND-ID DELIMITED BY SIZE
 COMMAND-NAME DELIMITED BY SIZE
 INTO WS-LOG-RECORD-MESSAGE.
 MOVE "ADD" TO WS-LOG-OPERATION-FLAG.
 CALL 'LOGGER' USING WS-LOG-OPERATION-FLAG WS-LOG-RECORD.
 INIT-CALL-STACK-PROCEDURE.


 OPEN OUTPUT CALL-STACK.
 CLOSE CALL-STACK.

 OPEN I-O CALL-STACK.
 MOVE 1 TO WS-CALL-STACK-NEXT-ID.
 CLOSE-CALL-STACK-PROCEDURE.
 CLOSE CALL-STACK.
 DELETE FILE CALL-STACK.
 CALL-STACK-ADD-PROCEDURE.
 MOVE WS-CALL-STACK-NEXT-ID TO COMMAND-ID.
 MOVE LS-COMMAND-NAME TO COMMAND-NAME.
 MOVE LS-COMMAND-RESULT TO COMMAND-RESULT.
 MOVE LS-COMMAND-RETURNS-RESULT TO COMMAND-RETURNS-RESULT.
 MOVE COMMAND-ID TO COMMAND-RETURN-ID.
 SUBTRACT 1 FROM COMMAND-RETURN-ID.
 WRITE CALL-STACK-FILE.
 PERFORM LOG-ADD-TO-CALL-STACK.
 ADD 1 TO WS-CALL-STACK-NEXT-ID.
 PRINT-CALL-STACK-PROCEDURE.
 DISPLAY "PRINT-CALL-STACK-PROCEDURE".
 DISPLAY "ID    " 
 "NAME                  " 
 "RESULT              " "RESULT (NUMERIC)    " 
 " RETURN ID    ".
 PERFORM VARYING COMMAND-ID FROM 1 BY 1
 UNTIL COMMAND-ID = WS-CALL-STACK-NEXT-ID
 READ CALL-STACK RECORD INTO WS-CALL-STACK
 KEY IS COMMAND-ID
 END-READ
 DISPLAY WS-COMMAND-ID " " WS-COMMAND-NAME
 " " WS-COMMAND-RESULT " " WS-COMMAND-RESULT-NUMERIC " " 
 WS-COMMAND-RETURN-ID " " WS-COMMAND-RETURN-VALUE " " 
 WS-COMMAND-RETURNS-RESULT
 END-PERFORM.


 CALL-STACK-DELETE-PROCEDURE.
 MOVE CALL-STACK-FILE TO WS-CALL-STACK.
 MOVE WS-COMMAND-RESULT TO WS-RETURN-VALUE.
 MOVE WS-COMMAND-RESULT-NUMERIC TO WS-RETURN-VALUE-NUMERIC.

 MOVE 'CALL-STACK-DELETE-PROCEDURE' 
 TO WS-LOG-RECORD-FUNCTION-NAME
 STRING COMMAND-ID DELIMITED BY SPACE
 COMMAND-NAME DELIMITED BY SPACE
 COMMAND-RESULT DELIMITED BY SPACE
 COMMAND-RESULT-NUMERIC DELIMITED BY SPACE
 INTO WS-LOG-RECORD-MESSAGE


 DISPLAY "DELETE".
 PERFORM PRINT-CALL-STACK-PROCEDURE.
 DELETE CALL-STACK RECORD.
 READ CALL-STACK RECORD INTO WS-CALL-STACK
 KEY IS COMMAND-RETURN-ID
 END-READ.








 RECURSION-PROCEDURE.
 MOVE WS-CALL-STACK-NEXT-ID TO WS-COMMAND-ID.

 PERFORM CALL-STACK-ADD-PROCEDURE.

 MOVE-CALL-STACK-TO-WS.
 MOVE COMMAND-ID TO WS-COMMAND-ID.
 MOVE COMMAND-NAME TO WS-COMMAND-NAME.
 MOVE COMMAND-RESULT TO WS-COMMAND-RESULT.

 MOVE COMMAND-RETURN-ID TO WS-COMMAND-RETURN-ID.
 MOVE COMMAND-RETURNS-RESULT TO WS-COMMAND-RETURNS-RESULT.
 MOVE-WS-TO-CALL-STACK.
 MOVE WS-COMMAND-ID TO COMMAND-ID.
 MOVE WS-COMMAND-NAME TO COMMAND-NAME.
 MOVE WS-COMMAND-RESULT TO COMMAND-RESULT.

 MOVE WS-COMMAND-RETURN-ID TO COMMAND-RETURN-ID.
 MOVE WS-COMMAND-RETURNS-RESULT TO COMMAND-RETURNS-RESULT.



 LISP-EVAL-LAST-EXPRESSION.
 SET WS-IS-LAST-EXPRESSION-YES TO TRUE.
 MOVE WS-CALL-STACK-NEXT-ID TO COMMAND-ID.
 SUBTRACT 1 FROM COMMAND-ID.
 READ CALL-STACK
 KEY IS COMMAND-ID
 END-READ.

 MOVE 'LISP-EVAL-LAST-EXPRESSION' 
 TO WS-LOG-RECORD-FUNCTION-NAME.
 STRING COMMAND-ID DELIMITED BY SPACE
 COMMAND-NAME DELIMITED BY SPACE
 COMMAND-RESULT DELIMITED BY SPACE
 COMMAND-RESULT-NUMERIC DELIMITED BY SPACE
 INTO WS-LOG-RECORD-MESSAGE.







 PERFORM MOVE-WS-TO-CALL-STACK

 MOVE 'LISP-EVAL-LAST-EXPRESSION' 
 TO WS-LOG-RECORD-FUNCTION-NAME
 STRING "Updating Record:" DELIMITED BY SIZE
 COMMAND-ID DELIMITED BY SPACE
 COMMAND-NAME DELIMITED BY SPACE
 COMMAND-RESULT DELIMITED BY SPACE
 COMMAND-RESULT-NUMERIC DELIMITED BY SPACE
 INTO WS-LOG-RECORD-MESSAGE


 REWRITE CALL-STACK-FILE
 END-REWRITE

 SET WS-IS-LAST-EXPRESSION-YES TO FALSE.
 END PROGRAM RECURSION.