/*
 * FUN_00471400 at 00471400
 * undefined FUN_00471400(void)
 * Address ranges: 00471400-004714d7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00471400(undefined4 param_1)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  char *pcVar4;
  char *pcVar5;
  undefined1 local_1;
  
  local_1 = (undefined1)((uint)param_1 >> 0x18);
  DAT_006b86e8 = local_1;
  uVar2 = 0xffffffff;
  pcVar4 = s_Magiev1_wav_00692930;
  do {
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2 - 1;
  DAT_006b86ec = (char *)0x0;
  _DAT_006b86f0 = 0;
  DAT_006b86f4 = 0;
  if ((((uVar2 < 0xfffffffe) || (FUN_005fe5fb(), DAT_006b86ec == (char *)0x0)) ||
      (cVar1 = DAT_006b86ec[-1], cVar1 == '\0')) || (cVar1 == -1)) {
    if (uVar2 == 0) {
      FUN_004040a0(1);
      return;
    }
    if ((DAT_006b86f4 < 0x20) && (uVar2 <= DAT_006b86f4)) goto LAB_004714ad;
    FUN_004040a0(1);
  }
  else if (uVar2 == 0) {
    DAT_006b86ec[-1] = cVar1 + -1;
    FUN_004040a0(0);
    return;
  }
  FUN_00401a60(uVar2);
LAB_004714ad:
  pcVar4 = s_Magiev1_wav_00692930;
  pcVar5 = DAT_006b86ec;
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
  _DAT_006b86f0 = uVar2;
  DAT_006b86ec[uVar2] = '\0';
  return;
}

