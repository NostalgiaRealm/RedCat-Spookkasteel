/*
 * FUN_005f61e0 at 005f61e0
 * undefined FUN_005f61e0(void)
 * Address ranges: 005f61e0-005f6283
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_005f61e0(int param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined1 local_1c [4];
  int iStack_18;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00648368;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  iVar2 = FUN_005eeb80(local_1c,*(undefined4 *)(param_1 + 8),0);
  puVar3 = *(undefined1 **)(iVar2 + 4);
  uStack_4 = 0;
  if (puVar3 == (undefined1 *)0x0) {
    puVar3 = &DAT_0064a3b4;
  }
  FUN_005e7110(param_2,s__STACK___s__006b1508,puVar3);
  if (iStack_18 != 0) {
    cVar1 = *(char *)(iStack_18 + -1);
    if ((cVar1 != '\0') && (cVar1 != -1)) {
      *(char *)(iStack_18 + -1) = cVar1 + -1;
      ExceptionList = pvStack_c;
      return param_2;
    }
    FUN_005fe5f0((char *)(iStack_18 + -1));
  }
  ExceptionList = pvStack_c;
  return param_2;
}

