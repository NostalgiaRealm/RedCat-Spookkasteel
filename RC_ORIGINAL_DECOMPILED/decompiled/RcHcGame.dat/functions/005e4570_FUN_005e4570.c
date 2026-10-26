/*
 * FUN_005e4570 at 005e4570
 * undefined FUN_005e4570(void)
 * Address ranges: 005e4570-005e468f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_005e4570(undefined4 *param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  void *pvStack_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_006466d3;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_0065164c;
  local_4 = 1;
  if ((*(char *)(param_1 + 0x12) != '\0') && (param_1[0x14] != 0)) {
    iVar4 = FUN_0060d30d(param_1[0x14]);
    if (iVar4 == 0) {
      *(undefined1 *)(param_1 + 0x12) = 0;
      FUN_005e53d0();
      param_1[0x14] = 0;
      param_1[0x10] = DAT_00747b58;
      param_1[0xf] = DAT_00747b58;
      param_1[0xe] = 0;
    }
  }
  iVar4 = param_1[0x11];
  if (iVar4 != 0) {
    iVar2 = *(int *)(iVar4 + 4);
    if (iVar2 != 0) {
      cVar1 = *(char *)(iVar2 + -1);
      if ((cVar1 == '\0') || (cVar1 == -1)) {
        FUN_005fe5f0((char *)(iVar2 + -1));
      }
      else {
        *(char *)(iVar2 + -1) = cVar1 + -1;
      }
    }
    *(undefined4 *)(iVar4 + 4) = 0;
    *(undefined4 *)(iVar4 + 8) = 0;
    *(undefined4 *)(iVar4 + 0xc) = 0;
    FUN_005fe5f0(iVar4);
  }
  uVar3 = param_1[0x13];
  local_4 = local_4 & 0xffffff00;
  if (uVar3 != 0) {
    iVar4 = *(int *)(uVar3 + 4);
    if ((iVar4 != 0) && (iVar4 != -1)) {
      *(int *)(uVar3 + 4) = iVar4 + -1;
    }
    puVar5 = (undefined4 *)(~-(uint)(*(int *)(uVar3 + 4) != 0) & uVar3);
    if (puVar5 != (undefined4 *)0x0) {
      (**(code **)*puVar5)(1);
    }
  }
  *param_1 = &PTR_FUN_006515fc;
  uVar3 = param_1[0xd];
  local_4 = 0xffffffff;
  if (uVar3 != 0) {
    iVar4 = *(int *)(uVar3 + 4);
    if ((iVar4 != 0) && (iVar4 != -1)) {
      *(int *)(uVar3 + 4) = iVar4 + -1;
    }
    puVar5 = (undefined4 *)(~-(uint)(*(int *)(uVar3 + 4) != 0) & uVar3);
    if (puVar5 != (undefined4 *)0x0) {
      (**(code **)*puVar5)(1);
    }
  }
  ExceptionList = pvStack_c;
  return;
}

