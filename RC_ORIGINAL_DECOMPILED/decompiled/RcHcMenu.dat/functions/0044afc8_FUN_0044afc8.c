/*
 * FUN_0044afc8 at 0044afc8
 * undefined4 __register FUN_0044afc8(void)
 * Address ranges: 0044afc8-0044b005
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_0044afc8(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int in_stack_00000004;
  
  iVar1 = FUN_0044b360(*(int *)(in_stack_00000004 + -4));
  if (-1 < iVar1 + -1) {
    iVar3 = 0;
    do {
      iVar2 = FUN_0044b3ac(*(int *)(in_stack_00000004 + -4),iVar3);
      if (*(char *)(iVar2 + 0x213) == '\x02') {
        return CONCAT31((int3)((uint)iVar2 >> 8),1);
      }
      iVar3 = iVar3 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  return 0;
}

