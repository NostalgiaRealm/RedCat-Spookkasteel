/*
 * FUN_0047e7b0 at 0047e7b0
 * undefined FUN_0047e7b0(void)
 * Address ranges: 0047e7b0-0047e848
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_0047e7b0(int param_1)

{
  undefined4 uVar1;
  
  if (0.0 < *(float *)(param_1 + 0xc0)) {
    uVar1 = __ftol();
  }
  else {
    uVar1 = 0xffffffff;
  }
  FUN_004041b0(uVar1);
  if (0.0 < *(float *)(param_1 + 0xe0)) {
    uVar1 = __ftol();
  }
  else {
    uVar1 = 0xffffffff;
  }
  FUN_004041b0(uVar1);
  if (0.0 < *(float *)(param_1 + 0xfc)) {
    uVar1 = __ftol();
  }
  else {
    uVar1 = 0xffffffff;
  }
  FUN_004041b0(uVar1);
  FUN_004041b0(0xffffffff);
  return;
}

