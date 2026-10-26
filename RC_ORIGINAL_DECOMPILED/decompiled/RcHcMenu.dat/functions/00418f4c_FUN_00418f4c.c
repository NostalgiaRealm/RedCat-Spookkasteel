/*
 * FUN_00418f4c at 00418f4c
 * undefined __register FUN_00418f4c(int * param_1, char param_2)
 * Address ranges: 00418f4c-00418fd0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00418f4c(int *param_1,char param_2)

{
  int *piVar1;
  int *piVar2;
  byte extraout_DL;
  int iVar3;
  
  piVar1 = FUN_00403434(param_1,param_2);
  FUN_004191b0((int)piVar1);
  if (piVar1[5] != 0) {
    iVar3 = *(int *)(piVar1[5] + 8) + -1;
    if (-1 < iVar3) {
      do {
        piVar2 = (int *)FUN_00412384((undefined4 *)piVar1[5],iVar3);
        (**(code **)(*piVar2 + 0x10))(piVar2,piVar1,1);
        if (piVar1[5] == 0) break;
        iVar3 = iVar3 + -1;
      } while (iVar3 != -1);
    }
    FUN_00403094((int *)piVar1[5]);
    piVar1[5] = 0;
  }
  FUN_00419158(piVar1);
  if ((int *)piVar1[1] != (int *)0x0) {
    FUN_00419120((int *)piVar1[1],(int)piVar1);
  }
  FUN_00412a48(piVar1,extraout_DL & 0xfc);
  if ('\0' < (char)extraout_DL) {
    FUN_00403424(piVar1);
  }
  return;
}

