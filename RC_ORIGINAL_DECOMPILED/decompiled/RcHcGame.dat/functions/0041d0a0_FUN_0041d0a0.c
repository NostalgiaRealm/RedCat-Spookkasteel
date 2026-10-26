/*
 * FUN_0041d0a0 at 0041d0a0
 * undefined FUN_0041d0a0(void)
 * Address ranges: 0041d0a0-0041d1dd
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0041d0a0(int param_1,undefined4 param_2,float param_3)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  char *pcVar4;
  char *pcVar5;
  float10 fVar6;
  undefined1 local_1c [4];
  char *local_18;
  uint local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00621b98;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (3.4028235e+38 <= param_3) {
    ExceptionList = &local_c;
    fVar6 = (float10)FUN_00424950();
    param_3 = (float)fVar6;
  }
  if (param_1 == 6) {
    local_1c[0] = param_3._0_1_;
    uVar2 = 0xffffffff;
    pcVar4 = s_shoot1_0068f380;
    do {
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    uVar2 = ~uVar2 - 1;
    local_18 = (char *)0x0;
    local_14 = 0;
    local_10 = 0;
    cVar1 = FUN_00401940(uVar2,1);
    if (cVar1 != '\0') {
      pcVar4 = s_shoot1_0068f380;
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
      local_18[uVar2] = '\0';
      local_14 = uVar2;
    }
    local_4 = 0;
    FUN_004a0660(local_1c,0,0x3f800000);
    if (local_18 != (char *)0x0) {
      cVar1 = local_18[-1];
      if ((cVar1 != '\0') && (cVar1 != -1)) {
        local_18[-1] = cVar1 + -1;
        ExceptionList = local_c;
        return;
      }
      FUN_005fe5f0(local_18 + -1);
      ExceptionList = local_c;
      return;
    }
  }
  else {
    FUN_004233e0(param_1,param_2,param_3);
  }
  ExceptionList = local_c;
  return;
}

