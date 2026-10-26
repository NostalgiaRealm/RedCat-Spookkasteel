/*
 * FUN_004ff640 at 004ff640
 * undefined FUN_004ff640(void)
 * Address ranges: 004ff640-004ff717
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_004ff640(undefined4 param_1)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  char *pcVar4;
  char *pcVar5;
  undefined1 local_1;
  
  local_1 = (undefined1)((uint)param_1 >> 0x18);
  DAT_006b9748 = local_1;
  uVar2 = 0xffffffff;
  pcVar4 = s_AfterFlashCommand_0069d784;
  do {
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2 - 1;
  DAT_006b974c = (char *)0x0;
  _DAT_006b9750 = 0;
  DAT_006b9754 = 0;
  if (0xfffffffd < uVar2) {
    FUN_005fe5fb();
  }
  if (((DAT_006b974c == (char *)0x0) || (cVar1 = DAT_006b974c[-1], cVar1 == '\0')) || (cVar1 == -1))
  {
    if (uVar2 == 0) {
      FUN_004040a0(1);
      return;
    }
    if ((DAT_006b9754 < 0x20) && (uVar2 <= DAT_006b9754)) goto LAB_004ff6ed;
    FUN_004040a0(1);
  }
  else if (uVar2 == 0) {
    DAT_006b974c[-1] = cVar1 + -1;
    FUN_004040a0(0);
    return;
  }
  FUN_00401a60(uVar2);
LAB_004ff6ed:
  pcVar4 = s_AfterFlashCommand_0069d784;
  pcVar5 = DAT_006b974c;
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
  _DAT_006b9750 = uVar2;
  DAT_006b974c[uVar2] = '\0';
  return;
}

