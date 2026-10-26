/*
 * FUN_0047e710 at 0047e710
 * undefined FUN_0047e710(void)
 * Address ranges: 0047e710-0047e775
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_0047e710(int param_1)

{
  undefined4 uVar1;
  
  if (*(char *)(param_1 + 0x6c) == '\0') {
    *(undefined4 *)(param_1 + 0x54) = 0;
    *(undefined1 *)(param_1 + 0x6c) = 1;
    *(undefined1 *)(param_1 + 0x7a) = 1;
    uVar1 = __ftol();
    *(undefined4 *)(param_1 + 0x70) = uVar1;
    *(undefined4 *)(param_1 + 0x10c) = *(undefined4 *)(param_1 + 0x130);
    *(undefined1 *)(param_1 + 0x79) = 0;
    *(undefined4 *)(param_1 + 0xb4) = 0;
    *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_1 + 0x134);
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_1 + 0x138);
    *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_1 + 0x13c);
    FUN_0047e7b0();
  }
  return;
}

