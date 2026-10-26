/*
 * FUN_00487ae0 at 00487ae0
 * undefined __register FUN_00487ae0(int * param_1)
 * Address ranges: 00487ae0-00487b3c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x47e718 slot 24 for TDBDataSet. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x47e718 slot 24 for
   TDBDataSet. Original bytes unchanged; names and types still inferred. */

void FUN_00487ae0(int *param_1)

{
  undefined1 uVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  
  puStack_14 = (undefined1 *)0x487afc;
  uVar1 = (**(code **)(*param_1 + 0x268))(param_1,10,1);
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  *in_FS_OFFSET = uStack_1c;
  puStack_14 = &LAB_00487b44;
  uStack_18 = 0x487b3c;
  (**(code **)(*param_1 + 0x268))(param_1,10,CONCAT31((int3)((uint)&stack0xfffffffc >> 8),uVar1));
  return;
}

