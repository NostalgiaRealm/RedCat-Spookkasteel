/*
 * FUN_00495ce4 at 00495ce4
 * undefined __register FUN_00495ce4(int * param_1)
 * Address ranges: 00495ce4-00495d4c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x474160 slot 17 for TGenericContainerProp. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x474160 slot 17 for
   TGenericContainerProp. Original bytes unchanged; names and types still inferred. */

void FUN_00495ce4(int *param_1)

{
  char cVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  _union_2683 local_18;
  int *local_8;
  
  puStack_1c = &stack0xfffffffc;
  local_18._12_4_ = 0;
  local_18._8_4_ = 0;
  local_18.decVal.Hi32 = 0;
  local_18._0_4_ = 0;
  puStack_20 = &LAB_00495d4d;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  local_8 = param_1;
  cVar1 = (**(code **)(*param_1 + 0x4c))();
  if (cVar1 == '\0') {
    FUN_00404e28((VARIANT *)(local_8 + 8),(VARIANTARG *)PTR_DAT_00572140);
  }
  else {
    FUN_00496550(local_8,(VARIANT *)&local_18.n2);
    FUN_00404e28((VARIANT *)(local_8 + 8),(VARIANTARG *)&local_18.n2);
  }
  *in_FS_OFFSET = uStack_24;
  puStack_1c = &LAB_00495d54;
  puStack_20 = (undefined1 *)0x495d4c;
  FUN_00405bcc((VARIANTARG *)&local_18.n2);
  return;
}

