/*
 * FUN_0052e18c at 0052e18c
 * undefined __register FUN_0052e18c(void)
 * Address ranges: 0052e18c-0052e1df
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0052e18c(void)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int in_stack_00000004;
  
  FUN_0052dd68();
  FUN_0052ddf0();
  uVar3 = *(uint *)(in_stack_00000004 + -4);
  piVar1 = (int *)(uVar3 + 0x94);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + 1;
  if (SCARRY4(iVar2,1)) {
    thunk_FUN_00402874(uVar3);
  }
  FUN_004e290c(*(int **)(*(int *)(in_stack_00000004 + -4) + 0x84));
  FUN_0045d890(*(undefined4 **)(*(int *)(in_stack_00000004 + -4) + 0x84));
  FUN_0052ba24(*(int **)(in_stack_00000004 + -4));
  return;
}

