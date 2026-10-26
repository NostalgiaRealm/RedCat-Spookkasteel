/*
 * FUN_0046a404 at 0046a404
 * undefined __register FUN_0046a404(undefined4 param_1, VARIANTARG * param_2, undefined4 param_3)
 * Address ranges: 0046a404-0046a459
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x463020 slot 23 for TStringField. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x463020 slot 23 for
   TStringField. Original bytes unchanged; names and types still inferred. */

void FUN_0046a404(undefined4 param_1,VARIANTARG *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  undefined4 *local_8;
  
  puStack_14 = &stack0xfffffffc;
  local_8 = (undefined4 *)0x0;
  puStack_18 = &LAB_0046a45a;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  uVar1 = FUN_0046a510(param_1,(int *)&local_8,param_3);
  if ((char)uVar1 == '\0') {
    FUN_00404e28(param_2,(VARIANTARG *)PTR_DAT_00572068);
  }
  else {
    FUN_004054ac(param_2,local_8);
  }
  *in_FS_OFFSET = uStack_1c;
  puStack_14 = &LAB_0046a461;
  puStack_18 = (undefined1 *)0x46a459;
  FUN_00403db0((int *)&local_8);
  return;
}

