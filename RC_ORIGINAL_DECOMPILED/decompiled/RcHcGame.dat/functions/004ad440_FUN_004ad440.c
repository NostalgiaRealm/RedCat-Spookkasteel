/*
 * FUN_004ad440 at 004ad440
 * undefined FUN_004ad440(void)
 * Address ranges: 004ad440-004ad47b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_004ad440(int param_1)

{
  int *piVar1;
  
  while ((*(int *)(param_1 + 0x1c) != 0 &&
         (0 < (int)(*(int *)(param_1 + 0x20) - *(int *)(param_1 + 0x1c) & 0xfffffffcU)))) {
    piVar1 = (int *)FUN_004ad480(0);
    if ((undefined4 *)*piVar1 != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)*piVar1)(1);
    }
    FUN_004ad590(0);
  }
  return;
}

