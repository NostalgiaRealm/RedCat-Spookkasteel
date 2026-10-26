/*
 * FUN_005eb0c0 at 005eb0c0
 * undefined FUN_005eb0c0(void)
 * Address ranges: 005eb0c0-005eb183
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_005eb0c0(undefined4 param_1)

{
  char cVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined ***pppuVar4;
  undefined4 uVar5;
  undefined1 local_34 [4];
  int local_30;
  undefined **ppuStack_28;
  undefined **local_24 [2];
  undefined4 local_1c;
  void *pvStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00646f1f;
  pvStack_c = ExceptionList;
  uVar5 = 0;
  ExceptionList = &pvStack_c;
  iVar2 = FUN_0045da10(local_34);
  puVar3 = *(undefined1 **)(iVar2 + 4);
  if (puVar3 == (undefined1 *)0x0) {
    puVar3 = &DAT_0064a3b4;
  }
  FUN_0060e9e5(puVar3,uVar5);
  if (local_30 != 0) {
    cVar1 = *(char *)(local_30 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_005fe5f0((char *)(local_30 + -1));
    }
    else {
      *(char *)(local_30 + -1) = cVar1 + -1;
    }
  }
  local_1c = 0;
  local_24[0] = &PTR_FUN_00650ad4;
  pppuVar4 = local_24;
  local_4 = 1;
  FUN_005e27d0(pppuVar4);
  puStack_8 = (undefined1 *)((uint)puStack_8 & 0xffffff00);
  ppuStack_28 = &PTR_FUN_00650ad4;
  FUN_005e2f00(pppuVar4,1);
  ExceptionList = pvStack_10;
  return param_1;
}

