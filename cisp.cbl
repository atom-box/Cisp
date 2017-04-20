      ******************************************************************
      * Author: Lauryn Brown
      * Date: 2017
      * Purpose: COBOL Common Lisp Interpreter
      * Tectonics: cobc
      ******************************************************************
       IDENTIFICATION DIVISION.
       PROGRAM-ID. CISP.
       ENVIRONMENT DIVISION.
       INPUT-OUTPUT SECTION.
       FILE-CONTROL.

       DATA DIVISION.
       FILE SECTION.

       WORKING-STORAGE SECTION.

      *****************************************
      *    WS Shared with LOGGER SubRoutine
      *****************************************
           01 WS-LOG-OPERATION-FLAG PIC X(5).
           01 WS-LOG-RECORD.
               02 WS-LOG-RECORD-FUNCTION-NAME PIC X(40).
               02 WS-LOG-RECORD-MESSAGE PIC X(100).
      *****************************************
      *    WS Shared with TOKENIZER SubRoutine
      *****************************************

      *****************************************
      *    WS Shared with LISP SubRoutine
      *****************************************

      *****************************************
      *    WS Shared with RECURSION SubRoutine
      *****************************************

       PROCEDURE DIVISION.
       MAIN-PROCEDURE.
            DISPLAY "CISP".
            MOVE "OPEN" TO WS-LOG-OPERATION-FLAG.
            CALL 'LOGGER' USING WS-LOG-OPERATION-FLAG, WS-LOG-RECORD.
            MOVE "ADD" TO WS-LOG-OPERATION-FLAG.
            MOVE "TOKENIZER" TO WS-LOG-RECORD-FUNCTION-NAME.
            MOVE "Starting Tokenizer" TO WS-LOG-RECORD-MESSAGE.
            CALL 'LOGGER' USING WS-LOG-OPERATION-FLAG, WS-LOG-RECORD.

            CALL "TOKENIZER".



            MOVE "CLOSE" TO WS-LOG-OPERATION-FLAG.
            CALL 'LOGGER' USING WS-LOG-OPERATION-FLAG, WS-LOG-RECORD.
      *     PERFORM LOG-INIT-PROCEDURE.
      *     PERFORM FILE-HANDLING-PROCEDURE.
      *     MOVE "MAIN-PROCEDURE" TO WS-LOG-RECORD-FUNCTION-NAME.
      *     MOVE "COMPLETED FILE-HANDLING-PROCEDURE"
      *       TO WS-LOG-RECORD-MESSAGE.
      *     PERFORM LOG-WRITE-TO-PROCEDURE.
      *     PERFORM LISP-PROCEDURE.
      *     MOVE "MAIN-PROCEDURE" TO WS-LOG-RECORD-FUNCTION-NAME.
      *     MOVE "COMPLETED LISP-PROCEDURE"
      *       TO WS-LOG-RECORD-MESSAGE.
      *     PERFORM LOG-WRITE-TO-PROCEDURE.
      *     STOP RUN.
           GOBACK.
       WRITE-LOGGER-PROCEDURE.


       LISP-PROCEDURE.
      *     PERFORM UNSTRING-LISP-PROCEDURE.
      *******log completion
      *     MOVE "LISP-PROCEDURE" TO WS-LOG-RECORD-FUNCTION-NAME.
      *     MOVE "COMPLETED UNSTRING-LISP-PROCEDURE"
      *       TO WS-LOG-RECORD-MESSAGE.
      *     PERFORM LOG-WRITE-TO-PROCEDURE.
      ******
      *     PERFORM EVALUATE-LISP-PRCEDURE.
       END PROGRAM CISP.
