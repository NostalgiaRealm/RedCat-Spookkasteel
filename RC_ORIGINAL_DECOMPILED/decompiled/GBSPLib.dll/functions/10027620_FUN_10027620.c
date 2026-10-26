/*
 * FUN_10027620 at 10027620
 * undefined FUN_10027620(void)
 * Address ranges: 10027620-10027650
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10027620(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0xffffffff;
  if ((*(byte *)(param_1 + 0xc) & 0x40) == 0) {
    FUN_10029bce(param_1);
    uVar1 = __fclose_lk(param_1);
    FUN_10029c20(param_1);
  }
  else {
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  return uVar1;
}

