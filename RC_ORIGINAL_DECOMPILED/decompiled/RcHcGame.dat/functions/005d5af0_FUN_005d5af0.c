/*
 * FUN_005d5af0 at 005d5af0
 * undefined FUN_005d5af0(void)
 * Address ranges: 005d5af0-005d5b45
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005d5af0(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  if (param_1 != 0) {
    puVar1 = *(undefined4 **)(param_1 + 0xfc8);
    puVar3 = (undefined4 *)*puVar1;
    while ((puVar3 != puVar1 && (puVar2 = (undefined4 *)*puVar3, puVar2 != (undefined4 *)0x0))) {
      FUN_005d98e0(DAT_006ceffc,puVar3);
      puVar3 = puVar2;
    }
    FUN_005d98e0(DAT_006ceffc,puVar1);
    FUN_005cf400(param_1);
    _DAT_007203c0 = 0;
  }
  return;
}

