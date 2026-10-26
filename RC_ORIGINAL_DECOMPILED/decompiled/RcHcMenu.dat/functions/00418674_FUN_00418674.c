/*
 * FUN_00418674 at 00418674
 * undefined __register FUN_00418674(void)
 * Address ranges: 00418674-0041885f;00418867-00418881
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00418674(void)

{
  bool bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  uint uVar5;
  int extraout_ECX;
  int iVar6;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 *in_FS_OFFSET;
  int in_stack_00000004;
  undefined4 uStackY_34;
  undefined1 *puStackY_30;
  undefined1 *puVar7;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  int local_1c;
  int local_18;
  char *local_14;
  undefined4 *local_10;
  undefined4 local_c;
  int *local_8;
  
  puStack_20 = &stack0xfffffffc;
  puVar7 = &stack0xfffffffc;
  local_8 = (int *)0x0;
  local_c = 0;
  local_10 = (undefined4 *)0x0;
  local_14 = (char *)0x0;
  local_18 = 0;
  local_1c = 0;
  puStack_24 = &LAB_00418882;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  local_8 = (int *)FUN_0040f9f8(*(int **)(in_stack_00000004 + -8),
                                *(undefined4 **)(in_stack_00000004 + -0xc));
  if (local_8 == (int *)0x0) {
    puStackY_30 = (undefined1 *)0x4186ad;
    bVar1 = FUN_00418528();
    if (!bVar1) {
      puStackY_30 = (undefined1 *)0x4186bb;
      iVar6 = in_stack_00000004;
      FUN_00417fe0();
      FUN_00418ed0(*(int *)(in_stack_00000004 + -4),0xd,iVar6);
      goto LAB_00418867;
    }
  }
  uVar2 = FUN_0040320c(local_8,(int)&PTR_FUN_0041088c);
  if ((char)uVar2 != '\0') {
    uVar2 = FUN_0040320c(local_8,(int)&PTR_FUN_00411384);
    if ((char)uVar2 == '\0') {
      uVar2 = FUN_0040320c(local_8,(int)&PTR_FUN_004109dc);
      if ((char)uVar2 == '\0') {
        local_c = *(undefined4 *)(*(int *)(in_stack_00000004 + -4) + 0x20);
        FUN_00403e48((int *)&local_10,*(int *)(*(int *)(in_stack_00000004 + -4) + 0x2c));
        puStackY_30 = &LAB_00418860;
        uStackY_34 = *in_FS_OFFSET;
        *in_FS_OFFSET = &uStackY_34;
        FUN_00403fd4(&local_1c,(byte *)(*(int *)(in_stack_00000004 + -0xc) + 0x1a));
        FUN_004040f0((int *)(*(int *)(in_stack_00000004 + -4) + 0x2c),3);
        uVar2 = FUN_00417f94();
        if ((char)uVar2 != '\0') {
          uVar5 = FUN_0040f9f8(*(int **)(*(int *)(in_stack_00000004 + -4) + 0x20),
                               *(undefined4 **)(in_stack_00000004 + -0xc));
          *(uint *)(*(int *)(in_stack_00000004 + -4) + 0x20) = uVar5;
        }
        FUN_00417ecc(*(undefined4 *)(in_stack_00000004 + -4),local_8);
        *in_FS_OFFSET = &DAT_00418898;
        *(undefined4 *)(*(int *)(in_stack_00000004 + -4) + 0x20) = local_c;
        FUN_00403e04((int *)(*(int *)(in_stack_00000004 + -4) + 0x2c),local_10);
        return;
      }
      puStackY_30 = (undefined1 *)0x41875f;
      iVar6 = in_stack_00000004;
      uVar3 = FUN_00417f94();
      uVar2 = extraout_EDX;
      if ((char)uVar3 != '\0') {
        puVar4 = (undefined4 *)
                 FUN_0040f9f8(*(int **)(*(int *)(in_stack_00000004 + -4) + 0x20),
                              *(undefined4 **)(in_stack_00000004 + -0xc));
        uVar3 = FUN_004120a4(local_8,puVar4);
        iVar6 = extraout_ECX;
        uVar2 = extraout_EDX_00;
        if ((char)uVar3 != '\0') goto LAB_00418867;
      }
      puStackY_30 = (undefined1 *)0x418796;
      FUN_00418134((int)local_8,uVar2,iVar6,in_stack_00000004);
    }
    else {
      puStackY_30 = (undefined1 *)0x4186fc;
      bVar1 = FUN_00418528();
      if (!bVar1) {
        puStackY_30 = (undefined1 *)0x418711;
        FUN_004185b8((int)local_8,&local_18,puVar7,(int)&stack0xfffffffc);
        FUN_00403e48((int *)&local_14,local_18);
        if (local_14 != (char *)0x0) {
          puStackY_30 = (undefined1 *)0x418730;
          FUN_00417fe0();
          FUN_00417ce8(*(int *)(in_stack_00000004 + -4),local_14);
        }
      }
    }
  }
LAB_00418867:
  *in_FS_OFFSET = uStack_28;
  puStack_20 = &LAB_00418889;
  puStack_24 = (undefined1 *)0x418881;
  FUN_00403dd4(&local_1c,4);
  return;
}

