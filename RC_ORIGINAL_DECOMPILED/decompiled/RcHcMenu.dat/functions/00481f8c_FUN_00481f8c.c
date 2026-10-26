/*
 * FUN_00481f8c at 00481f8c
 * undefined __register FUN_00481f8c(int param_1)
 * Address ranges: 00481f8c-00481fd3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00481f8c(int param_1)

{
  undefined4 uVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  undefined1 local_9;
  int local_8;
  
  puStack_10 = (undefined1 *)0x481f9d;
  local_8 = param_1;
  FUN_00481830(param_1);
  puStack_14 = &LAB_00481fd4;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  puStack_10 = &stack0xfffffffc;
  uVar1 = FUN_0047fc6c(*(undefined4 *)(local_8 + 0x24),0x2000c);
  local_9 = (undefined1)uVar1;
  *in_FS_OFFSET = uStack_18;
  puStack_10 = &LAB_00481fdb;
  puStack_14 = (undefined1 *)0x481fd3;
  FUN_00481854(local_8);
  return;
}

