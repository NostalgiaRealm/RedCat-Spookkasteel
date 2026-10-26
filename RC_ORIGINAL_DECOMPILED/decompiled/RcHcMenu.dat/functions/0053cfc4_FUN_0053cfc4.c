/*
 * FUN_0053cfc4 at 0053cfc4
 * undefined __register FUN_0053cfc4(void)
 * Address ranges: 0053cfc4-0053d12d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0053cfc4(void)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 extraout_ECX;
  undefined4 *in_FS_OFFSET;
  int in_stack_00000004;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  byte bVar7;
  
  bVar7 = *(byte *)(*(int *)(in_stack_00000004 + -4) + 0x42);
  puStack_18 = (undefined1 *)0x53cfdf;
  piVar2 = (int *)FUN_00549b80(*(int *)(in_stack_00000004 + -4));
  puStack_18 = (undefined1 *)0x53cff8;
  FUN_004d2358(*(int **)(*(int *)(in_stack_00000004 + -4) + 0x34),piVar2,
               CONCAT31((int3)((uint)extraout_ECX >> 8),
                        *(undefined1 *)(*(int *)(in_stack_00000004 + -4) + 0x41)),bVar7);
  if (*(char *)(*(int *)(in_stack_00000004 + -4) + 0x10) == '\0') {
    *(undefined4 *)(*(int *)(in_stack_00000004 + -4) + 0x8c) = 0x80000000;
    *(undefined1 *)(*(int *)(in_stack_00000004 + -4) + 0x85) = 0;
  }
  puStack_1c = &LAB_0053d12e;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  puStack_18 = &stack0xfffffffc;
  FUN_0054b510(*(uint *)(in_stack_00000004 + -4));
  piVar2 = (int *)FUN_0049206c(*(int **)(*(int *)(in_stack_00000004 + -4) + 0x1c));
  piVar3 = (int *)FUN_0049206c(*(int **)(*(int *)(in_stack_00000004 + -4) + 0x1c));
  piVar4 = (int *)FUN_00549b80(*(int *)(in_stack_00000004 + -4));
  FUN_00493768(piVar2,piVar4);
  uVar5 = (**(code **)(**(int **)(in_stack_00000004 + -4) + 4))();
  FUN_0053d2c0(*(int **)(in_stack_00000004 + -4));
  cVar1 = (**(code **)(**(int **)(*(int *)(in_stack_00000004 + -4) + 0x88) + 0x3c))();
  if (cVar1 != '\0') {
    FUN_0054823c(*(int **)(in_stack_00000004 + -4),uVar5);
    FUN_0054a2f8(*(int **)(in_stack_00000004 + -4),(int)piVar3);
    iVar6 = FUN_00494814(piVar2,piVar3,*(uint *)(*(int *)(in_stack_00000004 + -4) + 0x3c),8);
    if (iVar6 == 0) {
      FUN_0053c6e8(*(int **)(in_stack_00000004 + -4),piVar2,'\x01');
    }
    else {
      FUN_0053ce30(*(int **)(in_stack_00000004 + -4),piVar2,'\x01');
    }
  }
  *in_FS_OFFSET = uStack_20;
  puStack_18 = &LAB_0053d135;
  puStack_1c = (undefined1 *)0x53d11d;
  FUN_0054b528(*(int **)(in_stack_00000004 + -4));
  puStack_1c = (undefined1 *)0x53d125;
  FUN_00403094(piVar2);
  puStack_1c = (undefined1 *)0x53d12d;
  FUN_00403094(piVar3);
  return;
}

