/*
 * FUN_004b1e50 at 004b1e50
 * undefined __register FUN_004b1e50(int * param_1, undefined4 * param_2)
 * Address ranges: 004b1e50-004b1ec6;004b1f81-004b1fab
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x4b19f0 slot 13 for TDateProp. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x4b19f0 slot 13 for
   TDateProp. Original bytes unchanged; names and types still inferred. */

void FUN_004b1e50(int *param_1,undefined4 *param_2)

{
  int iVar1;
  VARIANT *pVVar2;
  undefined4 *in_FS_OFFSET;
  float10 in_ST0;
  undefined4 local_170;
  undefined4 uStack_168;
  undefined1 *puStack_164;
  undefined1 *puStack_160;
  undefined1 *puStack_15c;
  undefined1 *puStack_158;
  undefined1 *puStack_154;
  int local_44 [8];
  VARIANT local_24;
  int local_10;
  undefined1 local_9;
  int *local_8;
  
  local_44[0] = 0;
  local_44[3] = 0;
  local_44[2] = 0;
  local_44[1] = 0;
  local_10 = 0;
  pVVar2 = &local_24;
  for (iVar1 = 4; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)&pVVar2->n1 = *param_2;
    param_2 = param_2 + 1;
    pVVar2 = (VARIANT *)((int)&pVVar2->n1 + 4);
  }
  puStack_154 = (undefined1 *)0x4b1e84;
  local_8 = param_1;
  FUN_00405bd4(&local_24);
  puStack_158 = &LAB_004b1fac;
  puStack_15c = (undefined1 *)*in_FS_OFFSET;
  *in_FS_OFFSET = &puStack_15c;
  puStack_164 = &LAB_004b1ec7;
  uStack_168 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_168;
  puStack_160 = &stack0xfffffffc;
  puStack_154 = &stack0xfffffffc;
  FUN_004051ec(&local_24);
  local_9 = (**(code **)(*local_8 + 0x70))();
  local_170 = SUB84((double)in_ST0,0);
  *in_FS_OFFSET = local_170;
  *in_FS_OFFSET = puStack_164;
  puStack_15c = &LAB_004b1fb3;
  puStack_160 = (undefined1 *)0x4b1f9b;
  FUN_00403dd4(local_44,4);
  puStack_160 = (undefined1 *)0x4b1fa3;
  FUN_00405bcc(&local_24);
  puStack_160 = (undefined1 *)0x4b1fab;
  FUN_00403db0(&local_10);
  return;
}

