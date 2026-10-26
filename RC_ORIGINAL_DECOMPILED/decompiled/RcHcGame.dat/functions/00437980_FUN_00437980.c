/*
 * FUN_00437980 at 00437980
 * undefined FUN_00437980(void)
 * Address ranges: 00437980-00437abf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00437980(void)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  char *pcVar5;
  float10 fVar6;
  undefined1 local_99;
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
  puStack_8 = &LAB_00623dfe;
  local_c = ExceptionList;
  uVar4 = 0xffffffff;
  pcVar5 = s_MaxHealth_00690634;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  local_94 = 0;
  local_90 = 0;
  local_8c = 0;
  ExceptionList = &local_c;
  FUN_004040f0(s_MaxHealth_00690634,~uVar4 - 1);
  local_4 = 0;
  uVar2 = FUN_00436f90(local_88);
  local_4._0_1_ = 1;
  iVar3 = FUN_005ac8b0(local_98,&DAT_006b58b8,0x41200000,uVar2,0);
  local_4._0_1_ = 2;
  if (*(float *)(iVar3 + 0x60) == 0.0) {
    fVar6 = (float10)FUN_005ad390(iVar3 + 0x14,&local_99);
    *(float *)(iVar3 + 0x60) = (float)fVar6;
  }
  else {
    fVar6 = (float10)*(float *)(iVar3 + 0x60);
  }
  DAT_006b58b4 = (float)fVar6;
  local_4 = CONCAT31(local_4._1_3_,1);
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

