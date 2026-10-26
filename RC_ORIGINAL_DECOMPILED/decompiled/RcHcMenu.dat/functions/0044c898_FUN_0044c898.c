/*
 * FUN_0044c898 at 0044c898
 * undefined __register FUN_0044c898(int * param_1, int param_2)
 * Address ranges: 0044c898-0044c921
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x446c28 slot 42 for TCustomForm. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x446c28 slot 42 for
   TCustomForm. Original bytes unchanged; names and types still inferred. */

void FUN_0044c898(int *param_1,int param_2)

{
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  
  puStack_10 = (undefined1 *)0x44c8b0;
  FUN_0041caa8(param_1[0x88]);
  puStack_14 = &LAB_0044c945;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  puStack_1c = (undefined1 *)0x44c8ce;
  puStack_10 = &stack0xfffffffc;
  FUN_0041cfec((int *)param_1[0x88],param_2);
  puStack_20 = &LAB_0044c922;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  if (param_1[0x8e] == 0) {
    puStack_1c = &stack0xfffffffc;
    FUN_00403270(param_1,extraout_EDX,extraout_ECX);
  }
  else {
    puStack_1c = &stack0xfffffffc;
    (**(code **)(*(int *)param_1[0x8e] + 0x28))();
  }
  *in_FS_OFFSET = uStack_24;
  puStack_1c = &LAB_0044c929;
  puStack_20 = (undefined1 *)0x44c921;
  FUN_0041cfec((int *)param_1[0x88],0);
  return;
}

