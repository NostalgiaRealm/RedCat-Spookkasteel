/*
 * FUN_004a0d00 at 004a0d00
 * undefined FUN_004a0d00(void)
 * Address ranges: 004a0d00-004a0e1a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __fastcall FUN_004a0d00(int param_1)

{
  char extraout_AL;
  char cVar1;
  uint3 extraout_var;
  code *pcVar2;
  uint3 uVar3;
  uint3 extraout_var_00;
  uint uVar4;
  uint uVar5;
  undefined4 *puVar6;
  char *pcVar7;
  undefined4 *puVar8;
  undefined1 local_1c [4];
  undefined4 *local_18;
  uint local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0062cf08;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_004a0640();
  uVar3 = extraout_var;
  if (extraout_AL == '\0') {
    uVar4 = 0xffffffff;
    pcVar7 = &DAT_006b3f70;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar1 != '\0');
    uVar4 = ~uVar4 - 1;
    local_18 = (undefined4 *)0x0;
    local_14 = 0;
    local_10 = 0;
    cVar1 = FUN_00401940(uVar4,1);
    if (cVar1 != '\0') {
      puVar6 = (undefined4 *)&DAT_006b3f70;
      puVar8 = local_18;
      for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
        *puVar8 = *puVar6;
        puVar6 = puVar6 + 1;
        puVar8 = puVar8 + 1;
      }
      for (uVar5 = uVar4 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(undefined1 *)puVar8 = *(undefined1 *)puVar6;
        puVar6 = (undefined4 *)((int)puVar6 + 1);
        puVar8 = (undefined4 *)((int)puVar8 + 1);
      }
      *(undefined1 *)((int)local_18 + uVar4) = 0;
      local_14 = uVar4;
    }
    local_4 = 0;
    pcVar2 = (code *)FUN_005a07f0(s_IsInitialized___0069532c,
                                  s_D__Work_RCHorror_AdamSource_Adam_0069533c,0x116,local_1c);
    (*pcVar2)();
    uVar3 = 0;
    if (local_18 != (undefined4 *)0x0) {
      cVar1 = *(char *)((int)local_18 + -1);
      uVar3 = (uint3)((uint)local_18 >> 8);
      if ((cVar1 == '\0') || (cVar1 == -1)) {
        FUN_005fe5f0((char *)((int)local_18 + -1));
        uVar3 = extraout_var_00;
      }
      else {
        *(char *)((int)local_18 + -1) = cVar1 + -1;
      }
    }
  }
  if (*(char *)(param_1 + 0x44) != '\0') {
    ExceptionList = local_c;
    return CONCAT31(uVar3,1);
  }
  if (*(char *)(param_1 + 0x3c) != '\0') {
    ExceptionList = local_c;
    return (uint)uVar3 << 8;
  }
  ExceptionList = local_c;
  return CONCAT31(uVar3,*(undefined1 *)(param_1 + 0x4c));
}

