/*
 * FUN_00511140 at 00511140
 * undefined __register FUN_00511140(int * param_1)
 * Address ranges: 00511140-005111a2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x50fe0c slot 60 for TDaviCustomCurrencyCombo2. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x50fe0c slot 60 for
   TDaviCustomCurrencyCombo2. Original bytes unchanged; names and types still inferred. */

void FUN_00511140(int *param_1)

{
  uint *puVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  uint *local_c;
  int *local_8;
  
  puStack_10 = &stack0xfffffffc;
  local_c = (uint *)0x0;
  puStack_14 = &LAB_005111a3;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  local_8 = param_1;
  FUN_005020ac(param_1);
  *(undefined1 *)(local_8 + 0x9e) = 0;
  FUN_00406a48(&PTR_DAT_00511138,(int *)&local_c);
  puVar1 = local_c;
  iVar2 = FUN_00510e14((int)local_8);
  FUN_004fcaf8(iVar2,puVar1);
  *in_FS_OFFSET = uStack_18;
  puStack_10 = &LAB_005111aa;
  puStack_14 = (undefined1 *)0x5111a2;
  FUN_00403db0((int *)&local_c);
  return;
}

