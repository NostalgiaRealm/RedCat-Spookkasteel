/*
 * FUN_10001670 at 10001670
 * undefined FUN_10001670(void)
 * Address ranges: 10001670-100016f1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 *
FUN_10001670(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  
  puVar1 = _malloc(0x34);
  if (puVar1 == (undefined4 *)0x0) {
    return (undefined4 *)0x0;
  }
  puVar3 = puVar1;
  for (iVar2 = 0xd; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  iVar2 = FUN_10001700(puVar1);
  if (iVar2 != 0) {
    puVar1[9] = param_1;
    puVar1[4] = 0;
    iVar2 = (**(code **)(*(int *)*puVar1 + 0x50))((int *)*puVar1,param_1,0x11);
    if (iVar2 == 0) {
      iVar2 = FUN_100017a0(puVar1,param_2,param_3,param_4,param_5);
      if (iVar2 != 0) {
        return puVar1;
      }
    }
  }
  FUN_10001350(puVar1);
  FUN_10018dc8(puVar1);
  return (undefined4 *)0x0;
}

