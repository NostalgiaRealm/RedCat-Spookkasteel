/*
 * FUN_005471e0 at 005471e0
 * undefined FUN_005471e0(void)
 * Address ranges: 005471e0-0054742c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_005471e0(int param_1)

{
  char cVar1;
  code *pcVar2;
  char *pcVar3;
  undefined1 *puVar4;
  undefined4 uVar5;
  uint uVar6;
  char *_Str1;
  int iVar7;
  int iVar8;
  int local_30;
  undefined1 local_2c [16];
  undefined1 local_1c [4];
  int iStack_18;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0063d198;
  pvStack_c = ExceptionList;
  iVar8 = 0;
  local_30 = 0;
  ExceptionList = &pvStack_c;
  do {
    if (DAT_006ba76c == 0) {
      iVar7 = 0;
    }
    else {
      iVar7 = (DAT_006ba770 - DAT_006ba76c) / 0x14;
    }
    if (iVar7 <= local_30) {
      puVar4 = *(undefined1 **)(param_1 + 4);
      if (puVar4 == (undefined1 *)0x0) {
        puVar4 = &DAT_0064a3b4;
      }
      uVar5 = FUN_005ae390(local_1c,s_No_such_key___s___006a166c,puVar4);
      local_4 = 2;
      pcVar2 = (code *)FUN_005a07f0(s_false_0068d2d0,s_D__Work_RCHorror_AdamSource_Adam_006a13c8,
                                    0x642,uVar5);
      (*pcVar2)();
      if (iStack_18 != 0) {
        cVar1 = *(char *)(iStack_18 + -1);
        if ((cVar1 == '\0') || (cVar1 == -1)) {
          FUN_005fe5f0((char *)(iStack_18 + -1));
        }
        else {
          *(char *)(iStack_18 + -1) = cVar1 + -1;
        }
      }
      ExceptionList = pvStack_c;
      return 0xffffffff;
    }
    if (iVar8 < 0) {
LAB_00547247:
      local_2c[0] = (undefined1)param_1;
      FUN_004040a0(0);
      uVar6 = 0xffffffff;
      pcVar3 = &DAT_006b3f70;
      do {
        if (uVar6 == 0) break;
        uVar6 = uVar6 - 1;
        cVar1 = *pcVar3;
        pcVar3 = pcVar3 + 1;
      } while (cVar1 != '\0');
      FUN_004040f0(&DAT_006b3f70,~uVar6 - 1);
      local_4 = 0;
      pcVar2 = (code *)FUN_005a07f0(s_a_Index>_0____a_Index<Count()_0068f470,
                                    s___AdamSource_DaviList_h_0068f458,0x91,local_2c);
      (*pcVar2)();
      local_4 = 0xffffffff;
      FUN_004040a0(1);
    }
    else {
      iVar7 = FUN_00548c30();
      if (iVar7 <= local_30) goto LAB_00547247;
    }
    pcVar3 = *(char **)(iVar8 + 4 + DAT_006ba76c);
    if (pcVar3 == (char *)0x0) {
      pcVar3 = "";
    }
    _Str1 = *(char **)(param_1 + 4);
    if (_Str1 == (char *)0x0) {
      _Str1 = "";
    }
    iVar7 = __strcmpi(_Str1,pcVar3);
    if (iVar7 == 0) break;
    local_30 = local_30 + 1;
    iVar8 = iVar8 + 0x14;
  } while( true );
  if (-1 < local_30) {
    if (DAT_006ba76c == 0) {
      iVar8 = 0;
    }
    else {
      iVar8 = (DAT_006ba770 - DAT_006ba76c) / 0x14;
    }
    if (local_30 < iVar8) goto LAB_00547391;
  }
  local_2c[0] = (undefined1)param_1;
  FUN_004040a0(0);
  uVar6 = 0xffffffff;
  pcVar3 = &DAT_006b3f70;
  do {
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  FUN_004040f0(&DAT_006b3f70,~uVar6 - 1);
  local_4 = 1;
  pcVar2 = (code *)FUN_005a07f0(s_a_Index>_0____a_Index<Count()_0068f470,
                                s___AdamSource_DaviList_h_0068f458,0x91,local_2c);
  (*pcVar2)();
  local_4 = 0xffffffff;
  FUN_004040a0(1);
LAB_00547391:
  ExceptionList = pvStack_c;
  return *(undefined4 *)(DAT_006ba76c + 0x10 + local_30 * 0x14);
}

