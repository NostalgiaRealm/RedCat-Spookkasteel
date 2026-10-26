/*
 * FUN_0053cbc0 at 0053cbc0
 * undefined FUN_0053cbc0(void)
 * Address ranges: 0053cbc0-0053cbe6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __fastcall FUN_0053cbc0(uint3 param_1)

{
  undefined4 uVar1;
  undefined4 uStack_4;
  
  uStack_4 = (uint)param_1;
  uVar1 = FUN_0053ce90(&stack0x00000004,(int)&uStack_4 + 3);
  if (uStack_4._3_1_ == '\0') {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}

