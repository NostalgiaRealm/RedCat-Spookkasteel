/*
 * FUN_0052e25c at 0052e25c
 * undefined __register FUN_0052e25c(void)
 * Address ranges: 0052e25c-0052e349
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0052e25c(void)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  undefined4 extraout_ECX;
  int in_stack_00000004;
  byte bVar5;
  undefined4 local_c;
  undefined4 local_8;
  
  iVar2 = FUN_0045da14(*(int *)(*(int *)(*(int *)(in_stack_00000004 + 8) + -4) + 0x80));
  uVar3 = iVar2 - 1;
  if (SBORROW4(iVar2,1)) {
    uVar3 = thunk_FUN_00402874(uVar3);
  }
  if (-1 < (int)uVar3) {
    local_c = uVar3 + 1;
    local_8 = 0;
    do {
      cVar1 = FUN_004e257c(*(int **)(*(int *)(*(int *)(in_stack_00000004 + 8) + -4) + 0x80),local_8)
      ;
      if (cVar1 == '\x02') {
        bVar5 = *(byte *)(*(int *)(*(int *)(in_stack_00000004 + 8) + -4) + 0x42);
        piVar4 = (int *)FUN_004e25c4(*(int **)(*(int *)(*(int *)(in_stack_00000004 + 8) + -4) + 0x80
                                              ),local_8);
        FUN_004d2358(*(int **)(*(int *)(*(int *)(in_stack_00000004 + 8) + -4) + 0x34),piVar4,
                     CONCAT31((int3)((uint)extraout_ECX >> 8),
                              *(undefined1 *)(*(int *)(*(int *)(in_stack_00000004 + 8) + -4) + 0x41)
                             ),bVar5);
      }
      else if (cVar1 == '\x03') {
        piVar4 = (int *)FUN_004e25c4(*(int **)(*(int *)(*(int *)(in_stack_00000004 + 8) + -4) + 0x80
                                              ),local_8);
        FUN_004d1dc8(*(int **)(*(int *)(*(int *)(in_stack_00000004 + 8) + -4) + 0x34),piVar4);
      }
      FUN_004e25a0(*(int **)(*(int *)(*(int *)(in_stack_00000004 + 8) + -4) + 0x80),local_8,0);
      local_8 = local_8 + 1;
      local_c = local_c + -1;
    } while (local_c != 0);
  }
  return;
}

