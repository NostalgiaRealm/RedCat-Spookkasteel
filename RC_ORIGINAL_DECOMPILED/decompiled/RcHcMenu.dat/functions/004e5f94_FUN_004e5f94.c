/*
 * FUN_004e5f94 at 004e5f94
 * undefined __register FUN_004e5f94(void)
 * Address ranges: 004e5f94-004e60cf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004e5f94(void)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  undefined1 *puVar4;
  char cVar5;
  undefined4 *in_FS_OFFSET;
  int in_stack_00000004;
  char *pcStack_12c;
  undefined4 uStack_120;
  undefined1 *puStack_11c;
  undefined1 *puStack_118;
  int local_114;
  int local_110;
  byte local_10c [256];
  int local_c;
  int local_8;
  
  puStack_118 = &stack0xfffffffc;
  local_110 = 0;
  local_114 = 0;
  local_8 = 0;
  local_c = 0;
  puStack_11c = &LAB_004e60d0;
  uStack_120 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_120;
  puVar4 = &stack0xfffffffc;
  if (*(int *)(*(int *)(in_stack_00000004 + -4) + 0x34) == 0) {
    FUN_00402fe0(**(int **)(in_stack_00000004 + -4),local_10c);
    FUN_00403fd4(&local_c,local_10c);
    pcStack_12c = " Connection is nil";
    FUN_004040f0(&local_8,3);
    FUN_00403d94(local_8);
    puVar4 = puStack_118;
  }
  puStack_118 = puVar4;
  cVar5 = (**(code **)(**(int **)(*(int *)(in_stack_00000004 + -4) + 0x34) + 0x44))();
  if (cVar5 == '\0') {
    FUN_00402fe0(**(int **)(in_stack_00000004 + -4),local_10c);
    FUN_00403fd4(&local_114,local_10c);
    FUN_004040f0(&local_110,3);
    FUN_00403d94(local_110);
  }
  uVar3 = *(uint *)(in_stack_00000004 + -4);
  piVar1 = (int *)(uVar3 + 200);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + 1;
  if (SCARRY4(iVar2,1)) {
    thunk_FUN_00402874(uVar3);
  }
  FUN_004e5994();
  FUN_004e5a64();
  *in_FS_OFFSET = pcStack_12c;
  FUN_00403dd4(&local_114,2);
  FUN_00403dd4(&local_c,2);
  return;
}

