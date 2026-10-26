/*
 * FUN_00496860 at 00496860
 * undefined __register FUN_00496860(int * param_1, undefined4 * param_2)
 * Address ranges: 00496860-004968ba
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x474160 slot 14 for TGenericContainerProp. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x474160 slot 14 for
   TGenericContainerProp. Original bytes unchanged; names and types still inferred. */

void FUN_00496860(int *param_1,undefined4 *param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  _union_2683 local_1c;
  undefined4 *local_c;
  int *local_8;
  
  local_1c._12_4_ = 0;
  local_1c._8_4_ = 0;
  local_1c.decVal.Hi32 = 0;
  local_1c._0_4_ = 0;
  puStack_20 = (undefined1 *)0x496879;
  local_c = param_2;
  local_8 = param_1;
  FUN_004041e4((int)param_2);
  puStack_24 = &LAB_004968bb;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  puStack_20 = &stack0xfffffffc;
  FUN_004054ac((VARIANTARG *)&local_1c.n2,local_c);
  FUN_004964d0(local_8,(undefined4 *)&local_1c);
  *in_FS_OFFSET = uStack_28;
  puStack_20 = &LAB_004968c2;
  puStack_24 = (undefined1 *)0x4968b2;
  FUN_00405bcc((VARIANTARG *)&local_1c.n2);
  puStack_24 = (undefined1 *)0x4968ba;
  FUN_00403db0((int *)&local_c);
  return;
}

