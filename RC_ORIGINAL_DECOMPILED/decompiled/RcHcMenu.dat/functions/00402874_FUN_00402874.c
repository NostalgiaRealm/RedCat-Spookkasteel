/*
 * FUN_00402874 at 00402874
 * undefined __register FUN_00402874(uint param_1)
 * Address ranges: 00402874-0040289c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00402874(uint param_1)

{
  uint uVar1;
  undefined4 uVar2;
  LPVOID pvVar3;
  undefined4 in_stack_00000000;
  
  uVar1 = param_1 & 0x7f;
  if (DAT_00573004 != (code *)0x0) {
    uVar1 = (*DAT_00573004)(uVar1,in_stack_00000000);
  }
  uVar2 = CONCAT31((int3)(uVar1 - 1 >> 8),*(undefined1 *)(uVar1 + 0x40289c));
  if ((int)(uVar1 - 1) < 0) {
    pvVar3 = FUN_00407904();
    uVar2 = *(undefined4 *)((int)pvVar3 + 4);
  }
  FUN_00403d88(uVar2);
  return;
}

