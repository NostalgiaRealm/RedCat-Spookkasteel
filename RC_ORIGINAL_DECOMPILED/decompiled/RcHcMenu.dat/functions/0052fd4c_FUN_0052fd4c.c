/*
 * FUN_0052fd4c at 0052fd4c
 * undefined __register FUN_0052fd4c(int param_1)
 * Address ranges: 0052fd4c-0052fdd8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x52ea58 slot 58 for TCustomAppObjCombo2. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x52ea58 slot 58 for
   TCustomAppObjCombo2. Original bytes unchanged; names and types still inferred. */

void FUN_0052fd4c(int param_1)

{
  undefined1 *puVar1;
  bool bVar2;
  char cVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_2c;
  undefined1 *puStack_28;
  undefined1 *puStack_24;
  _union_2683 local_1c;
  undefined4 uStack_c;
  int local_8;
  
  puStack_24 = &stack0xfffffffc;
  uStack_c = 0;
  local_1c._12_4_ = 0;
  local_1c._8_4_ = 0;
  local_1c.decVal.Hi32 = 0;
  local_1c._0_4_ = 0;
  puStack_28 = &LAB_0052fdd9;
  uStack_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_2c;
  puVar1 = &stack0xfffffffc;
  local_8 = param_1;
  if (*(char *)(param_1 + 0x250) == '\0') {
    bVar2 = FUN_00501798(param_1);
    puVar1 = puStack_24;
    if (bVar2) goto LAB_0052fdbb;
  }
  puStack_24 = puVar1;
  if (((*(byte *)(local_8 + 0x20) & 8) == 0) && (*(short *)(local_8 + 0x2f2) != 0)) {
    cVar3 = FUN_00530478(local_8,(VARIANT *)&local_1c.n2);
    if (cVar3 != '\0') {
      (**(code **)(local_8 + 0x2f0))(*(undefined4 *)(local_8 + 0x2f4),local_8,&local_1c);
    }
  }
LAB_0052fdbb:
  FUN_00501eec(local_8);
  *in_FS_OFFSET = uStack_2c;
  puStack_24 = &LAB_0052fde0;
  puStack_28 = (undefined1 *)0x52fdd8;
  FUN_00405bcc((VARIANTARG *)&local_1c.n2);
  return;
}

