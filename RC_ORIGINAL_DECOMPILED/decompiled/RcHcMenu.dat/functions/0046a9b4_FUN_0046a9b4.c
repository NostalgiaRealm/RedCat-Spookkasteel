/*
 * FUN_0046a9b4 at 0046a9b4
 * undefined __register FUN_0046a9b4(int * param_1, VARIANTARG * param_2)
 * Address ranges: 0046a9b4-0046a9f6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x4631fc slot 47 for TWideStringField. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x4631fc slot 47 for
   TWideStringField. Original bytes unchanged; names and types still inferred. */

void FUN_0046a9b4(int *param_1,VARIANTARG *param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  BSTR local_8;
  
  puStack_14 = &stack0xfffffffc;
  local_8 = (BSTR)0x0;
  puStack_18 = &LAB_0046a9f7;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  FUN_004052e0(&local_8,param_2);
  FUN_0046a920(param_1,(int)local_8);
  *in_FS_OFFSET = uStack_1c;
  puStack_14 = &LAB_0046a9fe;
  puStack_18 = (undefined1 *)0x46a9f6;
  FUN_00404474(&local_8);
  return;
}

