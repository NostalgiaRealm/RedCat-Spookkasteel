/*
 * FUN_0052e34c at 0052e34c
 * undefined __register FUN_0052e34c(void)
 * Address ranges: 0052e34c-0052e372
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0052e34c(void)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int in_stack_00000004;
  
  uVar3 = *(uint *)(in_stack_00000004 + -4);
  piVar1 = (int *)(uVar3 + 0x94);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + 1;
  if (SCARRY4(iVar2,1)) {
    thunk_FUN_00402874(uVar3);
  }
  FUN_0052e1e0();
  FUN_0052e25c();
  return;
}

