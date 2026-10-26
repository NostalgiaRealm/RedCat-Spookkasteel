/*
 * FUN_0046c360 at 0046c360
 * undefined FUN_0046c360(void)
 * Address ranges: 0046c360-0046c3a8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_0046c360(int param_1)

{
  undefined4 uVar1;
  
  if (*(char *)(param_1 + 0x7c) == '\0') {
    FUN_00502350(1);
    *(undefined4 *)(param_1 + 0x998) = 0xffffffff;
    *(undefined1 *)(param_1 + 0x9c0) = 0;
    *(undefined1 *)(param_1 + 0x9c1) = 0;
    *(undefined1 *)(param_1 + 0x9c2) = 0;
    uVar1 = __ftol();
    FUN_004041b0(uVar1);
  }
  return;
}

