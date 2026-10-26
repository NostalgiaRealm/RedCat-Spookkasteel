/*
 * FUN_005f5280 at 005f5280
 * undefined FUN_005f5280(void)
 * Address ranges: 005f5280-005f535e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall FUN_005f5280(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined **ppuVar2;
  undefined1 local_3c [20];
  undefined **ppuStack_28;
  undefined1 local_24 [20];
  void *pvStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00648187;
  pvStack_c = ExceptionList;
  ppuVar2 = (undefined **)0x0;
  if (*(char *)(param_1 + 0x34) == '\0') {
    ExceptionList = &pvStack_c;
    uVar1 = FUN_005ec380();
    uVar1 = (**(code **)(param_1 + 0x2c))(local_24,uVar1);
    uStack_4 = 2;
    FUN_005e27d0(uVar1);
    *param_2 = &PTR_FUN_00650ad4;
    ppuStack_28 = &PTR_FUN_00650ad4;
  }
  else {
    ExceptionList = &pvStack_c;
    uVar1 = FUN_005ec380(param_1 + 0xc);
    uVar1 = (**(code **)(param_1 + 0x2c))(local_3c,uVar1);
    uStack_4 = 1;
    FUN_005e27d0(uVar1);
    *param_2 = &PTR_FUN_00650ad4;
    ppuVar2 = &PTR_FUN_00650ad4;
  }
  puStack_8 = (undefined1 *)((uint)puStack_8 & 0xffffff00);
  FUN_005e2f00(uVar1,1,ppuVar2);
  ExceptionList = pvStack_10;
  return param_2;
}

