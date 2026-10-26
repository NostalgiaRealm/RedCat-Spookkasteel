/*
 * FUN_00580b00 at 00580b00
 * undefined FUN_00580b00(void)
 * Address ranges: 00580b00-00580b4a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00580b00(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  int iVar1;
  int iVar2;
  
  for (; param_1 != param_2; param_1 = param_1 + 2) {
    *param_1 = *param_3;
    iVar1 = param_1[1];
    if (iVar1 != param_3[1]) {
      if ((iVar1 != 0) &&
         (iVar2 = *(int *)(iVar1 + 0x14) + -1, *(int *)(iVar1 + 0x14) = iVar2, iVar2 == 0)) {
        FUN_005abfc0(0);
      }
      iVar1 = param_3[1];
      param_1[1] = iVar1;
      if (iVar1 != 0) {
        *(int *)(iVar1 + 0x14) = *(int *)(iVar1 + 0x14) + 1;
      }
    }
  }
  return;
}

