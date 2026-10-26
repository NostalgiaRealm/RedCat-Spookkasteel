/*
 * FUN_0050dd60 at 0050dd60
 * undefined FUN_0050dd60(void)
 * Address ranges: 0050dd60-0050de29
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_0050dd60(undefined4 param_1,undefined4 param_2,int param_3,char param_4)

{
  char cVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  char *pcVar5;
  undefined1 local_1c [4];
  int iStack_18;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00636e28;
  pvStack_c = ExceptionList;
  pcVar5 = &DAT_00694ba8;
  if (param_4 == '\0') {
    pcVar5 = s_FALSE_00694ba0;
  }
  puVar4 = &DAT_0064a3b4;
  if (*(undefined1 **)(param_3 + 4) != (undefined1 *)0x0) {
    puVar4 = *(undefined1 **)(param_3 + 4);
  }
  ExceptionList = &pvStack_c;
  iVar2 = FUN_004e6420(local_1c,param_2);
  puVar3 = *(undefined1 **)(iVar2 + 4);
  uStack_4 = 0;
  if (puVar3 == (undefined1 *)0x0) {
    puVar3 = &DAT_0064a3b4;
  }
  FUN_005ae390(param_1,s__s__s__s_0069e9d0,puVar3,puVar4,pcVar5);
  if (iStack_18 != 0) {
    cVar1 = *(char *)(iStack_18 + -1);
    if ((cVar1 != '\0') && (cVar1 != -1)) {
      *(char *)(iStack_18 + -1) = cVar1 + -1;
      ExceptionList = pvStack_c;
      return param_1;
    }
    FUN_005fe5f0((char *)(iStack_18 + -1));
  }
  ExceptionList = pvStack_c;
  return param_1;
}

