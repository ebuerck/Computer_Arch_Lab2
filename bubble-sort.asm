.DATA
ARRAY: .WORD 5, 3, 6, 8, 9, 1, 4, 7, 2, 10

.TEXT
BUBBLE:
    LI      $T0,        0                   # I = 0
    LI      $T1,        0                   # J = 0
OUTERFOR:
    BLE     $S0,        $T0,    END         # IF A <= I, EXIT OUTERFOR.
    

    ADDI    $T0,        $T0,    1           # I = I + 1
    LI      $T1,        0                   # J = 0
    J       INNERFOR
INNERFOR:
    BLE     $S1,        $T1,    OUTERFOR    $ IF B <= J, RESTART OUTERFOR.


    ADDI    $T1,        $T1,    1           # J = J + 1
    J       INNERFOR
END:

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
# $T2 = tmp