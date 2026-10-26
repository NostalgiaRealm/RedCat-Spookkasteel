/*
 * FUN_004d4ebc at 004d4ebc
 * undefined __register FUN_004d4ebc(int param_1, undefined4 * param_2)
 * Address ranges: 004d4ebc-004d4f0c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004d4ebc(int param_1,undefined4 *param_2)

{
  int iVar1;
  VARIANT *pVVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_30;
  undefined1 *puStack_2c;
  undefined1 *puStack_28;
  VARIANT local_1c;
  int local_8;
  
  pVVar2 = &local_1c;
  for (iVar1 = 4; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)&pVVar2->n1 = *param_2;
    param_2 = param_2 + 1;
    pVVar2 = (VARIANT *)((int)&pVVar2->n1 + 4);
  }
  puStack_28 = (undefined1 *)0x4d4edb;
  local_8 = param_1;
  FUN_00405bd4(&local_1c);
  puStack_2c = &LAB_004d4f0d;
  uStack_30 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_30;
  puStack_28 = &stack0xfffffffc;
  FUN_00404e28((VARIANT *)(local_8 + 8),&local_1c);
  *in_FS_OFFSET = uStack_30;
  puStack_28 = &LAB_004d4f14;
  puStack_2c = (undefined1 *)0x4d4f0c;
  FUN_00405bcc(&local_1c);
  return;
}

