/*
 * FUN_00526f98 at 00526f98
 * undefined __register FUN_00526f98(int param_1, int param_2)
 * Address ranges: 00526f98-00527008
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x525a70 slot 2 for TAppObjGridColumn. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x525a70 slot 2 for
   TAppObjGridColumn. Original bytes unchanged; names and types still inferred. */

void FUN_00526f98(int param_1,int param_2)

{
  undefined4 extraout_ECX;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  undefined *local_10;
  int local_c;
  int local_8;
  
  puStack_14 = &stack0xfffffffc;
  local_10 = (undefined *)0x0;
  puStack_18 = &LAB_00527009;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  local_c = param_2;
  local_8 = param_1;
  FUN_0051d49c(param_1,param_2);
  FUN_00516b48(local_c,"OwnerDraw",
               CONCAT31((int3)((uint)extraout_ECX >> 8),*(undefined1 *)(local_8 + 0x40)));
  FUN_0048d7b0((char *)(local_8 + 0x44),(int *)&local_10);
  FUN_00516a60(local_c,"AppPropRef",local_10);
  *in_FS_OFFSET = uStack_1c;
  puStack_14 = &LAB_00527010;
  puStack_18 = (undefined1 *)0x527008;
  FUN_00403db0((int *)&local_10);
  return;
}

