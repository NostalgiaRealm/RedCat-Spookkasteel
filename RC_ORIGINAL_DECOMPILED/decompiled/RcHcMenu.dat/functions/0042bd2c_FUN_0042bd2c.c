/*
 * FUN_0042bd2c at 0042bd2c
 * undefined __register FUN_0042bd2c(void)
 * Address ranges: 0042bd2c-0042bd92
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0042bd2c(void)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  int in_stack_00000004;
  
  iVar1 = *(int *)(*(int *)(in_stack_00000004 + -4) + 0x24);
  if (iVar1 != 0) {
    iVar2 = FUN_0043579c(iVar1);
    if (-1 < iVar2 + -1) {
      iVar5 = 0;
      do {
        piVar3 = (int *)FUN_00435760(iVar1,iVar5);
        if (piVar3 != *(int **)(in_stack_00000004 + -4)) {
          uVar4 = FUN_0040320c(piVar3,(int)&LAB_00427f08);
          if ((char)uVar4 != '\0') {
            (**(code **)(*piVar3 + 0xb8))(piVar3,0);
          }
        }
        iVar5 = iVar5 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
  }
  return;
}

