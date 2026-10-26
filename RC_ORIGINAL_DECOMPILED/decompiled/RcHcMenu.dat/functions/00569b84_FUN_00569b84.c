/*
 * FUN_00569b84 at 00569b84
 * undefined __register FUN_00569b84(int param_1)
 * Address ranges: 00569b84-00569be7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00569b84(int param_1)

{
  undefined4 uVar1;
  
  FUN_0040407c((int *)(param_1 + 0x114),*(undefined4 **)(param_1 + 0x110),(undefined4 *)"Menu.hlp");
  uVar1 = FUN_00409dd0(*(undefined **)(param_1 + 0x114));
  if ((char)uVar1 == '\0') {
    FUN_00403db0((int *)(param_1 + 0x114));
    return;
  }
  FUN_0040407c((int *)(*(int *)PTR_DAT_005723fc + 0x40),*(undefined4 **)(param_1 + 0x114),
               (undefined4 *)">first");
  return;
}

