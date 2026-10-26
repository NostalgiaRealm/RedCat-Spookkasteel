/*
 * FUN_004592d0 at 004592d0
 * undefined FUN_004592d0(void)
 * Address ranges: 004592d0-0045932b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall
FUN_004592d0(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined1 param_5)

{
  undefined4 uVar1;
  
  if (((param_2 != *(int *)(param_1 + 0x450)) && (4 < param_2)) && (param_2 < 0xc)) {
    *(int *)(param_1 + 0x44c) = *(int *)(param_1 + 0x450);
    *(int *)(param_1 + 0x450) = param_2;
    *(undefined1 *)(param_1 + 0x454) = 1;
    *(undefined4 *)(param_1 + 0x480) = param_3;
    *(undefined1 *)(param_1 + 0x484) = 0;
    uVar1 = __ftol();
    *(undefined4 *)(param_1 + 0x50c) = uVar1;
    *(undefined1 *)(param_1 + 0x47c) = param_5;
  }
  return;
}

