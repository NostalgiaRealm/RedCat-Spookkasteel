/*
 * FUN_00438120 at 00438120
 * undefined FUN_00438120(void)
 * Address ranges: 00438120-00438243
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00438120(void)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 *puVar4;
  int iVar5;
  uint uVar6;
  char *pcVar7;
  undefined1 local_98 [4];
  int local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined1 local_88 [4];
  int local_84;
  undefined4 local_80;
  undefined4 local_7c;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00623ed6;
  local_c = ExceptionList;
  uVar6 = 0xffffffff;
  pcVar7 = s_StartSecrets_0069068c;
  do {
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar1 != '\0');
  local_94 = 0;
  local_90 = 0;
  local_8c = 0;
  ExceptionList = &local_c;
  FUN_004040f0(s_StartSecrets_0069068c,~uVar6 - 1);
  local_4 = 0;
  uVar2 = FUN_00436f90(local_88);
  local_4 = CONCAT31(local_4._1_3_,1);
  iVar3 = FUN_005ac9d0(local_98,&DAT_006b58b8,0,uVar2,0);
  iVar5 = *(int *)(iVar3 + 100);
  if (iVar5 == -0x80000000) {
    puVar4 = *(undefined1 **)(iVar3 + 0x18);
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = &DAT_0064a3b4;
    }
    iVar5 = FUN_0060af10(puVar4);
    *(int *)(iVar3 + 100) = iVar5;
  }
  _DAT_006b589c = iVar5;
  FUN_005acca0();
  if (local_84 != 0) {
    cVar1 = *(char *)(local_84 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_005fe5f0((char *)(local_84 + -1));
    }
    else {
      *(char *)(local_84 + -1) = cVar1 + -1;
    }
  }
  local_84 = 0;
  local_80 = 0;
  local_7c = 0;
  if (local_94 != 0) {
    cVar1 = *(char *)(local_94 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_005fe5f0((char *)(local_94 + -1));
    }
    else {
      *(char *)(local_94 + -1) = cVar1 + -1;
    }
  }
  ExceptionList = local_c;
  return;
}

