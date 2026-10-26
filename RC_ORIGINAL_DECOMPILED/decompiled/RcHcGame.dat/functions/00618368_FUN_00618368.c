/*
 * FUN_00618368 at 00618368
 * undefined FUN_00618368(void)
 * Address ranges: 00618368-0061838b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_00618368(int *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  do {
    *param_1 = *param_1 + 1;
    uVar1 = FUN_00618337(param_2);
    iVar2 = FUN_0060b2e2(uVar1);
  } while (iVar2 != 0);
  return uVar1;
}

