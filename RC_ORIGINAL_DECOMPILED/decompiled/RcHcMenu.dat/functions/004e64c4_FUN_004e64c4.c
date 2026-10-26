/*
 * FUN_004e64c4 at 004e64c4
 * undefined __register FUN_004e64c4(void)
 * Address ranges: 004e64c4-004e6530
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004e64c4(void)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  int in_stack_00000004;
  undefined4 local_c;
  undefined4 local_8;
  
  iVar2 = FUN_0045da14(*(int *)(*(int *)(in_stack_00000004 + -4) + 0x80));
  uVar3 = iVar2 - 1;
  if (SBORROW4(iVar2,1)) {
    uVar3 = thunk_FUN_00402874(uVar3);
  }
  if (-1 < (int)uVar3) {
    local_c = uVar3 + 1;
    local_8 = 0;
    do {
      cVar1 = FUN_004e257c(*(int **)(*(int *)(in_stack_00000004 + -4) + 0x80),local_8);
      if (cVar1 == '\x02') {
        piVar4 = (int *)FUN_004e25c4(*(int **)(*(int *)(in_stack_00000004 + -4) + 0x80),local_8);
        FUN_00493c28(piVar4);
      }
      local_8 = local_8 + 1;
      local_c = local_c + -1;
    } while (local_c != 0);
  }
  return;
}

