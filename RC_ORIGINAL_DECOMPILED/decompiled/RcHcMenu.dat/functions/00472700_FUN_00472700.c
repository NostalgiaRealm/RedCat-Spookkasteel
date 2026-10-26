/*
 * FUN_00472700 at 00472700
 * undefined __register FUN_00472700(void)
 * Address ranges: 00472700-004727c2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00472700(void)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int in_stack_00000004;
  char cVar6;
  
  if (*(int *)(*(int *)(in_stack_00000004 + -4) + 0x7c) != 0) {
    if (*(char *)(*(int *)(in_stack_00000004 + -4) + 0x8d) != '\x03') {
      FUN_00473130(*(int **)(in_stack_00000004 + -4));
    }
    iVar4 = *(int *)(*(int *)(*(int *)(in_stack_00000004 + -4) + 0x7c) + 8);
    if (-1 < iVar4 + -1) {
      iVar5 = 0;
      do {
        piVar1 = (int *)FUN_00412384(*(undefined4 **)(*(int *)(in_stack_00000004 + -4) + 0x7c),iVar5
                                    );
        uVar2 = FUN_004714b4((int)piVar1);
        if ((char)uVar2 != '\0') {
          (**(code **)(*piVar1 + 0xac))(piVar1,0xb,0);
        }
        iVar5 = iVar5 + 1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
  }
  if ((*(char *)(*(int *)(in_stack_00000004 + -4) + 0x8d) == '\n') &&
     (iVar4 = *(int *)(*(int *)(*(int *)(in_stack_00000004 + -4) + 0x38) + 8), -1 < iVar4 + -1)) {
    iVar5 = 0;
    do {
      cVar6 = '\0';
      iVar3 = FUN_00412384(*(undefined4 **)(*(int *)(in_stack_00000004 + -4) + 0x38),iVar5);
      FUN_0046ede0(iVar3,*(undefined1 *)(in_stack_00000004 + -9),
                   *(undefined4 *)(in_stack_00000004 + -8),cVar6);
      iVar5 = iVar5 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  return;
}

