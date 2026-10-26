/*
 * FUN_0053b6b0 at 0053b6b0
 * undefined FUN_0053b6b0(void)
 * Address ranges: 0053b6b0-0053b932
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_0053b6b0(int param_1,int param_2,char param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  char *pcVar9;
  int local_38;
  int local_34;
  char local_2c [4];
  int local_28;
  undefined4 local_24;
  undefined4 local_20;
  char acStack_1c [16];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0063bef0;
  local_c = ExceptionList;
  if ((*(int *)(param_1 + 0x18) != 0) &&
     (iVar8 = *(int *)(param_1 + 0x1c) - *(int *)(param_1 + 0x18), iVar7 = iVar8 >> 0x1f,
     iVar8 / 0x1c + iVar7 != iVar7)) {
    if (*(int *)(param_1 + 0x18) == 0) {
      iVar7 = 0;
    }
    else {
      iVar7 = (*(int *)(param_1 + 0x1c) - *(int *)(param_1 + 0x18)) / 0x1c;
    }
    iVar7 = *(int *)(param_1 + 0x18) + -0x1c + iVar7 * 0x1c;
    iVar8 = *(int *)(*(int *)(iVar7 + 0x14) + 0x44);
    if ((iVar8 != 0) && (0 < (int)(*(int *)(*(int *)(iVar7 + 0x14) + 0x48) - iVar8 & 0xfffffffcU)))
    {
      local_34 = 0;
      local_38 = param_2;
      ExceptionList = &local_c;
      while( true ) {
        iVar8 = *(int *)(iVar7 + 0x14);
        if (*(int *)(iVar8 + 0x44) == 0) {
          iVar2 = 0;
        }
        else {
          iVar2 = *(int *)(iVar8 + 0x48) - *(int *)(iVar8 + 0x44) >> 2;
        }
        if (iVar2 <= local_34) break;
        iVar2 = local_38;
        if (param_3 != '\0') {
          iVar2 = local_34 + param_2;
        }
        if (*(int *)(iVar8 + 0x44) == 0) {
          iVar3 = 0;
        }
        else {
          iVar3 = *(int *)(iVar8 + 0x48) - *(int *)(iVar8 + 0x44) >> 2;
        }
        if (*(int *)(iVar8 + 0x44) == 0) {
          iVar5 = 0;
        }
        else {
          iVar5 = *(int *)(iVar8 + 0x48) - *(int *)(iVar8 + 0x44) >> 2;
        }
        iVar5 = (iVar3 + iVar2) % iVar5;
        if (iVar5 < 0) {
LAB_0053b7d9:
          local_2c[0] = param_3;
          uVar6 = 0xffffffff;
          local_28 = 0;
          pcVar9 = &DAT_006b3f70;
          do {
            if (uVar6 == 0) break;
            uVar6 = uVar6 - 1;
            cVar1 = *pcVar9;
            pcVar9 = pcVar9 + 1;
          } while (cVar1 != '\0');
          local_24 = 0;
          local_20 = 0;
          FUN_004040f0(&DAT_006b3f70,~uVar6 - 1);
          local_4 = 0;
          pcVar4 = (code *)FUN_005a07f0(s_lookAt_>__0____lookAt_<_current__006a10a8,
                                        s_D__Work_RCHorror_AdamSource_Adam_006a0d5c,0x37b,local_2c);
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
          local_28 = 0;
          local_24 = 0;
          local_20 = 0;
        }
        else {
          if (*(int *)(iVar8 + 0x44) == 0) {
            iVar8 = 0;
          }
          else {
            iVar8 = *(int *)(iVar8 + 0x48) - *(int *)(iVar8 + 0x44) >> 2;
          }
          if (iVar8 <= iVar5) goto LAB_0053b7d9;
        }
        iVar8 = *(int *)(iVar7 + 0x14);
        if ((iVar5 < 0) || (iVar2 = FUN_0044e4c0(), iVar2 <= iVar5)) {
          acStack_1c[0] = param_3;
          FUN_004040a0(0);
          uVar6 = 0xffffffff;
          pcVar9 = &DAT_006b3f70;
          do {
            if (uVar6 == 0) break;
            uVar6 = uVar6 - 1;
            cVar1 = *pcVar9;
            pcVar9 = pcVar9 + 1;
          } while (cVar1 != '\0');
          FUN_004040f0(&DAT_006b3f70,~uVar6 - 1);
          local_4 = 1;
          pcVar4 = (code *)FUN_005a07f0(s_a_Index_>__0____a_Index_<_GetIte_006a106c,
                                        s_D__Work_RCHorror_AdamSource_Adam_006a1030,0xfb,acStack_1c)
          ;
          (*pcVar4)();
          local_4 = 0xffffffff;
          FUN_004040a0(1);
        }
        if (*(char *)(*(int *)(*(int *)(iVar8 + 0x44) + iVar5 * 4) + 0x28) != '\0') {
          *(int *)(iVar7 + 0x18) = iVar5;
          ExceptionList = local_c;
          return;
        }
        local_34 = local_34 + 1;
        local_38 = local_38 + -1;
      }
    }
    *(undefined4 *)(iVar7 + 0x18) = 0xffffffff;
  }
  ExceptionList = local_c;
  return;
}

