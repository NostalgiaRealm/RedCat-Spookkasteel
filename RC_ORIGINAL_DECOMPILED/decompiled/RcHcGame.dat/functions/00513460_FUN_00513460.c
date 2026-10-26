/*
 * FUN_00513460 at 00513460
 * undefined FUN_00513460(void)
 * Address ranges: 00513460-0051362f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall
FUN_00513460(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  char cVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  undefined1 *puVar5;
  undefined4 uVar6;
  uint uVar7;
  char *pcVar8;
  undefined1 local_2c [4];
  int local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined1 local_1c [4];
  int local_18;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00637808;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar2 = FUN_00511810(param_2);
  if (iVar2 < 0) {
    puVar5 = *(undefined1 **)(param_2 + 4);
    if (puVar5 == (undefined1 *)0x0) {
      puVar5 = &DAT_0064a3b4;
    }
    uVar6 = FUN_005ae390(local_1c,s_Unknown_portrait___s___0069f010,puVar5);
    local_4 = 2;
    FUN_004c43e0(uVar6);
    if (local_18 != 0) {
      cVar1 = *(char *)(local_18 + -1);
      if ((cVar1 == '\0') || (cVar1 == -1)) {
        FUN_005fe5f0((char *)(local_18 + -1));
      }
      else {
        *(char *)(local_18 + -1) = cVar1 + -1;
      }
    }
  }
  else {
    if (*(int *)(param_1 + 0x17c) == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = *(int *)(param_1 + 0x180) - *(int *)(param_1 + 0x17c) >> 2;
    }
    if (iVar3 <= iVar2) {
      local_2c[0] = (undefined1)param_2;
      uVar7 = 0xffffffff;
      local_28 = 0;
      pcVar8 = &DAT_006b3f70;
      do {
        if (uVar7 == 0) break;
        uVar7 = uVar7 - 1;
        cVar1 = *pcVar8;
        pcVar8 = pcVar8 + 1;
      } while (cVar1 != '\0');
      local_24 = 0;
      local_20 = 0;
      FUN_004040f0(&DAT_006b3f70,~uVar7 - 1);
      local_4 = 0;
      pcVar4 = (code *)FUN_005a07f0(s_index_<_m_Portraits_Count()_0069f028,
                                    s_D__Work_RCHorror_AdamSource_Adam_0069ebac,0x3dd,local_2c);
      (*pcVar4)();
      local_4 = 0xffffffff;
      if (local_28 != 0) {
        cVar1 = *(char *)(local_28 + -1);
        if ((cVar1 == '\0') || (cVar1 == -1)) {
          FUN_005fe5f0((char *)(local_28 + -1));
        }
        else {
          *(char *)(local_28 + -1) = cVar1 + -1;
        }
      }
    }
    iVar3 = FUN_0044e4c0();
    if (iVar3 <= iVar2) {
      local_2c[0] = (undefined1)param_2;
      FUN_004040a0(0);
      uVar7 = 0xffffffff;
      pcVar8 = &DAT_006b3f70;
      do {
        if (uVar7 == 0) break;
        uVar7 = uVar7 - 1;
        cVar1 = *pcVar8;
        pcVar8 = pcVar8 + 1;
      } while (cVar1 != '\0');
      FUN_004040f0(&DAT_006b3f70,~uVar7 - 1);
      local_4 = 1;
      pcVar4 = (code *)FUN_005a07f0(s_a_Index>_0____a_Index<Count()_0068f470,
                                    s___AdamSource_DaviList_h_0068f458,0x97,local_2c);
      (*pcVar4)();
      local_4 = 0xffffffff;
      FUN_004040a0(1);
    }
    FUN_0050e270(param_3,param_4,param_5);
  }
  ExceptionList = local_c;
  return;
}

