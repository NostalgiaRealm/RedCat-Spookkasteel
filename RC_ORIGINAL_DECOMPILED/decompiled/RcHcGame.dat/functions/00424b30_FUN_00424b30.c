/*
 * FUN_00424b30 at 00424b30
 * undefined FUN_00424b30(void)
 * Address ranges: 00424b30-00424c46
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_00424b30(undefined4 param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  char *pcVar6;
  undefined1 local_2c [4];
  char *local_28;
  uint local_24;
  undefined4 local_20;
  undefined1 local_1c [4];
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00622760;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar2 = FUN_004249a0();
  if (iVar2 != 0) {
    uVar3 = 0xffffffff;
    pcVar5 = s_PlayAmbient_0068f9d0;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    uVar3 = ~uVar3 - 1;
    local_28 = (char *)0x0;
    local_24 = 0;
    local_20 = 0;
    cVar1 = FUN_00401940(uVar3,1);
    if (cVar1 != '\0') {
      pcVar5 = s_PlayAmbient_0068f9d0;
      pcVar6 = local_28;
      for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
        *(undefined4 *)pcVar6 = *(undefined4 *)pcVar5;
        pcVar5 = pcVar5 + 4;
        pcVar6 = pcVar6 + 4;
      }
      for (uVar4 = uVar3 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
        *pcVar6 = *pcVar5;
        pcVar5 = pcVar5 + 1;
        pcVar6 = pcVar6 + 1;
      }
      local_28[uVar3] = '\0';
      local_24 = uVar3;
    }
    local_18 = 0;
    local_14 = 0;
    local_10 = 0;
    local_4._0_1_ = 1;
    local_4._1_3_ = 0;
    FUN_00503c30(local_2c,param_1,local_1c);
    local_4 = (uint)local_4._1_3_ << 8;
    FUN_005e2320();
    if (local_28 != (char *)0x0) {
      cVar1 = local_28[-1];
      if ((cVar1 != '\0') && (cVar1 != -1)) {
        local_28[-1] = cVar1 + -1;
        ExceptionList = local_c;
        return;
      }
      FUN_005fe5f0(local_28 + -1);
    }
  }
  ExceptionList = local_c;
  return;
}

