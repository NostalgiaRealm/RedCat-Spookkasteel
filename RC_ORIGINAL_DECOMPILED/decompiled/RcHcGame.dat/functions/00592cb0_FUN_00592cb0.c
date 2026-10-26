/*
 * FUN_00592cb0 at 00592cb0
 * undefined FUN_00592cb0(void)
 * Address ranges: 00592cb0-00592da3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_00592cb0(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  char *pcVar6;
  undefined1 local_1c [4];
  char *local_18;
  undefined4 local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00643938;
  local_c = ExceptionList;
  if (*(int *)(param_1 + 0x30c) == 0) {
    uVar3 = 0xffffffff;
    pcVar5 = s_CAdamConsole_006a66d0;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    uVar3 = ~uVar3 - 1;
    local_18 = (char *)0x0;
    local_14 = 0;
    local_10 = 0;
    ExceptionList = &local_c;
    cVar1 = FUN_00401940(uVar3,1);
    if (cVar1 != '\0') {
      pcVar5 = s_CAdamConsole_006a66d0;
      pcVar6 = local_18;
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
      FUN_00404190(uVar3);
    }
    local_4 = 0;
    if (DAT_006b915c == 0) {
      FUN_004bc480();
    }
    uVar2 = FUN_005aa760(local_1c,1);
    *(undefined4 *)(param_1 + 0x30c) = uVar2;
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

