/*
 * FUN_00542e40 at 00542e40
 * undefined __register FUN_00542e40(int * param_1, undefined4 * param_2)
 * Address ranges: 00542e40-00542f58;00542f60-00542f75
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00542e40(int *param_1,undefined4 *param_2)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  VARIANT *pVVar5;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_3c;
  undefined1 *puStack_38;
  undefined1 *puStack_34;
  undefined4 uStack_30;
  undefined1 *puStack_2c;
  undefined1 *puStack_28;
  VARIANT local_1c;
  int *local_8;
  
  pVVar5 = &local_1c;
  for (iVar4 = 4; iVar4 != 0; iVar4 = iVar4 + -1) {
    *(undefined4 *)&pVVar5->n1 = *param_2;
    param_2 = param_2 + 1;
    pVVar5 = (VARIANT *)((int)&pVVar5->n1 + 4);
  }
  puStack_28 = (undefined1 *)0x542e5f;
  local_8 = param_1;
  FUN_00405bd4(&local_1c);
  puStack_2c = &LAB_00542f76;
  uStack_30 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_30;
  puStack_34 = (undefined1 *)0x542e75;
  puStack_28 = &stack0xfffffffc;
  iVar4 = FUN_005416e4((int)local_8);
  if (iVar4 == 0) {
LAB_00542f60:
    *in_FS_OFFSET = uStack_30;
    puStack_28 = &LAB_00542f7d;
    puStack_2c = (undefined1 *)0x542f75;
    FUN_00405bcc(&local_1c);
    return;
  }
  puStack_34 = (undefined1 *)0x542e85;
  iVar4 = FUN_00541764((int)local_8);
  if (iVar4 == 0) goto LAB_00542f60;
  *(undefined1 *)(local_8[0x9f] + 0x22c) = 1;
  puStack_38 = &LAB_00542f59;
  uStack_3c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_3c;
  puStack_34 = &stack0xfffffffc;
  if (*(int *)(local_8[0xa0] + 0x214) != 0) {
    puStack_34 = &stack0xfffffffc;
    uVar3 = FUN_00405c08((short *)&local_1c);
    if ((char)uVar3 == '\0') {
      bVar1 = FUN_00405c2c((short *)&local_1c);
      if (!bVar1) {
        cVar2 = FUN_00548824(*(int **)(local_8[0xa0] + 0x214),(undefined4 *)&local_1c);
        if (cVar2 == '\0') {
          FUN_00432744(local_8[0x9f],(uint *)0x0);
          FUN_00494398((int *)local_8[0x8b]);
        }
        else {
          (**(code **)(*local_8 + 200))();
        }
        goto LAB_00542f3b;
      }
    }
  }
  FUN_00432744(local_8[0x9f],(uint *)0x0);
  FUN_00494398((int *)local_8[0x8b]);
LAB_00542f3b:
  *in_FS_OFFSET = uStack_3c;
  *(undefined1 *)(local_8[0x9f] + 0x22c) = 0;
  return;
}

