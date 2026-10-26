/*
 * FUN_004964d0 at 004964d0
 * undefined __register FUN_004964d0(int * param_1, undefined4 * param_2)
 * Address ranges: 004964d0-0049651d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004964d0(int *param_1,undefined4 *param_2)

{
  int iVar1;
  VARIANT *pVVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_30;
  undefined1 *puStack_2c;
  undefined1 *puStack_28;
  VARIANT local_1c;
  int *local_8;
  
  pVVar2 = &local_1c;
  for (iVar1 = 4; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)&pVVar2->n1 = *param_2;
    param_2 = param_2 + 1;
    pVVar2 = (VARIANT *)((int)&pVVar2->n1 + 4);
  }
  puStack_28 = (undefined1 *)0x4964ef;
  local_8 = param_1;
  FUN_00405bd4(&local_1c);
  puStack_2c = &LAB_0049651e;
  uStack_30 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_30;
  puStack_28 = &stack0xfffffffc;
  FUN_00496328(local_8,(undefined4 *)&local_1c);
  *in_FS_OFFSET = uStack_30;
  puStack_28 = &LAB_00496525;
  puStack_2c = (undefined1 *)0x49651d;
  FUN_00405bcc(&local_1c);
  return;
}

