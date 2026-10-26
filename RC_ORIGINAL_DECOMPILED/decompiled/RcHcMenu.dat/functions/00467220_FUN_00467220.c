/*
 * FUN_00467220 at 00467220
 * undefined __register FUN_00467220(int param_1, undefined1 param_2)
 * Address ranges: 00467220-004672b0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00467220(int param_1,undefined1 param_2)

{
  int iVar1;
  code *pcVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  int local_14;
  
  local_14 = *(int *)(*(int *)(param_1 + 0x24) + 8);
  if (-1 < local_14 + -1) {
    iVar5 = 0;
    do {
      iVar1 = FUN_00412384(*(undefined4 **)(param_1 + 0x2c),iVar5);
      if (iVar1 != 0) {
        pcVar2 = (code *)FUN_00412384(*(undefined4 **)(param_1 + 0x2c),iVar5);
        uVar3 = FUN_00412384(*(undefined4 **)(param_1 + 0x24),iVar5);
        (*pcVar2)(uVar3,param_1,param_2);
      }
      piVar4 = (int *)FUN_00412384(*(undefined4 **)(param_1 + 0x24),iVar5);
      uVar3 = FUN_0040320c(piVar4,(int)&PTR_FUN_004667a0);
      if ((char)uVar3 != '\0') {
        piVar4 = (int *)FUN_00412384(*(undefined4 **)(param_1 + 0x24),iVar5);
        (**(code **)(*piVar4 + 0xac))(piVar4,0xc,param_2);
      }
      iVar5 = iVar5 + 1;
      local_14 = local_14 + -1;
    } while (local_14 != 0);
  }
  return;
}

