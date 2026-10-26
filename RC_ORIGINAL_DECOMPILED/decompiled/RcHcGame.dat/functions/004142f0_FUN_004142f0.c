/*
 * FUN_004142f0 at 004142f0
 * undefined FUN_004142f0(void)
 * Address ranges: 004142f0-004143fd
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_004142f0(int param_1)

{
  char cVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  char *pcVar6;
  undefined1 local_1c [4];
  int local_18;
  undefined4 local_14;
  undefined4 local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_00621110;
  pvStack_c = ExceptionList;
  uVar5 = 0;
  local_4 = 0;
  ExceptionList = &pvStack_c;
  if (param_1 == 0) {
    local_1c[0] = 0;
    uVar4 = 0xffffffff;
    pcVar6 = &DAT_006b3f70;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    local_18 = 0;
    local_14 = 0;
    local_10 = 0;
    ExceptionList = &pvStack_c;
    FUN_004040f0(&DAT_006b3f70,~uVar4 - 1);
    local_4._0_1_ = 1;
    pcVar2 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,0xb6,
                                  local_1c);
    (*pcVar2)();
    local_4 = (uint)local_4._1_3_ << 8;
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
  iVar3 = FUN_005530d0();
  if (iVar3 != 0) {
    uVar5 = FUN_0060a6f2(iVar3,0,&CAdamObject::RTTI_Type_Descriptor,
                         &CAdamActor::RTTI_Type_Descriptor,0);
  }
  local_4 = 0xffffffff;
  if ((param_1 != 0) &&
     (iVar3 = *(int *)(param_1 + 0x14) + -1, *(int *)(param_1 + 0x14) = iVar3, iVar3 == 0)) {
    FUN_005abfc0(0);
  }
  ExceptionList = pvStack_c;
  return uVar5;
}

