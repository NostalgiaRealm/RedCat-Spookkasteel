/*
 * FUN_005383d0 at 005383d0
 * undefined FUN_005383d0(void)
 * Address ranges: 005383d0-005384f6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_005383d0(undefined4 *param_1)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0063bb3e;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_0064f700;
  local_4 = 2;
  uVar4 = 0;
  while ((iVar2 = param_1[0x11], iVar2 != 0 && (uVar4 < (uint)(param_1[0x12] - iVar2 >> 2)))) {
    *(undefined4 *)(*(int *)(iVar2 + uVar4 * 4) + 0x24) = 0;
    puVar3 = *(undefined4 **)(param_1[0x11] + uVar4 * 4);
    if (puVar3 != (undefined4 *)0x0) {
      (**(code **)*puVar3)(1);
    }
    uVar4 = uVar4 + 1;
    *(undefined4 *)(param_1[0x11] + -4 + uVar4 * 4) = 0;
  }
  iVar2 = param_1[0x15];
  if (iVar2 != 0) {
    cVar1 = *(char *)(iVar2 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_005fe5f0((char *)(iVar2 + -1));
    }
    else {
      *(char *)(iVar2 + -1) = cVar1 + -1;
    }
  }
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  FUN_005fe5f0(param_1[0x11]);
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  iVar2 = param_1[0xd];
  local_4 = 0xffffffff;
  if (iVar2 != 0) {
    cVar1 = *(char *)(iVar2 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_005fe5f0((char *)(iVar2 + -1));
    }
    else {
      *(char *)(iVar2 + -1) = cVar1 + -1;
    }
  }
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  iVar2 = param_1[6];
  if (iVar2 != 0) {
    cVar1 = *(char *)(iVar2 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_005fe5f0((char *)(iVar2 + -1));
    }
    else {
      *(char *)(iVar2 + -1) = cVar1 + -1;
    }
  }
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  FUN_005ab4d0();
  ExceptionList = pvStack_c;
  return;
}

