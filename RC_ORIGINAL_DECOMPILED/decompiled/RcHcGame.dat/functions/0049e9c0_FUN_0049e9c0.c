/*
 * FUN_0049e9c0 at 0049e9c0
 * undefined FUN_0049e9c0(void)
 * Address ranges: 0049e9c0-0049eaf4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0049e9c0(undefined4 *param_1)

{
  char cVar1;
  int iVar2;
  code *pcVar3;
  uint uVar4;
  char *pcVar5;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined1 local_1c [4];
  int local_18;
  undefined4 local_14;
  undefined4 local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0062cba8;
  pvStack_c = ExceptionList;
  local_28 = *param_1;
  local_24 = param_1[1];
  local_20 = param_1[2];
  iVar2 = DAT_006c8de0;
  ExceptionList = &pvStack_c;
  if (DAT_006c8de0 == 0) {
    ExceptionList = &pvStack_c;
    iVar2 = FUN_0055b280();
  }
  if (*(int *)(iVar2 + 0xfc) == 0) {
    local_1c[0] = param_1._0_1_;
    uVar4 = 0xffffffff;
    pcVar5 = &DAT_006b3f70;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    local_18 = 0;
    local_14 = 0;
    local_10 = 0;
    FUN_004040f0(&DAT_006b3f70,~uVar4 - 1);
    local_4 = 0;
    pcVar3 = (code *)FUN_005a07f0(s_m_SoundSystem_0068f8ec,s___AdamSource_AdamEngine_h_0068eb58,399,
                                  local_1c);
    (*pcVar3)();
    local_4 = 0xffffffff;
    if (local_18 != 0) {
      cVar1 = *(char *)(local_18 + -1);
      if ((cVar1 == '\0') || (cVar1 == -1)) {
        FUN_005fe5f0((char *)(local_18 + -1));
      }
      else {
        *(char *)(local_18 + -1) = cVar1 + -1;
      }
    }
    local_18 = 0;
    local_14 = 0;
    local_10 = 0;
  }
  FUN_0054ea00(&param_1,&DAT_006ba178,&local_28,0,1,0x3f800000,0,0);
  if ((param_1 != (undefined4 *)0x0) &&
     (iVar2 = param_1[5], param_1[5] = iVar2 + -1, iVar2 + -1 == 0)) {
    FUN_005abfc0(0);
  }
  ExceptionList = pvStack_c;
  return;
}

