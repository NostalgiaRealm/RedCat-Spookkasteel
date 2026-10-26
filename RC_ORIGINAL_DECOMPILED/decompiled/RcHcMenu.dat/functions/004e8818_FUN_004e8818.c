/*
 * FUN_004e8818 at 004e8818
 * undefined __register FUN_004e8818(int * param_1, undefined4 * param_2)
 * Address ranges: 004e8818-004e888b;004e894a-004e8974
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x4e824c slot 13 for TCurrencyProp. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x4e824c slot 13 for
   TCurrencyProp. Original bytes unchanged; names and types still inferred. */

void FUN_004e8818(int *param_1,undefined4 *param_2)

{
  int iVar1;
  VARIANT *pVVar2;
  undefined4 *in_FS_OFFSET;
  float10 in_ST0;
  undefined4 local_16c;
  undefined4 uStack_164;
  undefined1 *puStack_160;
  undefined1 *puStack_15c;
  undefined1 *puStack_158;
  undefined1 *puStack_154;
  undefined1 *puStack_150;
  int local_40 [7];
  VARIANT local_24;
  int local_10;
  undefined1 local_9;
  int *local_8;
  
  local_40[0] = 0;
  local_40[2] = 0;
  local_40[1] = 0;
  local_10 = 0;
  pVVar2 = &local_24;
  for (iVar1 = 4; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)&pVVar2->n1 = *param_2;
    param_2 = param_2 + 1;
    pVVar2 = (VARIANT *)((int)&pVVar2->n1 + 4);
  }
  puStack_150 = (undefined1 *)0x4e8849;
  local_8 = param_1;
  FUN_00405bd4(&local_24);
  puStack_154 = &LAB_004e8975;
  puStack_158 = (undefined1 *)*in_FS_OFFSET;
  *in_FS_OFFSET = &puStack_158;
  puStack_160 = &LAB_004e888c;
  uStack_164 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_164;
  puStack_15c = &stack0xfffffffc;
  puStack_150 = &stack0xfffffffc;
  FUN_00405248(&local_24);
  local_9 = (**(code **)(*local_8 + 0x74))();
  local_16c = (undefined4)(longlong)ROUND(in_ST0);
  *in_FS_OFFSET = local_16c;
  *in_FS_OFFSET = puStack_160;
  puStack_158 = &LAB_004e897c;
  puStack_15c = (undefined1 *)0x4e8964;
  FUN_00403dd4(local_40,3);
  puStack_15c = (undefined1 *)0x4e896c;
  FUN_00405bcc(&local_24);
  puStack_15c = (undefined1 *)0x4e8974;
  FUN_00403db0(&local_10);
  return;
}

