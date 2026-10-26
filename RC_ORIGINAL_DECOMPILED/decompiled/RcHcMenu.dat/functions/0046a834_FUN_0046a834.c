/*
 * FUN_0046a834 at 0046a834
 * undefined __register FUN_0046a834(int * param_1, int * param_2)
 * Address ranges: 0046a834-0046a876
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x4631fc slot 22 for TWideStringField. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x4631fc slot 22 for
   TWideStringField. Original bytes unchanged; names and types still inferred. */

void FUN_0046a834(int *param_1,int *param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  LPCWSTR local_8;
  
  puStack_14 = &stack0xfffffffc;
  local_8 = (LPCWSTR)0x0;
  puStack_18 = &LAB_0046a877;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  FUN_0046a8c0(param_1,(int)&local_8);
  FUN_00403ff8(param_2,local_8);
  *in_FS_OFFSET = uStack_1c;
  puStack_14 = &LAB_0046a87e;
  puStack_18 = (undefined1 *)0x46a876;
  FUN_00404474(&local_8);
  return;
}

