/*
 * FUN_004736e8 at 004736e8
 * undefined __register FUN_004736e8(void)
 * Address ranges: 004736e8-00473738
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004736e8(void)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int in_stack_00000004;
  
  iVar3 = *(int *)(*(int *)(in_stack_00000004 + -4) + 0x7c);
  if ((iVar3 != 0) && (iVar3 = *(int *)(iVar3 + 8), -1 < iVar3 + -1)) {
    iVar4 = 0;
    do {
      piVar1 = (int *)FUN_00412384(*(undefined4 **)(*(int *)(in_stack_00000004 + -4) + 0x7c),iVar4);
      uVar2 = FUN_004714b4((int)piVar1);
      if ((char)uVar2 != '\0') {
        (**(code **)(*piVar1 + 0x208))();
      }
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return;
}

