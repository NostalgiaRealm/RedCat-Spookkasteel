/*
 * FUN_00503800 at 00503800
 * undefined FUN_00503800(void)
 * Address ranges: 00503800-00503add
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 * FUN_00503800(undefined1 *param_1,int param_2)

{
  char cVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
  char *_Str1;
  int iVar5;
  uint uVar6;
  char *pcVar7;
  undefined4 local_50;
  undefined1 local_4c [4];
  undefined1 *local_48;
  int local_44;
  undefined4 local_40;
  undefined1 local_3c [4];
  char *local_38;
  int local_34;
  undefined1 local_2c [4];
  undefined1 *local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined1 local_1c [4];
  int local_18;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00635ce0;
  local_c = ExceptionList;
  local_50 = 0;
  local_3c[0] = (undefined1)param_2;
  ExceptionList = &local_c;
  FUN_004040a0(0);
  local_2c[0] = (undefined1)param_2;
  local_4 = 0;
  local_50 = 0;
  FUN_004040a0(0);
  local_4._0_1_ = 1;
  local_4c[0] = (undefined1)param_2;
  FUN_004040a0(0);
  local_4._0_1_ = 2;
  do {
    cVar1 = FUN_005ad9c0(param_2,local_4c,local_2c,&local_50);
    if (cVar1 == '\0') {
LAB_0050392b:
      puVar2 = local_28;
      if (local_28 == (undefined1 *)0x0) {
        puVar2 = &DAT_0064a3b4;
      }
      puVar4 = *(undefined1 **)(param_2 + 4);
      if (puVar4 == (undefined1 *)0x0) {
        puVar4 = &DAT_0064a3b4;
      }
      uVar3 = FUN_005ae390(local_1c,s_CAdamGO__MakeValidDaviName____In_0069dce0,puVar4,puVar2);
      local_4._0_1_ = 4;
      FUN_004c4410(s_D__Work_RCHorror_AdamSource_Adam_0069d990,0x329,uVar3);
      local_4._0_1_ = 2;
      FUN_004040a0(1);
LAB_00503a0d:
      *param_1 = local_3c[0];
      *(undefined4 *)(param_1 + 4) = 0;
      *(undefined4 *)(param_1 + 8) = 0;
      *(undefined4 *)(param_1 + 0xc) = 0;
      FUN_0040cc00(local_3c,0,0xffffffff);
      if (local_48 != (undefined1 *)0x0) {
        cVar1 = local_48[-1];
        if ((cVar1 == '\0') || (cVar1 == -1)) {
          FUN_005fe5f0(local_48 + -1);
        }
        else {
          local_48[-1] = cVar1 + -1;
        }
      }
      local_48 = (undefined1 *)0x0;
      local_44 = 0;
      local_40 = 0;
      if (local_28 != (undefined1 *)0x0) {
        cVar1 = local_28[-1];
        if ((cVar1 == '\0') || (cVar1 == -1)) {
          FUN_005fe5f0(local_28 + -1);
        }
        else {
          local_28[-1] = cVar1 + -1;
        }
      }
      local_28 = (undefined1 *)0x0;
      local_24 = 0;
      local_20 = 0;
      if (local_38 != (char *)0x0) {
        cVar1 = local_38[-1];
        if ((cVar1 != '\0') && (cVar1 != -1)) {
          local_38[-1] = cVar1 + -1;
          ExceptionList = local_c;
          return param_1;
        }
        FUN_005fe5f0(local_38 + -1);
      }
      ExceptionList = local_c;
      return param_1;
    }
    if (local_44 == 0) {
      pcVar7 = "";
      if (local_38 != (char *)0x0) {
        pcVar7 = local_38;
      }
      _Str1 = *(char **)(param_2 + 4);
      if (_Str1 == (char *)0x0) {
        _Str1 = "";
      }
      iVar5 = __strcmpi(_Str1,pcVar7);
      if (iVar5 != 0) {
        pcVar7 = local_38;
        if (local_38 == (char *)0x0) {
          pcVar7 = "";
        }
        puVar2 = *(undefined1 **)(param_2 + 4);
        if (puVar2 == (undefined1 *)0x0) {
          puVar2 = &DAT_0064a3b4;
        }
        uVar3 = FUN_005ae390(local_1c,s_CAdamGO__MakeValidDaviName____Co_0069dca0,puVar2,pcVar7);
        local_4._0_1_ = 5;
        FUN_004c43b0(uVar3);
        local_4._0_1_ = 2;
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
      goto LAB_00503a0d;
    }
    cVar1 = FUN_005adc90(local_4c);
    if (cVar1 == '\0') {
      puVar2 = local_48;
      if (local_48 == (undefined1 *)0x0) {
        puVar2 = &DAT_0064a3b4;
      }
      uVar3 = FUN_005ae390(local_1c,s_Expected_alphanumeric_character__0069dd1c,puVar2);
      local_4._0_1_ = 3;
      FUN_0040cc00(uVar3,0,0xffffffff);
      local_4._0_1_ = 2;
      FUN_004040a0(1);
      goto LAB_0050392b;
    }
    if (local_34 != 0) {
      uVar6 = 0xffffffff;
      pcVar7 = (char *)&DAT_00693460;
      do {
        if (uVar6 == 0) break;
        uVar6 = uVar6 - 1;
        cVar1 = *pcVar7;
        pcVar7 = pcVar7 + 1;
      } while (cVar1 != '\0');
      FUN_00484c30(&DAT_00693460,~uVar6 - 1);
    }
    FUN_0045db40(local_4c,0,0xffffffff);
  } while( true );
}

