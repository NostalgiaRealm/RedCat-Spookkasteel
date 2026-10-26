/*
 * FUN_00415908 at 00415908
 * undefined __register FUN_00415908(int param_1, undefined4 param_2, uint param_3)
 * Address ranges: 00415908-00415979
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00415908(int param_1,undefined4 param_2,uint param_3)

{
  uint extraout_ECX;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  int local_c;
  char local_5;
  
  puStack_14 = &stack0xfffffffc;
  local_c = 0;
  puStack_18 = &LAB_0041597a;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  FUN_0041546c(param_1,6,param_3);
  FUN_0041586c(param_1,(undefined4 *)&local_5,1);
  if (local_5 != '\x01') {
    *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + -1;
    FUN_00416f2c(param_1,&local_c,extraout_ECX);
    FUN_00415400();
  }
  FUN_0041586c(param_1,(undefined4 *)&local_5,1);
  *in_FS_OFFSET = uStack_1c;
  puStack_14 = &LAB_00415981;
  puStack_18 = (undefined1 *)0x415979;
  FUN_00403db0(&local_c);
  return;
}

