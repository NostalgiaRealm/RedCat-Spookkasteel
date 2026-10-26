/*
 * FUN_0044faf8 at 0044faf8
 * undefined4 __register FUN_0044faf8(void)
 * Address ranges: 0044faf8-0044fb4d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_0044faf8(void)

{
  int iVar1;
  int iVar2;
  undefined4 unaff_EBX;
  int in_stack_00000004;
  
  iVar1 = FUN_0044f15c(*(int *)(in_stack_00000004 + -0x10));
  iVar1 = iVar1 + -1;
  if (-1 < iVar1) {
    do {
      iVar2 = FUN_0044f148(*(int *)(in_stack_00000004 + -0x10),iVar1);
      if ((((*(int *)(iVar2 + 0x24) == 0) && ((*(byte *)(iVar2 + 0x20) & 0x10) == 0)) &&
          (*(char *)(iVar2 + 0x4b) != '\0')) &&
         ((*(char *)(iVar2 + 0x47) != '\0' && (*(char *)(iVar2 + 0x213) != '\x01')))) {
        return CONCAT31((int3)((uint)unaff_EBX >> 8),1);
      }
      iVar1 = iVar1 + -1;
    } while (iVar1 != -1);
  }
  return 0;
}

