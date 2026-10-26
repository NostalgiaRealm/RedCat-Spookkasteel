/*
 * FUN_004f4e10 at 004f4e10
 * undefined FUN_004f4e10(void)
 * Address ranges: 004f4e10-004f516f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_004f4e10(undefined1 *param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  char cVar3;
  int *piVar4;
  code *pcVar5;
  undefined1 **ppuVar6;
  uint uVar7;
  char *pcVar8;
  int *piStack_54;
  undefined1 **ppuStack_50;
  undefined1 *local_38;
  undefined1 *local_34;
  char local_2c [16];
  int aiStack_1c [4];
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006349c8;
  pvStack_c = ExceptionList;
  ppuStack_50 = (undefined1 **)0x1b9;
  piStack_54 = (int *)s_D__Work_RCHorror_AdamSource_Adam_0069c628;
  ExceptionList = &pvStack_c;
  local_34 = param_1;
  FUN_005ae5f0();
  local_4 = 0;
  ppuStack_50 = (undefined1 **)0x4f4e5a;
  FUN_005844b0();
  piVar2 = param_2;
  ppuStack_50 = &local_38;
  local_4._0_1_ = 1;
  piStack_54 = (int *)0x4f4e6f;
  piVar4 = (int *)FUN_004042e0();
  local_4._0_1_ = 2;
  if ((undefined1 *)*piVar4 != param_1) {
    ppuStack_50 = (undefined1 **)0x0;
    local_2c[0] = (char)param_2;
    piStack_54 = (int *)0x4f4e92;
    FUN_004040a0();
    uVar7 = 0xffffffff;
    pcVar8 = &DAT_006b3f70;
    do {
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      cVar3 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar3 != '\0');
    ppuStack_50 = (undefined1 **)(~uVar7 - 1);
    piStack_54 = (int *)&DAT_006b3f70;
    FUN_004040f0();
    ppuStack_50 = (undefined1 **)local_2c;
    local_4._0_1_ = 3;
    piStack_54 = (int *)0x1ba;
    pcVar5 = (code *)FUN_005a07f0(s_a_GameObject_>GetSubLevel____thi_0069c854,
                                  s_D__Work_RCHorror_AdamSource_Adam_0069c628);
    (*pcVar5)();
    local_4._0_1_ = 2;
    ppuStack_50 = (undefined1 **)0x1;
    piStack_54 = (int *)0x4f4ee2;
    FUN_004040a0();
  }
  local_4._0_1_ = 1;
  ppuStack_50 = (undefined1 **)0x4f4ef0;
  FUN_0057d310();
  local_4._0_1_ = 0;
  ppuStack_50 = (undefined1 **)0x4f4efe;
  FUN_0057d310();
  ppuStack_50 = (undefined1 **)&param_2;
  piStack_54 = (int *)0x4f4f0a;
  piVar4 = (int *)FUN_00504650();
  iVar1 = *piVar4;
  if (param_2 != (int *)0x0) {
    ppuStack_50 = (undefined1 **)0x4f4f1d;
    FUN_004098d0();
  }
  if (iVar1 != 0) {
    ppuStack_50 = &local_38;
    piStack_54 = (int *)0x4f4f31;
    piVar4 = (int *)FUN_00504650();
    local_4._0_1_ = 4;
    if (*piVar4 == 0) {
      ppuStack_50 = (undefined1 **)&param_2;
      piStack_54 = (int *)&DAT_006b3f70;
      FUN_00409810();
      ppuStack_50 = (undefined1 **)aiStack_1c;
      local_4._0_1_ = 5;
      piStack_54 = (int *)0xb6;
      pcVar5 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638);
      (*pcVar5)();
      local_4._0_1_ = 4;
      ppuStack_50 = (undefined1 **)0x1;
      piStack_54 = (int *)0x4f4f84;
      FUN_004040a0();
    }
    if (*(int **)(*piVar4 + 0x30) != piVar2) {
      ppuStack_50 = (undefined1 **)0x0;
      local_2c[0] = (char)param_2;
      piStack_54 = (int *)0x4f4f9e;
      FUN_004040a0();
      uVar7 = 0xffffffff;
      pcVar8 = &DAT_006b3f70;
      do {
        if (uVar7 == 0) break;
        uVar7 = uVar7 - 1;
        cVar3 = *pcVar8;
        pcVar8 = pcVar8 + 1;
      } while (cVar3 != '\0');
      ppuStack_50 = (undefined1 **)(~uVar7 - 1);
      piStack_54 = (int *)&DAT_006b3f70;
      FUN_004040f0();
      ppuStack_50 = (undefined1 **)local_2c;
      local_4._0_1_ = 6;
      piStack_54 = (int *)0x1bf;
      pcVar5 = (code *)FUN_005a07f0(s_a_GameObject_>GetDSGameObjectPtr_0069c810,
                                    s_D__Work_RCHorror_AdamSource_Adam_0069c628);
      (*pcVar5)();
      local_4._0_1_ = 4;
      ppuStack_50 = (undefined1 **)0x1;
      piStack_54 = (int *)0x4f4fee;
      FUN_004040a0();
    }
    local_4._0_1_ = 0;
    if (local_38 != (undefined1 *)0x0) {
      ppuStack_50 = (undefined1 **)0x4f5000;
      FUN_004098d0();
    }
    ppuStack_50 = &local_38;
    piStack_54 = (int *)0x4f500c;
    piVar4 = (int *)FUN_00504650();
    local_4._0_1_ = 7;
    if (*piVar4 == 0) {
      ppuStack_50 = (undefined1 **)&param_2;
      piStack_54 = (int *)&DAT_006b3f70;
      FUN_00409810();
      ppuStack_50 = (undefined1 **)aiStack_1c;
      local_4._0_1_ = 8;
      piStack_54 = (int *)0xb6;
      pcVar5 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638);
      (*pcVar5)();
      local_4._0_1_ = 7;
      ppuStack_50 = (undefined1 **)0x1;
      piStack_54 = (int *)0x4f505f;
      FUN_004040a0();
    }
    local_4._0_1_ = 0;
    *(undefined4 *)(*piVar4 + 0x30) = 0;
    if (local_38 != (undefined1 *)0x0) {
      ppuStack_50 = (undefined1 **)0x4f507a;
      FUN_004098d0();
    }
  }
  ppuStack_50 = (undefined1 **)0x4f5081;
  cVar3 = (**(code **)(*piVar2 + 0x3c))();
  if (cVar3 != '\0') {
    ppuStack_50 = (undefined1 **)&param_2;
    piStack_54 = piVar2 + 0x17;
    ppuVar6 = (undefined1 **)FUN_004fd4d0();
    if ((char)param_2 == '\0') {
      ppuStack_50 = (undefined1 **)0x0;
      local_2c[0] = (char)param_2;
      piStack_54 = (int *)0x4f50b9;
      FUN_004040a0();
      uVar7 = 0xffffffff;
      pcVar8 = &DAT_006b3f70;
      do {
        if (uVar7 == 0) break;
        uVar7 = uVar7 - 1;
        cVar3 = *pcVar8;
        pcVar8 = pcVar8 + 1;
      } while (cVar3 != '\0');
      ppuStack_50 = (undefined1 **)(~uVar7 - 1);
      piStack_54 = (int *)&DAT_006b3f70;
      FUN_004040f0();
      ppuStack_50 = (undefined1 **)local_2c;
      local_4._0_1_ = 9;
      piStack_54 = (int *)0x78;
      pcVar5 = (code *)FUN_005a07f0(s_exist_00695224,s___AdamSource_DaviSortedList_h_00690798);
      (*pcVar5)();
      local_4._0_1_ = 0;
      ppuStack_50 = (undefined1 **)0x1;
      piStack_54 = (int *)0x4f5107;
      FUN_004040a0();
    }
    piStack_54 = (int *)0x4f510f;
    ppuStack_50 = ppuVar6;
    FUN_004fd9f0();
    param_1 = local_34;
  }
  ppuStack_50 = (undefined1 **)(piVar2 + 10);
  piStack_54 = (int *)0x4f511f;
  FUN_004fd210();
  local_34 = (undefined1 *)&ppuStack_50;
  ppuStack_50 = (undefined1 **)0x0;
  local_38 = (undefined1 *)&piStack_54;
  local_4._0_1_ = 10;
  FUN_00457240(param_1);
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_005028d0();
  local_4 = 0xffffffff;
  ppuStack_50 = (undefined1 **)0x4f515b;
  FUN_005ae770();
  ExceptionList = pvStack_c;
  return;
}

