.DATA
ARRAY: .WORD 5, 3, 6, 8, 9, 1, 4, 7, 2, 10

.TEXT
BUBBLE:
    LI      $T0,        0                   # I = 0
    LI      $T1,        0                   # J = 0
    LI      $S0,        10                  # SIZE = 10
    LI      $S1,        ARRAY               # ADDRESS OF ARRAY.
OUTERFOR:
    BLE     $S0,        $T0,    END         # IF SIZE <= I, EXIT OUTERFOR.
    ADDI    $T0,        $T0,    1           # I = I + 1
    LI      $T1,        0                   # J = 0
    J       INNERFOR
INNERFOR:
    BLE     $S0,        $T1,    OUTERFOR    $ IF SIZE <= J, RESTART OUTERFOR.
    LI      $S2,        $S1                 # $S2 = ARRAY
    ADD     $S2,        $S2,    $T0         # $S2 = ARRAY + J
    LI      $S3,        $S1,                # $S3 = ARRAY
    ADD     $S3,        $S3,    $T0         # $S3 = ARRAY + J
    ADDI    $S3,        1                   # $S3 = ARRAY + J + 1
    BEQ     ($S2),      ($S3)   SWAP        # IF (ARRAY[J] > ARRAY[J + 1])
    ADDI    $T1,        $T1,    1           # J = J + 1
    J       INNERFOR
END:
    SYSCALL

SWAP:
    LI      $S4,        $S2                 # TEMP = ARRAY + J
    LI      $S2,        $S3                 # ARRAY + J = ARRAY + J + 1
    LI      $S3,        $S4                 # ARRAY + J + 1 = TEMP
    J       $RA                             # RETURN TO INNERFOR.


# void bubble_sort(int a[], int n) {
#     int tmp = 0;
#     for (int i = 0; i < n; i++) {
#         for (int j = 0; j < n - i - 1; j++) {
#             if (a[j] > a[j + 1]) {
#                 tmp = a[j];
#                 a[j] = a[j + 1];
#                 a[j + 1] = tmp;
#             }
#         }
#     }
# }
# $T0 = i
# $T1 = j
# $S4 = tmp