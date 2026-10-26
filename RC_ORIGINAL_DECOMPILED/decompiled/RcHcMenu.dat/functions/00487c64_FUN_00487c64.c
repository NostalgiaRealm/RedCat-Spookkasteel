/*
 * FUN_00487c64 at 00487c64
 * undefined __register FUN_00487c64(int * param_1)
 * Address ranges: 00487c64-00487cbe;00487ce0-00487ce5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x47e718 slot 29 for TDBDataSet. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x47e718 slot 29 for
   TDBDataSet. Original bytes unchanged; names and types still inferred. */

void FUN_00487c64(int *param_1)

{
  char cVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  
  puStack_18 = (undefined1 *)0x487c80;
  (**(code **)(*param_1 + 0x268))(param_1,10,1);
  puStack_1c = &LAB_00487cbf;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  puStack_18 = &stack0xfffffffc;
  cVar1 = (**(code **)(*param_1 + 0x60))();
  if (cVar1 == '\0') {
    *(undefined1 *)(param_1[0x8b] + 0x60) = 0;
  }
  FUN_00483c50(param_1[0x8b]);
  *in_FS_OFFSET = uStack_20;
  return;
}

