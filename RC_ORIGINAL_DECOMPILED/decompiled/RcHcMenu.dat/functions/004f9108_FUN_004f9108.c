/*
 * FUN_004f9108 at 004f9108
 * undefined __register FUN_004f9108(int * param_1, undefined4 * param_2)
 * Address ranges: 004f9108-004f917a;004f9210-004f923f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x4f8ee4 slot 13 for TLookupProp. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x4f8ee4 slot 13 for
   TLookupProp. Original bytes unchanged; names and types still inferred. */

void FUN_004f9108(int *param_1,undefined4 *param_2)

{
  int iVar1;
  VARIANT *pVVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_160;
  undefined1 *puStack_15c;
  undefined1 *puStack_158;
  undefined4 uStack_154;
  undefined1 *puStack_150;
  undefined1 *puStack_14c;
  int local_3c [4];
  int local_2c;
  int local_28;
  VARIANT local_24;
  undefined1 local_9;
  int *local_8;
  
  local_2c = 0;
  local_3c[0] = 0;
  local_3c[1] = 0;
  local_28 = 0;
  pVVar2 = &local_24;
  for (iVar1 = 4; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)&pVVar2->n1 = *param_2;
    param_2 = param_2 + 1;
    pVVar2 = (VARIANT *)((int)&pVVar2->n1 + 4);
  }
  puStack_14c = (undefined1 *)0x4f9139;
  local_8 = param_1;
  FUN_00405bd4(&local_24);
  puStack_150 = &LAB_004f9240;
  uStack_154 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_154;
  puStack_15c = &LAB_004f917b;
  uStack_160 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_160;
  puStack_158 = &stack0xfffffffc;
  puStack_14c = &stack0xfffffffc;
  FUN_004052a4(&local_28,&local_24);
  local_9 = (**(code **)(*local_8 + 0x6c))(local_8,local_28);
  *in_FS_OFFSET = uStack_160;
  *in_FS_OFFSET = uStack_154;
  puStack_14c = &LAB_004f9247;
  puStack_150 = (undefined1 *)0x4f922a;
  FUN_00403dd4(local_3c,2);
  puStack_150 = (undefined1 *)0x4f9237;
  FUN_00403dd4(&local_2c,2);
  puStack_150 = (undefined1 *)0x4f923f;
  FUN_00405bcc(&local_24);
  return;
}

