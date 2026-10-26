/*
 * FUN_005414f0 at 005414f0
 * undefined FUN_005414f0(void)
 * Address ranges: 005414f0-0054185d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_005414f0(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  code *pcVar4;
  undefined1 *puVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  char *pcVar11;
  undefined4 *puVar12;
  undefined1 local_238 [4];
  char *local_234;
  int local_228;
  undefined1 local_224 [4];
  int local_220;
  undefined1 local_214 [16];
  undefined1 local_204 [16];
  undefined1 local_1f4 [232];
  undefined4 local_10c [64];
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0063c7de;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_004040a0(0);
  local_4 = 0;
  local_228 = 0;
  iVar10 = 0;
  while( true ) {
    iVar8 = local_228;
    if (*(int *)(param_1 + 0x18) == 0) {
      iVar9 = 0;
    }
    else {
      iVar9 = (*(int *)(param_1 + 0x1c) - *(int *)(param_1 + 0x18)) / 0x38;
    }
    if (iVar9 <= iVar10) break;
    uVar2 = FUN_005ae390(local_1f4,s_Action_i_006a1458,iVar10 + 1);
    local_4._0_1_ = 1;
    FUN_0040cc00(uVar2,0,0xffffffff);
    local_4._0_1_ = 0;
    FUN_004040a0(1);
    uVar2 = FUN_00436f90(local_214);
    local_4._0_1_ = 2;
    uVar3 = FUN_00548d40(local_204);
    local_4._0_1_ = 3;
    FUN_005acaf0(local_224,uVar3,&DAT_006b3f70,uVar2,0);
    local_4._0_1_ = 6;
    FUN_004040a0(1);
    local_4 = CONCAT31(local_4._1_3_,5);
    FUN_004040a0(1);
    if (iVar8 < 0) {
LAB_00541622:
      FUN_004040a0(0);
      uVar6 = 0xffffffff;
      pcVar11 = &DAT_006b3f70;
      do {
        if (uVar6 == 0) break;
        uVar6 = uVar6 - 1;
        cVar1 = *pcVar11;
        pcVar11 = pcVar11 + 1;
      } while (cVar1 != '\0');
      FUN_004040f0(&DAT_006b3f70,~uVar6 - 1);
      local_4._0_1_ = 7;
      pcVar4 = (code *)FUN_005a07f0(s_a_Index>_0____a_Index<Count()_0068f470,
                                    s___AdamSource_DaviList_h_0068f458,0x97,local_238);
      (*pcVar4)();
      local_4 = CONCAT31(local_4._1_3_,5);
      FUN_004040a0(1);
      iVar8 = local_228;
    }
    else {
      iVar9 = FUN_00549ae0();
      if (iVar9 <= iVar10) goto LAB_00541622;
    }
    puVar5 = *(undefined1 **)(iVar8 + 4 + *(int *)(param_1 + 0x18));
    if (puVar5 == (undefined1 *)0x0) {
      puVar5 = &DAT_0064a3b4;
    }
    FUN_005acdb0(puVar5);
    FUN_005ad1a0();
    local_4 = local_4 & 0xffffff00;
    FUN_005acca0();
    local_228 = iVar8 + 0x38;
    iVar10 = iVar10 + 1;
  }
  FUN_004040a0(0);
  uVar6 = 0xffffffff;
  pcVar11 = s_NrActions_006a144c;
  do {
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    cVar1 = *pcVar11;
    pcVar11 = pcVar11 + 1;
  } while (cVar1 != '\0');
  uVar6 = ~uVar6 - 1;
  cVar1 = FUN_00401940(uVar6,1);
  if (cVar1 != '\0') {
    pcVar11 = s_NrActions_006a144c;
    for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined4 *)local_234 = *(undefined4 *)pcVar11;
      pcVar11 = pcVar11 + 4;
      local_234 = local_234 + 4;
    }
    for (uVar7 = uVar6 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *local_234 = *pcVar11;
      pcVar11 = pcVar11 + 1;
      local_234 = local_234 + 1;
    }
    FUN_00404190(uVar6);
  }
  local_4._0_1_ = 8;
  uVar2 = FUN_00436f90(local_204);
  local_4._0_1_ = 9;
  uVar3 = FUN_00548d40(local_214);
  local_4._0_1_ = 10;
  FUN_005ac9d0(local_238,uVar3,0,uVar2,0);
  local_4._0_1_ = 0xe;
  FUN_004040a0(1);
  local_4._0_1_ = 0xd;
  FUN_004040a0(1);
  local_4 = CONCAT31(local_4._1_3_,0xc);
  FUN_004040a0(1);
  puVar12 = local_10c;
  for (iVar8 = 0x40; iVar8 != 0; iVar8 = iVar8 + -1) {
    *puVar12 = 0;
    puVar12 = puVar12 + 1;
  }
  FUN_0060af1b(local_10c,0xff,&DAT_00690818,iVar10);
  FUN_005acdb0(local_10c);
  FUN_005ad1a0();
  local_4 = local_4 & 0xffffff00;
  FUN_005acca0();
  if (local_220 != 0) {
    cVar1 = *(char *)(local_220 + -1);
    if ((cVar1 != '\0') && (cVar1 != -1)) {
      *(char *)(local_220 + -1) = cVar1 + -1;
      ExceptionList = local_c;
      return;
    }
    FUN_005fe5f0(local_220 + -1);
  }
  ExceptionList = local_c;
  return;
}

