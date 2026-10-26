/*
 * FUN_00530934 at 00530934
 * undefined __register FUN_00530934(int param_1, undefined4 param_2, undefined4 * param_3, undefined1 * param_4)
 * Address ranges: 00530934-005309bb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00530934(int param_1,undefined4 param_2,undefined4 *param_3,undefined1 *param_4)

{
  int iVar1;
  VARIANT *pVVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_38;
  undefined1 *puStack_34;
  undefined1 *puStack_30;
  VARIANT local_24;
  undefined4 local_10;
  undefined1 local_9;
  int local_8;
  
  pVVar2 = &local_24;
  for (iVar1 = 4; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)&pVVar2->n1 = *param_3;
    param_3 = param_3 + 1;
    pVVar2 = (VARIANT *)((int)&pVVar2->n1 + 4);
  }
  puStack_30 = (undefined1 *)0x530956;
  local_10 = param_2;
  local_8 = param_1;
  FUN_00405bd4(&local_24);
  puStack_34 = &LAB_005309bc;
  uStack_38 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_38;
  if (*(char *)(local_8 + 0x2d8) == '\0') {
    *param_4 = 2;
    puStack_30 = &stack0xfffffffc;
    local_9 = FUN_00548824(*(int **)(local_8 + 0x2d4),(undefined4 *)&local_24);
  }
  else {
    *param_4 = 1;
    puStack_30 = &stack0xfffffffc;
    local_9 = FUN_00548824(*(int **)(local_8 + 0x2d0),(undefined4 *)&local_24);
  }
  *in_FS_OFFSET = uStack_38;
  puStack_30 = &LAB_005309c3;
  puStack_34 = (undefined1 *)0x5309bb;
  FUN_00405bcc(&local_24);
  return;
}

