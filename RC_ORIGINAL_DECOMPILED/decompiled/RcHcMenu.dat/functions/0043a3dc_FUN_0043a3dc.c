/*
 * FUN_0043a3dc at 0043a3dc
 * undefined __register FUN_0043a3dc(int * param_1, int param_2)
 * Address ranges: 0043a3dc-0043a456
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x4246cc slot 42 for TCustomGroupBox. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x4246cc slot 42 for
   TCustomGroupBox. Original bytes unchanged; names and types still inferred. */

void FUN_0043a3dc(int *param_1,int param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  
  puStack_10 = (undefined1 *)0x43a3f4;
  FUN_0041caa8(param_1[0x7c]);
  puStack_14 = &LAB_0043a47a;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  puStack_1c = (undefined1 *)0x43a412;
  puStack_10 = &stack0xfffffffc;
  FUN_0041cfec((int *)param_1[0x7c],param_2);
  puStack_20 = &LAB_0043a457;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  puStack_1c = &stack0xfffffffc;
  FUN_004314c0(param_1[0x7c]);
  (**(code **)(*param_1 + 0xb4))();
  *in_FS_OFFSET = uStack_24;
  puStack_1c = &LAB_0043a45e;
  puStack_20 = (undefined1 *)0x43a456;
  FUN_0041cfec((int *)param_1[0x7c],0);
  return;
}

