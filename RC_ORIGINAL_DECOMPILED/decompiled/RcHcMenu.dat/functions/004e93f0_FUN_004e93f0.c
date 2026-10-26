/*
 * FUN_004e93f0 at 004e93f0
 * undefined __register FUN_004e93f0(int * param_1, undefined4 * param_2)
 * Address ranges: 004e93f0-004e9467;004e9561-004e958b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x4e9250 slot 13 for TBooleanProp. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x4e9250 slot 13 for
   TBooleanProp. Original bytes unchanged; names and types still inferred. */

void FUN_004e93f0(int *param_1,undefined4 *param_2)

{
  bool bVar1;
  int iVar2;
  VARIANT *pVVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_174;
  undefined1 *puStack_170;
  undefined1 *puStack_16c;
  undefined4 uStack_168;
  undefined1 *puStack_164;
  undefined1 *puStack_160;
  int local_50 [10];
  int local_28;
  VARIANT local_24;
  undefined1 local_9;
  int *local_8;
  
  local_28 = 0;
  local_50[3] = 0;
  local_50[0] = 0;
  local_50[2] = 0;
  local_50[1] = 0;
  local_50[5] = 0;
  local_50[4] = 0;
  pVVar3 = &local_24;
  for (iVar2 = 4; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(undefined4 *)&pVVar3->n1 = *param_2;
    param_2 = param_2 + 1;
    pVVar3 = (VARIANT *)((int)&pVVar3->n1 + 4);
  }
  puStack_160 = (undefined1 *)0x4e942a;
  local_8 = param_1;
  FUN_00405bd4(&local_24);
  puStack_164 = &LAB_004e958c;
  uStack_168 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_168;
  puStack_170 = &LAB_004e9468;
  uStack_174 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_174;
  puStack_16c = &stack0xfffffffc;
  puStack_160 = &stack0xfffffffc;
  bVar1 = FUN_004051b8(&local_24);
  local_9 = (**(code **)(*local_8 + 0x70))(local_8,bVar1);
  *in_FS_OFFSET = uStack_174;
  *in_FS_OFFSET = uStack_168;
  puStack_160 = &LAB_004e9593;
  puStack_164 = (undefined1 *)0x4e957b;
  FUN_00403dd4(local_50,6);
  puStack_164 = (undefined1 *)0x4e9583;
  FUN_00403db0(&local_28);
  puStack_164 = (undefined1 *)0x4e958b;
  FUN_00405bcc(&local_24);
  return;
}

