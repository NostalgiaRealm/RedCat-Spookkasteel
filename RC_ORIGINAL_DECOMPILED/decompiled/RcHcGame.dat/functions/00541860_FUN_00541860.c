/*
 * FUN_00541860 at 00541860
 * undefined FUN_00541860(void)
 * Address ranges: 00541860-00541c0f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_00541860(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined1 *puVar5;
  int iVar6;
  undefined4 uVar7;
  uint uVar8;
  int iVar9;
  char *pcVar10;
  undefined1 local_1a1;
  int local_1a0;
  undefined1 local_19c [16];
  undefined1 local_18c [4];
  int local_188;
  undefined4 local_178;
  undefined4 local_174;
  undefined4 local_170;
  undefined4 local_15c;
  undefined4 local_158;
  undefined1 local_154 [16];
  undefined1 local_144 [16];
  undefined1 local_134 [16];
  undefined1 local_124 [16];
  undefined1 local_114 [16];
  undefined1 local_104 [16];
  undefined1 local_f4 [232];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0063c887;
  local_c = ExceptionList;
  iVar9 = 0;
  ExceptionList = &local_c;
  FUN_004040a0(0);
  uVar8 = 0xffffffff;
  pcVar10 = s_NrActions_006a144c;
  do {
    if (uVar8 == 0) break;
    uVar8 = uVar8 - 1;
    cVar1 = *pcVar10;
    pcVar10 = pcVar10 + 1;
  } while (cVar1 != '\0');
  FUN_004040f0(s_NrActions_006a144c,~uVar8 - 1);
  local_4 = 0;
  uVar2 = FUN_00436f90(local_134);
  local_4._0_1_ = 1;
  uVar3 = FUN_00548d40(local_114);
  local_4 = CONCAT31(local_4._1_3_,2);
  iVar4 = FUN_005ac9d0(local_144,uVar3,0,uVar2,0);
  iVar6 = *(int *)(iVar4 + 100);
  if (iVar6 == -0x80000000) {
    puVar5 = *(undefined1 **)(iVar4 + 0x18);
    if (puVar5 == (undefined1 *)0x0) {
      puVar5 = &DAT_0064a3b4;
    }
    iVar6 = FUN_0060af10(puVar5);
    *(int *)(iVar4 + 100) = iVar6;
  }
  local_1a0 = iVar6;
  FUN_005acca0();
  local_4._0_1_ = 1;
  FUN_004040a0(1);
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_004040a0(1);
  local_4 = 0xffffffff;
  FUN_004040a0(1);
  if (iVar6 < 1) {
    FUN_0053e000();
  }
  else {
    FUN_0044e4a0(&local_1a1);
    local_4 = 3;
    FUN_00548e30(0);
    local_4 = CONCAT31(local_4._1_3_,4);
    FUN_005493c0(0);
    uVar8 = 0xffffffff;
    local_4 = 5;
    pcVar10 = &DAT_006b3f70;
    do {
      if (uVar8 == 0) break;
      uVar8 = uVar8 - 1;
      cVar1 = *pcVar10;
      pcVar10 = pcVar10 + 1;
    } while (cVar1 != '\0');
    FUN_004040f0(&DAT_006b3f70,~uVar8 - 1);
    local_15c = 0;
    local_158 = 0;
    FUN_00544100(local_18c);
    if (0 < iVar6) {
      do {
        uVar2 = FUN_00436f90(local_124);
        local_4._0_1_ = 6;
        uVar3 = FUN_00548d40(local_104);
        iVar9 = iVar9 + 1;
        local_4._0_1_ = 7;
        uVar7 = FUN_005ae390(local_f4,s_Action_i_006a1458,iVar9);
        local_4._0_1_ = 8;
        iVar6 = FUN_005acaf0(uVar7,uVar3,&DAT_006b3f70,uVar2,0);
        local_4._0_1_ = 9;
        local_19c[0] = *(undefined1 *)(iVar6 + 0x14);
        FUN_004040a0(0);
        FUN_0040cc00((undefined1 *)(iVar6 + 0x14),0,0xffffffff);
        local_4._0_1_ = 10;
        local_154[0] = local_19c[0];
        FUN_004040a0(0);
        FUN_0040cc00(local_19c,0,0xffffffff);
        local_4._0_1_ = 0xb;
        FUN_0040cc00(local_154,0,0xffffffff);
        local_4._0_1_ = 10;
        FUN_004040a0(1);
        local_4._0_1_ = 9;
        FUN_004040a0(1);
        local_4._0_1_ = 8;
        FUN_005acca0();
        local_4._0_1_ = 7;
        FUN_004040a0(1);
        local_4._0_1_ = 6;
        FUN_004040a0(1);
        local_4 = CONCAT31(local_4._1_3_,5);
        FUN_004040a0(1);
        FUN_0054aae0(*(undefined4 *)(param_1 + 0x1c),1,local_18c);
      } while (iVar9 < local_1a0);
    }
    local_4 = 0xd;
    FUN_00514430();
    local_4 = CONCAT31(local_4._1_3_,0xc);
    FUN_00548ca0(local_178,local_174);
    FUN_005fe5f0(local_178);
    local_178 = 0;
    local_174 = 0;
    local_170 = 0;
    if (local_188 != 0) {
      cVar1 = *(char *)(local_188 + -1);
      if ((cVar1 == '\0') || (cVar1 == -1)) {
        FUN_005fe5f0(local_188 + -1);
      }
      else {
        *(char *)(local_188 + -1) = cVar1 + -1;
      }
    }
  }
  ExceptionList = local_c;
  return;
}

