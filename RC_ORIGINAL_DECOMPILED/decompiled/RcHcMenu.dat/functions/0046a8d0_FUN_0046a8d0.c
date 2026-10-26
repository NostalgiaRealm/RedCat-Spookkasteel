/*
 * FUN_0046a8d0 at 0046a8d0
 * undefined __register FUN_0046a8d0(int * param_1, LPCSTR param_2)
 * Address ranges: 0046a8d0-0046a912
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x4631fc slot 40 for TWideStringField. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x4631fc slot 40 for
   TWideStringField. Original bytes unchanged; names and types still inferred. */

void FUN_0046a8d0(int *param_1,LPCSTR param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  int local_8;
  
  puStack_14 = &stack0xfffffffc;
  local_8 = 0;
  puStack_18 = &LAB_0046a913;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  FUN_004045b8((BSTR)&local_8,param_2);
  FUN_0046a920(param_1,local_8);
  *in_FS_OFFSET = uStack_1c;
  puStack_14 = &LAB_0046a91a;
  puStack_18 = (undefined1 *)0x46a912;
  FUN_00404474(&local_8);
  return;
}

