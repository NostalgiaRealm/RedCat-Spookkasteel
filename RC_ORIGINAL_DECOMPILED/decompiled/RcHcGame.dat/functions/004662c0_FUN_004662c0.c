/*
 * FUN_004662c0 at 004662c0
 * undefined FUN_004662c0(void)
 * Address ranges: 004662c0-00466397
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_004662c0(undefined4 param_1)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  char *pcVar4;
  char *pcVar5;
  undefined1 local_1;
  
  local_1 = (undefined1)((uint)param_1 >> 0x18);
  DAT_006b8588 = local_1;
  uVar2 = 0xffffffff;
  pcVar4 = s_Magiev1_wav_00692930;
  do {
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2 - 1;
  DAT_006b858c = (char *)0x0;
  _DAT_006b8590 = 0;
  DAT_006b8594 = 0;
  if ((((uVar2 < 0xfffffffe) || (FUN_005fe5fb(), DAT_006b858c == (char *)0x0)) ||
      (cVar1 = DAT_006b858c[-1], cVar1 == '\0')) || (cVar1 == -1)) {
    if (uVar2 == 0) {
      FUN_004040a0(1);
      return;
    }
    if ((DAT_006b8594 < 0x20) && (uVar2 <= DAT_006b8594)) goto LAB_0046636d;
    FUN_004040a0(1);
  }
  else if (uVar2 == 0) {
    DAT_006b858c[-1] = cVar1 + -1;
    FUN_004040a0(0);
    return;
  }
  FUN_00401a60(uVar2);
LAB_0046636d:
  pcVar4 = s_Magiev1_wav_00692930;
  pcVar5 = DAT_006b858c;
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
  _DAT_006b8590 = uVar2;
  DAT_006b858c[uVar2] = '\0';
  return;
}

