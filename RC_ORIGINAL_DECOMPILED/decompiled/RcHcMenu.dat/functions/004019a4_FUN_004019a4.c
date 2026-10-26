/*
 * FUN_004019a4 at 004019a4
 * undefined __register FUN_004019a4(LPVOID param_1, int param_2, int * param_3)
 * Address ranges: 004019a4-00401ac6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004019a4(LPVOID param_1,int param_2,int *param_3)

{
  int *piVar1;
  uint uVar2;
  LPVOID local_20;
  int local_1c;
  int local_18 [2];
  
  uVar2 = param_2 + 0x3fffU & 0xffffc000;
  piVar1 = DAT_00573468;
LAB_004019ca:
  do {
    for (; ((int **)piVar1 != &DAT_00573468 && (param_1 != (LPVOID)piVar1[2]));
        piVar1 = (int *)*piVar1) {
    }
    if (param_1 == (LPVOID)piVar1[2]) {
      if ((int)uVar2 <= piVar1[3]) goto LAB_00401a77;
      FUN_004016d0((LPVOID)(piVar1[2] + piVar1[3]),uVar2 - piVar1[3],(int *)&local_20);
      if (local_20 != (LPVOID)0x0) {
        FUN_00401568((int *)&DAT_00573468,(int *)&local_20,local_18);
        piVar1 = DAT_00573468;
        if (local_18[0] == 0) {
          FUN_00401748(local_20,local_1c,local_18);
          *param_3 = 0;
          return;
        }
        goto LAB_004019ca;
      }
    }
    FUN_004016d0(param_1,uVar2,(int *)&local_20);
    if (local_20 == (LPVOID)0x0) {
LAB_00401a77:
      if ((param_1 != (LPVOID)piVar1[2]) || (piVar1[3] < (int)uVar2)) {
        *param_3 = 0;
        return;
      }
      FUN_00401800((uint)piVar1[2],uVar2,param_3);
      if (*param_3 == 0) {
        return;
      }
      piVar1[2] = piVar1[2] + param_3[1];
      piVar1[3] = piVar1[3] - param_3[1];
      if (piVar1[3] != 0) {
        return;
      }
      FUN_00401550(piVar1);
      return;
    }
    FUN_00401568((int *)&DAT_00573468,(int *)&local_20,local_18);
    piVar1 = DAT_00573468;
    if (local_18[0] == 0) {
      FUN_00401748(local_20,local_1c,local_18);
      *param_3 = 0;
      return;
    }
  } while( true );
}

