/*
 * FUN_00533cf8 at 00533cf8
 * undefined __register FUN_00533cf8(int * param_1, undefined4 * param_2)
 * Address ranges: 00533cf8-00533e05
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00533cf8(int *param_1,undefined4 *param_2)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  VARIANT *pVVar6;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_34;
  undefined1 *puStack_30;
  undefined1 *puStack_2c;
  VARIANT local_1c;
  int *local_8;
  
  pVVar6 = &local_1c;
  for (iVar5 = 4; iVar5 != 0; iVar5 = iVar5 + -1) {
    *(undefined4 *)&pVVar6->n1 = *param_2;
    param_2 = param_2 + 1;
    pVVar6 = (VARIANT *)((int)&pVVar6->n1 + 4);
  }
  puStack_2c = (undefined1 *)0x533d18;
  local_8 = param_1;
  FUN_00405bd4(&local_1c);
  puStack_30 = &LAB_00533e06;
  uStack_34 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_34;
  puStack_2c = &stack0xfffffffc;
  uVar3 = FUN_00405c08((short *)&local_1c);
  if ((char)uVar3 == '\0') {
    bVar1 = FUN_00405c2c((short *)&local_1c);
    if (!bVar1) {
      if ((local_8[0xa5] == 0) || (*(char *)(local_8[0xa5] + 0x18) == '\0')) {
        (**(code **)(*local_8 + 0x138))();
      }
      else {
        cVar2 = FUN_00548824((int *)local_8[0xa5],(undefined4 *)&local_1c);
        if (cVar2 == '\0') {
          (**(code **)(*local_8 + 0x138))();
        }
        else {
          piVar4 = (int *)FUN_00549b80(local_8[0xa5]);
          iVar5 = FUN_00403224((int *)local_8[0x8d],(int)&PTR_FUN_00531904);
          FUN_0053282c(iVar5,piVar4);
          piVar4 = (int *)FUN_00533c14((int)local_8);
          iVar5 = FUN_005285b8(piVar4);
          uVar3 = FUN_00523748(iVar5);
          iVar5 = FUN_00403224((int *)local_8[0x8d],(int)&PTR_FUN_00531904);
          *(undefined4 *)(iVar5 + 0x10) = uVar3;
        }
      }
      goto LAB_00533df0;
    }
  }
  (**(code **)(*local_8 + 0x138))();
LAB_00533df0:
  *in_FS_OFFSET = uStack_34;
  puStack_2c = &LAB_00533e0d;
  puStack_30 = (undefined1 *)0x533e05;
  FUN_00405bcc(&local_1c);
  return;
}

