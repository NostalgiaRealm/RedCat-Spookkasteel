/*
 * FUN_0051adc0 at 0051adc0
 * undefined FUN_0051adc0(void)
 * Address ranges: 0051adc0-0051add4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_0051adc0(int *param_1)

{
  if (*(char *)((int)param_1 + 0x29) != '\0') {
    (**(code **)(*param_1 + 0xc))();
    *(undefined1 *)((int)param_1 + 0x29) = 0;
  }
  return;
}

