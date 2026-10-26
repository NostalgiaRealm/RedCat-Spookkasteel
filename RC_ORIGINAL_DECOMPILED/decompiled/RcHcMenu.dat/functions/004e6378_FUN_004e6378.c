/*
 * FUN_004e6378 at 004e6378
 * undefined __register FUN_004e6378(void)
 * Address ranges: 004e6378-004e6467
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004e6378(void)

{
  undefined1 *puVar1;
  char cVar2;
  undefined3 extraout_var;
  int *piVar3;
  int iVar4;
  undefined4 *in_FS_OFFSET;
  bool bVar5;
  int in_stack_00000004;
  undefined4 uStack_118;
  undefined1 *puStack_114;
  undefined1 *puStack_110;
  byte local_10c [256];
  int local_c;
  int local_8;
  
  puStack_110 = &stack0xfffffffc;
  local_c = 0;
  puStack_114 = &LAB_004e6468;
  uStack_118 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_118;
  puVar1 = &stack0xfffffffc;
  if (*(int *)(*(int *)(in_stack_00000004 + -4) + 0x80) == 0) {
    FUN_00402fe0(**(int **)(in_stack_00000004 + -4),local_10c);
    FUN_00403fd4(&local_c,local_10c);
    FUN_00404038(&local_c,(undefined4 *)".DeleteInsertedAppObjs");
    FUN_00403d94(local_c);
    puVar1 = puStack_110;
  }
  puStack_110 = puVar1;
  local_8 = 0;
  while( true ) {
    iVar4 = FUN_0045da14(*(int *)(*(int *)(in_stack_00000004 + -4) + 0x80));
    if (iVar4 <= local_8) break;
    cVar2 = FUN_004e257c(*(int **)(*(int *)(in_stack_00000004 + -4) + 0x80),local_8);
    if (cVar2 == '\x03') {
      piVar3 = (int *)FUN_004e25c4(*(int **)(*(int *)(in_stack_00000004 + -4) + 0x80),local_8);
      FUN_00403094(piVar3);
      FUN_0045d540(*(int **)(*(int *)(in_stack_00000004 + -4) + 0x80),local_8);
    }
    else {
      bVar5 = SCARRY4(local_8,1);
      local_8 = local_8 + 1;
      if (bVar5) {
        thunk_FUN_00402874(CONCAT31(extraout_var,cVar2));
      }
    }
  }
  *in_FS_OFFSET = uStack_118;
  puStack_110 = &LAB_004e646f;
  puStack_114 = (undefined1 *)0x4e6467;
  FUN_00403db0(&local_c);
  return;
}

