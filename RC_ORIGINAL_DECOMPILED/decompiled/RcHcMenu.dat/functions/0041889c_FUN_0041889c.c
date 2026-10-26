/*
 * FUN_0041889c at 0041889c
 * undefined4 __register FUN_0041889c(void)
 * Address ranges: 0041889c-0041891e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_0041889c(void)

{
  undefined4 uVar1;
  int iVar2;
  int in_stack_00000004;
  byte local_10c [256];
  int local_c [2];
  
  uVar1 = FUN_00417f94();
  iVar2 = 0;
  if ((char)uVar1 != '\0') {
    FUN_0040ff98(*(int **)(*(int *)(*(int *)(in_stack_00000004 + 8) + -4) + 0x20),
                 *(int *)(*(int *)(in_stack_00000004 + 8) + -0xc),local_c);
    iVar2 = local_c[0];
  }
  if (iVar2 == *(int *)(in_stack_00000004 + -8)) {
LAB_00418917:
    uVar1 = CONCAT31((int3)((uint)in_stack_00000004 >> 8),1);
  }
  else {
    if (*(int *)(in_stack_00000004 + -8) != 0) {
      in_stack_00000004 =
           FUN_00403344(**(int **)(*(int *)(*(int *)(in_stack_00000004 + 8) + -4) + 0x1c),
                        *(int *)(in_stack_00000004 + -8),local_10c);
      if (local_10c[0] == 0) goto LAB_00418917;
    }
    uVar1 = 0;
  }
  return uVar1;
}

