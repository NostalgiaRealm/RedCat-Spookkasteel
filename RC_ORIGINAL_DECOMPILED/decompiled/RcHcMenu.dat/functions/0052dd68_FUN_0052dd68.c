/*
 * FUN_0052dd68 at 0052dd68
 * undefined __register FUN_0052dd68(void)
 * Address ranges: 0052dd68-0052dded
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0052dd68(void)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  int in_stack_00000004;
  undefined4 local_c;
  undefined4 local_8;
  
  iVar2 = FUN_0045da14(*(int *)(*(int *)(*(int *)(in_stack_00000004 + 8) + -4) + 0x84));
  uVar3 = iVar2 - 1;
  if (SBORROW4(iVar2,1)) {
    uVar3 = thunk_FUN_00402874(uVar3);
  }
  if (-1 < (int)uVar3) {
    local_c = uVar3 + 1;
    local_8 = 0;
    do {
      cVar1 = FUN_004e260c(*(int **)(*(int *)(*(int *)(in_stack_00000004 + 8) + -4) + 0x84),local_8)
      ;
      if (cVar1 != '\0') {
        piVar4 = (int *)FUN_004e25c4(*(int **)(*(int *)(*(int *)(in_stack_00000004 + 8) + -4) + 0x84
                                              ),local_8);
        FUN_004d4718(*(int **)(*(int *)(*(int *)(in_stack_00000004 + 8) + -4) + 0x34),piVar4,'\0');
      }
      local_8 = local_8 + 1;
      local_c = local_c + -1;
    } while (local_c != 0);
  }
  return;
}

