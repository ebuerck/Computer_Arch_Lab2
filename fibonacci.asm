.TEXT
FIBONACCI:
    LI          $S0,            10                          # N = 10
    LI          $S1,            $ZERO                       # FIRST = 0
    LI          $S2,            1                           # SECOND = 1
    LI          $S3,            $ZERO                       # RESULT = 0
    LI          $T0,            $ZERO                       # I = 0               
FOR:
    BLEQ        $T0,            1               IF          # IF (I <= 1)
ELSE:
    ADD         $S3,            $S1,            $S2         # RESULT = FIRST + SECOND
    ADDI        $S1,            $S2,            $ZERO       # FIRST = SECOND
    ADDI        $S2,            $S3             $ZERO       # SECOND = RESULT
END_ELSE:
    ADDI        $T0,            $T0,            1           # I = I + 1
    J           FOR
END:
    SYSCALL

IF:
    ADDI        $S3,            $T0,            $ZERO       # RESULT = I
    J           END_ELSE

#   int n = 10;
#   int first = 0;
#   int second = 1;
#   int result;
#   for (int i = 0; i < n; i++) {
#       if (i <= 1) {
#           result = i;
#       } else {
#           result = first + second;
#           first = second;
#           second = result;
#       }
#   }
#   $S0 = n
#   $S1 = first
#   $S2 = second
#   $S3 = result
#   $T0 = i