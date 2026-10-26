/*
 * FUN_00541c10 at 00541c10
 * undefined FUN_00541c10(void)
 * Address ranges: 00541c10-00542027
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00541c10(void)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  code *pcVar6;
  int iVar7;
  undefined1 *puVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  char *pcVar12;
  undefined4 *puVar13;
  undefined1 local_266;
  undefined1 local_265;
  undefined1 local_264 [16];
  undefined1 local_254;
  undefined1 *puStack_250;
  undefined4 uStack_24c;
  undefined4 uStack_248;
  undefined1 local_244 [4];
  int iStack_240;
  undefined1 auStack_234 [16];
  undefined1 local_224 [16];
  undefined1 auStack_214 [16];
  undefined1 local_204 [16];
  undefined1 local_1f4 [232];
  undefined4 auStack_10c [64];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0063c92f;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_004040a0(0);
  local_254 = local_266;
  local_4 = 0;
  FUN_004040a0(0);
  local_4 = CONCAT31(local_4._1_3_,1);
  iVar10 = 0;
  iVar2 = FUN_00548c30();
  if (0 < iVar2) {
    iVar11 = 0;
    iVar2 = iVar10;
    do {
      iVar10 = iVar2 + 1;
      uVar3 = FUN_005ae390(local_204,s_Key_i_006a1474,iVar10);
      local_4._0_1_ = 2;
      FUN_0040cc00(uVar3,0,0xffffffff);
      local_4._0_1_ = 1;
      FUN_004040a0(1);
      uVar3 = FUN_00436f90(local_224);
      local_4._0_1_ = 3;
      uVar4 = FUN_00548d70(local_1f4);
      local_4._0_1_ = 4;
      FUN_005acaf0(local_244,uVar4,&DAT_006b3f70,uVar3,0);
      local_4._0_1_ = 7;
      FUN_004040a0(1);
      local_4 = CONCAT31(local_4._1_3_,6);
      FUN_004040a0(1);
      if ((iVar11 < 0) || (iVar5 = FUN_00548c30(), iVar5 <= iVar2)) {
        FUN_00409810(&DAT_006b3f70,&local_266);
        local_4._0_1_ = 8;
        pcVar6 = (code *)FUN_005a07f0(s_a_Index>_0____a_Index<Count()_0068f470,
                                      s___AdamSource_DaviList_h_0068f458,0x91,local_264);
        (*pcVar6)();
        local_4 = CONCAT31(local_4._1_3_,6);
        FUN_004040a0(1);
      }
      iVar5 = DAT_006ba76c;
      if ((iVar11 < 0) || (iVar7 = FUN_00548c30(), iVar7 <= iVar2)) {
        FUN_00409810(&DAT_006b3f70,&local_265);
        local_4._0_1_ = 9;
        pcVar6 = (code *)FUN_005a07f0(s_a_Index>_0____a_Index<Count()_0068f470,
                                      s___AdamSource_DaviList_h_0068f458,0x91,auStack_214);
        (*pcVar6)();
        local_4 = CONCAT31(local_4._1_3_,6);
        FUN_004040a0(1);
      }
      puVar8 = *(undefined1 **)(iVar11 + 4 + DAT_006ba76c);
      if (puVar8 == (undefined1 *)0x0) {
        puVar8 = &DAT_0064a3b4;
      }
      uVar3 = FUN_005ae390(auStack_234,s__s__i_006a146c,puVar8,
                           *(undefined4 *)(iVar11 + 0x10 + iVar5));
      local_4._0_1_ = 10;
      FUN_0040cc00(uVar3,0,0xffffffff);
      local_4._0_1_ = 6;
      FUN_004040a0(1);
      puVar8 = puStack_250;
      if (puStack_250 == (undefined1 *)0x0) {
        puVar8 = &DAT_0064a3b4;
      }
      FUN_005acdb0(puVar8);
      FUN_005ad1a0();
      local_4 = CONCAT31(local_4._1_3_,1);
      FUN_005acca0();
      iVar11 = iVar11 + 0x14;
      iVar5 = FUN_00548c30();
      iVar2 = iVar10;
    } while (iVar10 < iVar5);
  }
  local_264[0] = local_265;
  FUN_004040a0(0);
  uVar9 = 0xffffffff;
  pcVar12 = &DAT_006a1464;
  do {
    if (uVar9 == 0) break;
    uVar9 = uVar9 - 1;
    cVar1 = *pcVar12;
    pcVar12 = pcVar12 + 1;
  } while (cVar1 != '\0');
  FUN_004040f0(&DAT_006a1464,~uVar9 - 1);
  local_4._0_1_ = 0xb;
  uVar3 = FUN_00436f90(local_224);
  local_4._0_1_ = 0xc;
  uVar4 = FUN_00548d70(auStack_234);
  local_4._0_1_ = 0xd;
  FUN_005ac9d0(local_264,uVar4,0,uVar3,0);
  local_4._0_1_ = 0x11;
  FUN_004040a0(1);
  local_4._0_1_ = 0x10;
  FUN_004040a0(1);
  local_4 = CONCAT31(local_4._1_3_,0xf);
  FUN_004040a0(1);
  puVar13 = auStack_10c;
  for (iVar2 = 0x40; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar13 = 0;
    puVar13 = puVar13 + 1;
  }
  FUN_0060af1b(auStack_10c,0xff,&DAT_00690818,iVar10);
  FUN_005acdb0(auStack_10c);
  FUN_005ad1a0();
  local_4 = CONCAT31(local_4._1_3_,1);
  FUN_005acca0();
  if (puStack_250 != (undefined1 *)0x0) {
    cVar1 = puStack_250[-1];
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_005fe5f0(puStack_250 + -1);
    }
    else {
      puStack_250[-1] = cVar1 + -1;
    }
  }
  puStack_250 = (undefined1 *)0x0;
  uStack_24c = 0;
  uStack_248 = 0;
  if (iStack_240 != 0) {
    cVar1 = *(char *)(iStack_240 + -1);
    if ((cVar1 != '\0') && (cVar1 != -1)) {
      *(char *)(iStack_240 + -1) = cVar1 + -1;
      ExceptionList = pvStack_c;
      return;
    }
    FUN_005fe5f0(iStack_240 + -1);
  }
  ExceptionList = pvStack_c;
  return;
}

