/*
 * FUN_0043dca8 at 0043dca8
 * undefined __register FUN_0043dca8(int * param_1, undefined4 param_2)
 * Address ranges: 0043dca8-0043dcff
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0043dca8(int *param_1,undefined4 param_2)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  if ((char)param_2 != (char)param_1[0x16]) {
    iVar4 = *(int *)(param_1[0x10] + 8);
    if (-1 < iVar4 + -1) {
      iVar3 = 0;
      do {
        piVar1 = (int *)FUN_00412384((undefined4 *)param_1[0x10],iVar3);
        uVar2 = FUN_0040320c(piVar1,(int)&LAB_0043d500);
        if ((char)uVar2 != '\0') {
          piVar1 = (int *)FUN_00412384((undefined4 *)param_1[0x10],iVar3);
          (**(code **)(*piVar1 + 0x44))(piVar1,param_2);
        }
        iVar3 = iVar3 + 1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
    *(char *)(param_1 + 0x16) = (char)param_2;
    (**(code **)(*param_1 + 0x30))();
  }
  return;
}

