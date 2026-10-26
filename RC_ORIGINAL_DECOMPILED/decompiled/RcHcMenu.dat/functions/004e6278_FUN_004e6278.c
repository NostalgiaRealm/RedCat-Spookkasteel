/*
 * FUN_004e6278 at 004e6278
 * undefined __register FUN_004e6278(void)
 * Address ranges: 004e6278-004e6377
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004e6278(void)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  int in_stack_00000004;
  int local_14;
  undefined4 local_10;
  undefined1 local_c;
  undefined1 local_b;
  int local_8;
  
  iVar2 = FUN_0045da14(*(int *)(*(int *)(in_stack_00000004 + -4) + 0x84));
  uVar3 = iVar2 - 1;
  if (SBORROW4(iVar2,1)) {
    uVar3 = thunk_FUN_00402874(uVar3);
  }
  if (-1 < (int)uVar3) {
    local_14 = uVar3 + 1;
    local_8 = 0;
    do {
      cVar1 = FUN_004e257c(*(int **)(*(int *)(in_stack_00000004 + -4) + 0x84),local_8);
      if ((cVar1 == '\0') || (cVar1 == '\x02')) {
        local_10 = FUN_004e25c4(*(int **)(*(int *)(in_stack_00000004 + -4) + 0x84),local_8);
        local_c = FUN_004e257c(*(int **)(*(int *)(in_stack_00000004 + -4) + 0x84),local_8);
        local_b = FUN_004e260c(*(int **)(*(int *)(in_stack_00000004 + -4) + 0x84),local_8);
        FUN_004e2654(*(int **)(*(int *)(in_stack_00000004 + -4) + 0x80),&local_10);
      }
      else {
        cVar1 = FUN_004e257c(*(int **)(*(int *)(in_stack_00000004 + -4) + 0x84),local_8);
        if (cVar1 == '\x03') {
          piVar4 = (int *)FUN_004e25c4(*(int **)(*(int *)(in_stack_00000004 + -4) + 0x84),local_8);
          FUN_00403094(piVar4);
          FUN_0045d540(*(int **)(*(int *)(in_stack_00000004 + -4) + 0x84),local_8);
        }
      }
      local_8 = local_8 + 1;
      local_14 = local_14 + -1;
    } while (local_14 != 0);
  }
  return;
}

