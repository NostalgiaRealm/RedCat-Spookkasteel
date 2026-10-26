/*
 * FUN_00433fd0 at 00433fd0
 * undefined FUN_00433fd0(void)
 * Address ranges: 00433fd0-004341a9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated MSVC RTTI/vtable 0x64c430 slot 22 for .?AVCRCPlayer@@. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated MSVC RTTI/vtable 0x64c430 slot 22 for
   .?AVCRCPlayer@@. Original bytes unchanged; names and types still inferred. */

void __fastcall FUN_00433fd0(int *param_1)

{
  char cVar1;
  code *pcVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  char *pcVar6;
  float10 fVar7;
  float fVar8;
  undefined1 auStack_28 [12];
  undefined1 local_1c [4];
  int iStack_18;
  void *pvStack_14;
  undefined4 uStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00623bb0;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  if (param_1[0x7c] == 0) {
    ExceptionList = &pvStack_c;
    FUN_004040a0(0);
    uVar5 = 0xffffffff;
    pcVar6 = &DAT_006b3f70;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    FUN_004040f0(&DAT_006b3f70,~uVar5 - 1);
    local_4 = 0;
    pcVar2 = (code *)FUN_005a07f0(s_m_GameProperties____0_0068f970,
                                  s___AdamSource_AdamPlayer_h_0068f988,0x15b,local_1c);
    (*pcVar2)();
    local_4 = 0xffffffff;
    FUN_004040a0(1);
  }
  iVar3 = FUN_0060a6f2(param_1[0x7c],0,&CAdamPlayerGameProperties::RTTI_Type_Descriptor,
                       &CRcPlayerProperties::RTTI_Type_Descriptor,0);
  if (iVar3 == 0) {
    uVar5 = 0xffffffff;
    pcVar6 = s_Could_not_find_player_properties_006904c4;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    iStack_18 = 0;
    pvStack_14 = (void *)0x0;
    uStack_10 = 0;
    FUN_004040f0(s_Could_not_find_player_properties_006904c4,~uVar5 - 1);
    local_4 = 1;
    pcVar2 = (code *)FUN_005a07f0(s_prop____NULL_006904b4,
                                  s_D__Work_RCHorror_RCSource_RCPlay_00690328,0x3cb,local_1c);
    (*pcVar2)();
    local_4 = 0xffffffff;
    if (iStack_18 != 0) {
      cVar1 = *(char *)(iStack_18 + -1);
      if ((cVar1 == '\0') || (cVar1 == -1)) {
        FUN_005fe5f0((char *)(iStack_18 + -1));
      }
      else {
        *(char *)(iStack_18 + -1) = cVar1 + -1;
      }
    }
  }
  iVar3 = FUN_00439cd0();
  if (-1 < iVar3) {
    cVar1 = FUN_00439ce0(0xffffffff);
    if (cVar1 != '\0') {
      iVar3 = *param_1;
      param_1[0x5f] = 0;
      param_1[0x5e] = 0;
      param_1[0x5d] = 0;
      fVar7 = (float10)FUN_0043b080();
      fVar8 = (float)fVar7;
      uVar4 = FUN_0043b060(auStack_28);
      (**(code **)(iVar3 + 0x70))(uVar4,fVar8);
      ExceptionList = pvStack_14;
      return;
    }
    iVar3 = DAT_006b915c;
    if (DAT_006b915c == 0) {
      iVar3 = FUN_004bc480();
    }
    FUN_0060a6f2(iVar3,0,&CAdamApplication::RTTI_Type_Descriptor,
                 &CRCApplication::RTTI_Type_Descriptor,1);
    iVar3 = FUN_00492190();
    *(undefined1 *)(iVar3 + 0xa4) = 1;
  }
  ExceptionList = pvStack_c;
  return;
}

