/*
 * FUN_00530514 at 00530514
 * undefined __register FUN_00530514(int param_1, undefined4 * param_2)
 * Address ranges: 00530514-005305ea;005305f2-0053065c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00530514(int param_1,undefined4 *param_2)

{
  int *piVar1;
  uint uVar2;
  undefined4 *puVar3;
  int iVar4;
  VARIANT *pVVar5;
  undefined4 *in_FS_OFFSET;
  bool bVar6;
  undefined4 uStack_44;
  undefined1 *puStack_40;
  int *piStack_3c;
  undefined4 uStack_38;
  undefined1 *puStack_34;
  undefined1 *puStack_30;
  VARIANT local_24;
  int local_10;
  int local_c;
  int local_8;
  
  pVVar5 = &local_24;
  for (iVar4 = 4; iVar4 != 0; iVar4 = iVar4 + -1) {
    *(undefined4 *)&pVVar5->n1 = *param_2;
    param_2 = param_2 + 1;
    pVVar5 = (VARIANT *)((int)&pVVar5->n1 + 4);
  }
  puStack_30 = (undefined1 *)0x530533;
  local_8 = param_1;
  FUN_00405bd4(&local_24);
  puStack_34 = &LAB_0053065d;
  uStack_38 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_38;
  iVar4 = *(int *)(*(int *)(local_8 + 0x2cc) + 8);
  uVar2 = iVar4 - 1;
  puStack_30 = &stack0xfffffffc;
  if (SBORROW4(iVar4,1)) {
    piStack_3c = (int *)0x530557;
    puStack_30 = &stack0xfffffffc;
    uVar2 = thunk_FUN_00402874(uVar2);
  }
  if (-1 < (int)uVar2) {
    local_10 = uVar2 + 1;
    local_c = 0;
    do {
      piStack_3c = (int *)0x53057b;
      iVar4 = FUN_00412384(*(undefined4 **)(local_8 + 0x2cc),local_c);
      bVar6 = (VARIANTARG *)(iVar4 + 8) == (VARIANTARG *)0x0;
      piStack_3c = (int *)0x530586;
      FUN_00405abc((VARIANTARG *)(iVar4 + 8),&local_24);
      if (bVar6) {
        if (*(int *)(local_8 + 0x294) != 0) {
          puStack_40 = &LAB_005305eb;
          uStack_44 = *in_FS_OFFSET;
          *in_FS_OFFSET = &uStack_44;
          *(undefined1 *)(local_8 + 0x2d8) = 1;
          piStack_3c = (int *)&stack0xfffffffc;
          puVar3 = (undefined4 *)FUN_00412384(*(undefined4 **)(local_8 + 0x2cc),local_c);
          FUN_00548cf4(*(int **)(local_8 + 0x294),*puVar3,1);
          *in_FS_OFFSET = uStack_44;
          *(undefined1 *)(local_8 + 0x2d8) = 0;
          return;
        }
        piStack_3c = (int *)0x530603;
        puVar3 = (undefined4 *)FUN_00412384(*(undefined4 **)(local_8 + 0x2cc),local_c);
        piStack_3c = (int *)*puVar3;
        puStack_40 = (undefined1 *)0x53061a;
        iVar4 = FUN_00403224(*(int **)(local_8 + 0x234),(int)&PTR_FUN_00531904);
        piVar1 = piStack_3c;
        piStack_3c = (int *)0x530620;
        FUN_0053282c(iVar4,piVar1);
        piStack_3c = (int *)0x530634;
        iVar4 = FUN_00403224(*(int **)(local_8 + 0x234),(int)&PTR_FUN_00531904);
        *(undefined4 *)(iVar4 + 0x10) = 0xffffffff;
      }
      local_c = local_c + 1;
      local_10 = local_10 + -1;
    } while (local_10 != 0);
  }
  *in_FS_OFFSET = uStack_38;
  puStack_30 = &LAB_00530664;
  puStack_34 = (undefined1 *)0x53065c;
  FUN_00405bcc(&local_24);
  return;
}

