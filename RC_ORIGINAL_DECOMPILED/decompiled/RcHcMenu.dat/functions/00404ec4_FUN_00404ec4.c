/*
 * FUN_00404ec4 at 00404ec4
 * undefined __register FUN_00404ec4(undefined4 param_1, undefined4 * param_2, undefined4 param_3)
 * Address ranges: 00404ec4-00404f1f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00404ec4(VARIANTARG *param_1,undefined4 *param_2,undefined4 param_3)

{
  int iVar1;
  VARIANT *pVVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_2c;
  undefined1 *puStack_28;
  undefined1 *puStack_24;
  VARIANT local_14;
  
  pVVar2 = &local_14;
  for (iVar1 = 4; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)&pVVar2->n1 = *param_2;
    param_2 = param_2 + 1;
    pVVar2 = (VARIANT *)((int)&pVVar2->n1 + 4);
  }
  puStack_24 = (undefined1 *)0x404ee7;
  FUN_00405bd4(&local_14);
  puStack_28 = &LAB_00404f20;
  uStack_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_2c;
  puStack_24 = &stack0xfffffffc;
  (*DAT_005733ec)(&local_14);
  FUN_00404f48(param_1,&local_14,param_3);
  *in_FS_OFFSET = uStack_2c;
  puStack_24 = &LAB_00404f27;
  puStack_28 = (undefined1 *)0x404f1f;
  FUN_00405bcc(&local_14);
  return;
}

