/*
 * FUN_004831e4 at 004831e4
 * undefined __register FUN_004831e4(void)
 * Address ranges: 004831e4-004832fe
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004831e4(void)

{
  int *piVar1;
  undefined1 *puVar2;
  undefined1 uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  undefined4 *in_FS_OFFSET;
  bool bVar8;
  int in_stack_00000004;
  undefined4 uStack_2c;
  undefined1 *puStack_28;
  undefined1 *puStack_24;
  int local_14;
  undefined4 local_10;
  char *local_c;
  undefined4 uStack_8;
  
  puStack_24 = &stack0xfffffffc;
  uStack_8 = 0;
  local_c = (char *)0x0;
  local_10 = 0;
  local_14 = 0;
  puStack_28 = &LAB_004832ff;
  uStack_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_2c;
  puVar2 = &stack0xfffffffc;
  if (*(char *)(in_stack_00000004 + -1) == '\0') {
LAB_00483239:
    puStack_24 = puVar2;
    uVar3 = 1;
  }
  else {
    bVar8 = *(int *)(*(int *)(in_stack_00000004 + -8) + 0x8c) == 0;
    puVar2 = &stack0xfffffffc;
    if (!bVar8) {
      FUN_00404140(*(uint **)(*(int *)(in_stack_00000004 + -8) + 0x88),
                   *(uint **)(*(int *)(in_stack_00000004 + -8) + 0x8c));
      puVar2 = puStack_24;
      if (!bVar8) goto LAB_00483239;
    }
    puStack_24 = puVar2;
    uVar3 = 0;
  }
  uStack_8 = CONCAT13(uVar3,(undefined3)uStack_8);
  iVar4 = (**(code **)(**(int **)(*(int *)(in_stack_00000004 + -8) + 0x7c) + 0x14))();
  if (-1 < iVar4 + -1) {
    iVar7 = 0;
    do {
      piVar1 = *(int **)(*(int *)(in_stack_00000004 + -8) + 0x7c);
      (**(code **)(*piVar1 + 0xc))(piVar1,iVar7,&local_10);
      uVar5 = (**(code **)(**(int **)(in_stack_00000004 + -0xc) + 0x50))
                        (*(int **)(in_stack_00000004 + -0xc),local_10);
      if (0x7fffffff < uVar5) {
        FUN_0041387c(*(int **)(*(int *)(in_stack_00000004 + -8) + 0x7c),iVar7,(int *)&local_c);
        iVar6 = FUN_00409758(local_c,"PASSWORD");
        if (iVar6 != 0) {
          iVar6 = FUN_00413b14(*(int **)(in_stack_00000004 + -0xc),local_c);
          if (-1 < iVar6) {
            uStack_8 = CONCAT13(1,(undefined3)uStack_8);
            FUN_00413a08(*(int **)(*(int *)(in_stack_00000004 + -8) + 0x7c),local_c,&local_14);
            FUN_004140d0(*(int **)(in_stack_00000004 + -0xc),local_c,local_14);
          }
        }
      }
      iVar7 = iVar7 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  *in_FS_OFFSET = uStack_2c;
  puStack_24 = &LAB_00483306;
  puStack_28 = (undefined1 *)0x4832fe;
  FUN_00403dd4(&local_14,3);
  return;
}

