/*
 * FUN_0050ab70 at 0050ab70
 * undefined FUN_0050ab70(void)
 * Address ranges: 0050ab70-0050ac98
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_0050ab70(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  uint uVar5;
  uint uVar6;
  char *pcVar7;
  char *pcVar8;
  undefined1 local_1c [4];
  char *local_18;
  uint local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_006367c0;
  local_c = ExceptionList;
  iVar3 = *(int *)(param_1 + 0x50);
  local_4 = 0;
  ExceptionList = &local_c;
  if (iVar3 != 0) {
    iVar2 = *(int *)(iVar3 + 0x14) + -1;
    ExceptionList = &local_c;
    *(int *)(iVar3 + 0x14) = iVar2;
    if (iVar2 == 0) {
      FUN_005abfc0(0);
    }
    *(undefined4 *)(param_1 + 0x50) = 0;
  }
  local_4 = 0xffffffff;
  FUN_0050aa70();
  iVar3 = FUN_005c4120();
  if (iVar3 == 0) {
    uVar5 = 0xffffffff;
    pcVar7 = s_CAdamBitmap__ClearAlphaBitmap___f_0069e630;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar1 != '\0');
    uVar5 = ~uVar5 - 1;
    local_18 = (char *)0x0;
    local_14 = 0;
    local_10 = 0;
    cVar1 = FUN_00401940(uVar5,1);
    if (cVar1 != '\0') {
      pcVar7 = s_CAdamBitmap__ClearAlphaBitmap___f_0069e630;
      pcVar8 = local_18;
      for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
        *(undefined4 *)pcVar8 = *(undefined4 *)pcVar7;
        pcVar7 = pcVar7 + 4;
        pcVar8 = pcVar8 + 4;
      }
      for (uVar6 = uVar5 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
        *pcVar8 = *pcVar7;
        pcVar7 = pcVar7 + 1;
        pcVar8 = pcVar8 + 1;
      }
      local_18[uVar5] = '\0';
      local_14 = uVar5;
    }
    local_4 = 1;
    pcVar4 = (code *)FUN_005a07f0(s_result_00691bc0,s_D__Work_RCHorror_AdamSource_Adam_0069e554,0x47
                                  ,local_1c);
    (*pcVar4)();
    if (local_18 != (char *)0x0) {
      cVar1 = local_18[-1];
      if ((cVar1 != '\0') && (cVar1 != -1)) {
        local_18[-1] = cVar1 + -1;
        ExceptionList = local_c;
        return;
      }
      FUN_005fe5f0(local_18 + -1);
    }
  }
  ExceptionList = local_c;
  return;
}

