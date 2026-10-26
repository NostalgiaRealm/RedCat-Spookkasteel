/*
 * FUN_004f6a78 at 004f6a78
 * undefined __register FUN_004f6a78(int * param_1, undefined4 param_2, undefined4 param_3)
 * Address ranges: 004f6a78-004f6aaf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004f6a78(int *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  
  if (*(char *)((int)param_1 + 0x25) != '\0') {
    iVar1 = FUN_00403270(param_1,param_2,param_3);
    if (iVar1 != 0) {
      iVar1 = FUN_00403270(param_1,extraout_EDX,extraout_ECX);
      FUN_004f6a4c((int)param_1,*(char *)(*(int *)(iVar1 + 0x18) + 0x4f));
      *(undefined1 *)((int)param_1 + 0x25) = 1;
    }
  }
  return;
}

