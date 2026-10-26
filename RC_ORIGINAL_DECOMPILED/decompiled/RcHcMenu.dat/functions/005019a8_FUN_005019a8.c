/*
 * FUN_005019a8 at 005019a8
 * undefined __register FUN_005019a8(int * param_1)
 * Address ranges: 005019a8-00501a13
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_005019a8(int *param_1)

{
  undefined1 *puVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  int local_c;
  int *local_8;
  
  puStack_10 = &stack0xfffffffc;
  local_c = 0;
  puStack_14 = &LAB_00501a14;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  puVar1 = &stack0xfffffffc;
  local_8 = param_1;
  if ((*(byte *)(param_1 + 0x97) & 8) != 0) {
    FUN_00501580(param_1);
    FUN_0050234c(local_8);
    FUN_005017d8((int)local_8,&local_c);
    FUN_00501a20(local_8,local_c);
    puVar1 = puStack_10;
  }
  puStack_10 = puVar1;
  FUN_00437120((int)local_8);
  *in_FS_OFFSET = uStack_18;
  puStack_10 = &LAB_00501a1b;
  puStack_14 = (undefined1 *)0x501a13;
  FUN_00403db0(&local_c);
  return;
}

