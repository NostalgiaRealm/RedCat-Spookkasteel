/*
 * FUN_004f2090 at 004f2090
 * undefined FUN_004f2090(void)
 * Address ranges: 004f2090-004f20af
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_004f2090(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_004f2620(param_1,&param_1);
  if ((char)param_1 == '\0') {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}

