/*
 * FUN_004cb180 at 004cb180
 * undefined FUN_004cb180(void)
 * Address ranges: 004cb180-004cb2fb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_004cb180(int *param_1)

{
  char cVar1;
  undefined4 *puVar2;
  int iVar3;
  code *pcVar4;
  uint uVar5;
  undefined4 unaff_EBX;
  undefined *puVar6;
  char *pcVar7;
  int iStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined1 local_28 [8];
  undefined1 auStack_20 [4];
  int iStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  void *pvStack_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00630c48;
  local_c = ExceptionList;
  iVar3 = param_1[0x5e];
  if (iVar3 == 1) {
    puVar6 = &DAT_006ba480;
  }
  else if (iVar3 == 2) {
    puVar6 = &DAT_006ba458;
  }
  else {
    if (iVar3 != 3) goto LAB_004cb1c3;
    puVar6 = &DAT_006ba430;
  }
  if (puVar6 != (undefined *)0x0) {
    ExceptionList = &local_c;
    puVar2 = (undefined4 *)(**(code **)(*param_1 + 0x48))(local_28);
    uStack_38 = *puVar2;
    uStack_34 = puVar2[1];
    uStack_30 = puVar2[2];
    iVar3 = DAT_006c8de0;
    if (DAT_006c8de0 == 0) {
      iVar3 = FUN_0055b280();
    }
    if (*(int *)(iVar3 + 0xfc) == 0) {
      auStack_20[0] = (undefined1)((uint)unaff_EBX >> 0x18);
      uVar5 = 0xffffffff;
      pcVar7 = &DAT_006b3f70;
      do {
        if (uVar5 == 0) break;
        uVar5 = uVar5 - 1;
        cVar1 = *pcVar7;
        pcVar7 = pcVar7 + 1;
      } while (cVar1 != '\0');
      iStack_1c = 0;
      uStack_18 = 0;
      uStack_14 = 0;
      FUN_004040f0(&DAT_006b3f70,~uVar5 - 1);
      puStack_8 = (undefined1 *)0x0;
      pcVar4 = (code *)FUN_005a07f0(s_m_SoundSystem_0068f8ec,s___AdamSource_AdamEngine_h_0068eb58,
                                    399,auStack_20);
      (*pcVar4)();
      puStack_8 = (undefined1 *)0xffffffff;
      if (iStack_1c != 0) {
        cVar1 = *(char *)(iStack_1c + -1);
        if ((cVar1 == '\0') || (cVar1 == -1)) {
          FUN_005fe5f0((char *)(iStack_1c + -1));
        }
        else {
          *(char *)(iStack_1c + -1) = cVar1 + -1;
        }
      }
      iStack_1c = 0;
      uStack_18 = 0;
      uStack_14 = 0;
    }
    FUN_0054ea00(&iStack_3c,puVar6,&uStack_38,0,1,0x3f800000,0,0);
    if ((iStack_3c != 0) &&
       (iVar3 = *(int *)(iStack_3c + 0x14) + -1, *(int *)(iStack_3c + 0x14) = iVar3, iVar3 == 0)) {
      FUN_005abfc0(0);
    }
    ExceptionList = pvStack_10;
    return;
  }
LAB_004cb1c3:
  ExceptionList = &local_c;
  FUN_005afe30(s_button_type_is_not_defined_00698cb0);
  ExceptionList = local_c;
  return;
}

