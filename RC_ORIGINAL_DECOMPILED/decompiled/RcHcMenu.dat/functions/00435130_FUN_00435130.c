/*
 * FUN_00435130 at 00435130
 * undefined4 __register FUN_00435130(void)
 * Address ranges: 00435130-0043517e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_00435130(void)

{
  int iVar1;
  int iVar2;
  undefined4 unaff_EBX;
  undefined4 uVar3;
  int *piVar4;
  int in_stack_00000004;
  
  piVar4 = (int *)(in_stack_00000004 + -0x10);
  uVar3 = CONCAT31((int3)((uint)unaff_EBX >> 8),1);
  iVar1 = FUN_0043579c(*piVar4);
  iVar1 = iVar1 + -1;
  if (-1 < iVar1) {
    do {
      iVar2 = FUN_00435760(*piVar4,iVar1);
      if (*(char *)(iVar2 + 0x4b) != '\0') {
        return uVar3;
      }
      iVar2 = FUN_00435760(*piVar4,iVar1);
      if (*(char *)(iVar2 + 0x51) != '\x03') {
        return uVar3;
      }
      iVar1 = iVar1 + -1;
    } while (iVar1 != -1);
  }
  return 0;
}

