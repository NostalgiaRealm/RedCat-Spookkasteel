/*
 * FUN_004e0c50 at 004e0c50
 * undefined FUN_004e0c50(void)
 * Address ranges: 004e0c50-004e0f44
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall
FUN_004e0c50(undefined4 *param_1,undefined4 param_2,undefined4 param_3,uint param_4,
            undefined4 param_5,undefined4 param_6,char *param_7,undefined1 *param_8)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  char *pcVar4;
  char *pcVar5;
  undefined1 local_1c [4];
  char *local_18;
  undefined4 local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00632660;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0049b240(param_2,param_3);
  *(undefined1 *)((int)param_1 + 0x295) = (undefined1)param_4;
  *(undefined1 *)(param_1 + 0xa5) = 0;
  param_1[0xa6] = DAT_006b9414;
  param_1[0xa7] = 0xffffffff;
  param_1[0xa8] = 3;
  *(undefined1 *)(param_1 + 0xa9) = (undefined1)param_4;
  local_4 = 0;
  FUN_004040a0(0);
  uVar2 = 0xffffffff;
  pcVar4 = &DAT_006b3f70;
  do {
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  FUN_004040f0(&DAT_006b3f70,~uVar2 - 1);
  *(undefined1 *)(param_1 + 0xad) = 0;
  local_4._0_1_ = 1;
  *(undefined1 *)(param_1 + 0xae) = *param_8;
  FUN_004040a0(0);
  FUN_0040cc00(param_8,0,0xffffffff);
  param_1[0xb2] = 0;
  *(undefined1 *)(param_1 + 0xb3) = DAT_006b940c;
  param_1[0xb4] = 0;
  param_1[0xbb] = 0;
  *(undefined1 *)(param_1 + 0xbc) = 0;
  param_1[0xbd] = 0;
  local_4._0_1_ = 3;
  FUN_004a04a0(param_1);
  local_4._0_1_ = 4;
  *param_1 = &PTR_FUN_0064f274;
  *(undefined1 *)(param_1 + 0x82) = 0;
  FUN_0049b8d0();
  *(undefined1 *)((int)param_1 + 0x20a) = 0;
  FUN_0049b8d0();
  *(undefined1 *)((int)param_1 + 0x20b) = 0;
  FUN_0049b8d0();
  *(undefined1 *)((int)param_1 + 0x209) = 0;
  FUN_0049b8d0();
  *(undefined1 *)(param_1 + 0x83) = 0;
  FUN_0049b8d0();
  if (param_7 != (char *)0x0) {
    uVar2 = 0xffffffff;
    pcVar4 = param_7;
    do {
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    param_4 = ~uVar2 - 1;
    cVar1 = FUN_00401940(param_4,1);
    if (cVar1 != '\0') {
      pcVar4 = (char *)param_1[0xaa];
      for (uVar2 = param_4 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
        *(undefined4 *)pcVar4 = *(undefined4 *)param_7;
        param_7 = param_7 + 4;
        pcVar4 = pcVar4 + 4;
      }
      for (uVar2 = param_4 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
        *pcVar4 = *param_7;
        param_7 = param_7 + 1;
        pcVar4 = pcVar4 + 1;
      }
      param_1[0xab] = param_4;
      *(undefined1 *)(param_1[0xaa] + param_4) = 0;
    }
  }
  if (*(char *)(param_1 + 0xb3) != '\0') {
    local_1c[0] = (undefined1)param_4;
    FUN_004040a0(0);
    uVar2 = 0xffffffff;
    pcVar4 = s_bounce_0069a1f4;
    do {
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    uVar2 = ~uVar2 - 1;
    cVar1 = FUN_00401940(uVar2,1);
    if (cVar1 != '\0') {
      pcVar4 = s_bounce_0069a1f4;
      pcVar5 = local_18;
      for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
        *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
        pcVar4 = pcVar4 + 4;
        pcVar5 = pcVar5 + 4;
      }
      for (uVar3 = uVar2 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
        *pcVar5 = *pcVar4;
        pcVar4 = pcVar4 + 1;
        pcVar5 = pcVar5 + 1;
      }
      FUN_00404190(uVar2);
    }
    local_4._0_1_ = 5;
    FUN_004a0660(local_1c,0,0x3f800000);
    local_4._0_1_ = 4;
    FUN_004040a0(1);
    if (*(char *)(param_1 + 0xcf) != '\0') {
      uVar3 = 0xffffffff;
      param_4._0_1_ = (undefined1)uVar2;
      pcVar4 = s_Float_motion_missing_0069a1dc;
      do {
        if (uVar3 == 0) break;
        uVar3 = uVar3 - 1;
        cVar1 = *pcVar4;
        pcVar4 = pcVar4 + 1;
      } while (cVar1 != '\0');
      local_1c[0] = (undefined1)param_4;
      local_18 = (char *)0x0;
      local_14 = 0;
      local_10 = 0;
      FUN_004040f0(s_Float_motion_missing_0069a1dc,~uVar3 - 1);
      local_4._0_1_ = 6;
      FUN_005036d0(local_1c);
      local_4._0_1_ = 4;
      if (local_18 != (char *)0x0) {
        cVar1 = local_18[-1];
        if ((cVar1 == '\0') || (cVar1 == -1)) {
          FUN_005fe5f0(local_18 + -1);
        }
        else {
          local_18[-1] = cVar1 + -1;
        }
      }
      *(undefined1 *)(param_1 + 0xb3) = 0;
    }
  }
  FUN_004e1110();
  param_1[0xb8] = param_1[0x54];
  param_1[0xba] = param_1[0x56];
  param_1[0xb9] = param_1[0x55];
  ExceptionList = local_c;
  return param_1;
}

