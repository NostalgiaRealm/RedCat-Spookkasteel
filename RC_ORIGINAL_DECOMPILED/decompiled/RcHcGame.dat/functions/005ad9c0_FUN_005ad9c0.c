/*
 * FUN_005ad9c0 at 005ad9c0
 * undefined FUN_005ad9c0(void)
 * Address ranges: 005ad9c0-005adc53
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Removing unreachable block (ram,0x005adb3e) */

undefined1 FUN_005ad9c0(int param_1,int param_2,undefined4 param_3,uint *param_4)

{
  char cVar1;
  char cVar2;
  char *pcVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined1 local_3c [16];
  undefined1 local_2c [4];
  int local_28;
  undefined1 local_1c [4];
  int local_18;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00645e98;
  local_c = ExceptionList;
  uVar6 = 0xffffffff;
  pcVar3 = &DAT_006b3f70;
  do {
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  uVar6 = ~uVar6 - 1;
  ExceptionList = &local_c;
  cVar1 = FUN_00401940(uVar6,1);
  if (cVar1 != '\0') {
    puVar8 = (undefined4 *)&DAT_006b3f70;
    puVar9 = *(undefined4 **)(param_2 + 4);
    for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *puVar9 = *puVar8;
      puVar8 = puVar8 + 1;
      puVar9 = puVar9 + 1;
    }
    for (uVar7 = uVar6 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined1 *)puVar9 = *(undefined1 *)puVar8;
      puVar8 = (undefined4 *)((int)puVar8 + 1);
      puVar9 = (undefined4 *)((int)puVar9 + 1);
    }
    FUN_00404190(uVar6);
  }
  uVar6 = *param_4;
  if (*(uint *)(param_1 + 8) <= uVar6) {
    ExceptionList = local_c;
    return 1;
  }
  do {
    if (*(int *)(param_1 + 4) == 0) {
      pcVar3 = "";
    }
    else {
      pcVar3 = (char *)(uVar6 + *(int *)(param_1 + 4));
    }
    cVar1 = *pcVar3;
    switch(cVar1) {
    case ' ':
      FUN_005ad450(param_1,param_4);
      uVar6 = *param_4;
      if (*(uint *)(param_1 + 8) <= uVar6) {
        ExceptionList = local_c;
        return 1;
      }
      break;
    default:
      iVar4 = FUN_0060b2ba((int)cVar1);
      if (((iVar4 == 0) && (cVar1 != '-')) && (cVar1 != '+')) {
        cVar2 = FUN_005ad6c0(cVar1);
        if (cVar2 != '\0') {
          FUN_005ad880(param_1,param_4,param_2);
          ExceptionList = local_c;
          return 1;
        }
        uVar5 = FUN_005ae390(local_1c,s_ERROR__Syntax_error_near___c__006a8fb8,(int)cVar1);
        local_4 = 2;
        FUN_0040cc00(uVar5,0,0xffffffff);
        if (local_18 != 0) {
          cVar1 = *(char *)(local_18 + -1);
          if ((cVar1 != '\0') && (cVar1 != -1)) {
            *(char *)(local_18 + -1) = cVar1 + -1;
            ExceptionList = local_c;
            return 0;
          }
          FUN_005fe5f0((char *)(local_18 + -1));
        }
        ExceptionList = local_c;
        return 0;
      }
      FUN_005ad740(param_1,param_4,param_2);
      ExceptionList = local_c;
      return 1;
    case '\"':
    case '\'':
      *param_4 = *param_4 + 1;
      cVar2 = FUN_005ad490(param_1,cVar1,param_4,param_2,param_3);
      if (cVar2 == '\0') {
        ExceptionList = local_c;
        return 0;
      }
      uVar5 = FUN_005ae170(local_2c,cVar1,param_2);
      local_4 = 0;
      uVar5 = FUN_0058a9b0(local_3c,uVar5,cVar1);
      local_4._0_1_ = 1;
      FUN_0040cc00(uVar5,0,0xffffffff);
      local_4 = (uint)local_4._1_3_ << 8;
      FUN_004040a0(1);
      if (local_28 == 0) {
        ExceptionList = local_c;
        return 1;
      }
      cVar1 = *(char *)(local_28 + -1);
      if ((cVar1 != '\0') && (cVar1 != -1)) {
        *(char *)(local_28 + -1) = cVar1 + -1;
        ExceptionList = local_c;
        return 1;
      }
      FUN_005fe5f0((char *)(local_28 + -1));
      ExceptionList = local_c;
      return 1;
    case '(':
    case ')':
    case ',':
    case '.':
    case ';':
    case '=':
      *param_4 = *param_4 + 1;
      cVar2 = FUN_00401940(1,1);
      if (cVar2 == '\0') {
        ExceptionList = local_c;
        return 1;
      }
      **(char **)(param_2 + 4) = cVar1;
      *(undefined4 *)(param_2 + 8) = 1;
      *(undefined1 *)(*(int *)(param_2 + 4) + 1) = 0;
      ExceptionList = local_c;
      return 1;
    }
  } while( true );
}

