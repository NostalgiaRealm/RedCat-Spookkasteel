/*
 * FUN_005c89a0 at 005c89a0
 * undefined FUN_005c89a0(void)
 * Address ranges: 005c89a0-005c89ef
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005c89a0(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  
  if (param_1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)param_1[8];
    while (puVar1 = puVar2, puVar1 != (undefined4 *)0x0) {
      iVar3 = FUN_005c8ea0(puVar1);
      if (iVar3 == 0) {
        param_1[8] = puVar1[8];
        (**(code **)(*(int *)*puVar1 + 8))((int *)*puVar1);
        FUN_005cf400(puVar1);
        _DAT_007203c0 = 0;
        puVar2 = (undefined4 *)param_1[8];
      }
      else {
        puVar2 = (undefined4 *)puVar1[8];
        param_1 = puVar1;
      }
    }
  }
  return;
}

