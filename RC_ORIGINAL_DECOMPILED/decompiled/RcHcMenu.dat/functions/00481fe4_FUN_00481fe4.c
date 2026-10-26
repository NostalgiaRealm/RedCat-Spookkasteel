/*
 * FUN_00481fe4 at 00481fe4
 * undefined __register FUN_00481fe4(int param_1, undefined1 param_2)
 * Address ranges: 00481fe4-00482037
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00481fe4(int param_1,undefined1 param_2)

{
  undefined4 uVar1;
  uint uVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  undefined1 local_9;
  int local_8;
  
  puStack_10 = (undefined1 *)0x481ff8;
  local_9 = param_2;
  local_8 = param_1;
  FUN_00481830(param_1);
  puStack_14 = &LAB_00482038;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  uVar1 = *(undefined4 *)(local_8 + 0x24);
  puStack_10 = &stack0xfffffffc;
  uVar2 = thunk_FUN_00478ffa(uVar1);
  FUN_0047fe48(uVar2);
  *in_FS_OFFSET = uVar1;
  FUN_00481854(local_8);
  return;
}

