/*
 * FUN_00450390 at 00450390
 * undefined4 __register FUN_00450390(void)
 * Address ranges: 00450390-004503fe
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_00450390(void)

{
  HWND pHVar1;
  uint uVar2;
  undefined4 uVar3;
  HWND in_stack_00000004;
  undefined4 *in_stack_00000008;
  
  uVar3 = 0xffffffff;
  pHVar1 = GetWindow(in_stack_00000004,4);
  if (pHVar1 == *(HWND *)(DAT_005737d4 + 0x24)) {
    uVar2 = GetWindowLongA(in_stack_00000004,-0x14);
    if (((uVar2 & 8) == 0) ||
       (((*(int **)(DAT_005737d4 + 0x38) != (int *)0x0 && (*(char *)(in_stack_00000008 + 1) == '\0')
         ) && (pHVar1 = (HWND)FUN_00438988(*(int **)(DAT_005737d4 + 0x38)),
              in_stack_00000004 == pHVar1)))) {
      *in_stack_00000008 = in_stack_00000004;
      uVar3 = 0;
    }
    else {
      FUN_004121d8(*(int **)(DAT_005737d4 + 0x80),(int)in_stack_00000004);
    }
    return uVar3;
  }
  return 0xffffffff;
}

