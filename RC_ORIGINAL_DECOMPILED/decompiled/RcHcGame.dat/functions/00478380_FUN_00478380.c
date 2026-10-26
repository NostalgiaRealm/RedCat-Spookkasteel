/*
 * FUN_00478380 at 00478380
 * undefined FUN_00478380(void)
 * Address ranges: 00478380-00478457
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00478380(undefined4 param_1)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  char *pcVar4;
  char *pcVar5;
  undefined1 local_1;
  
  local_1 = (undefined1)((uint)param_1 >> 0x18);
  DAT_006b87b8 = local_1;
  uVar2 = 0xffffffff;
  pcVar4 = s_Magiev12_wav_00692d7c;
  do {
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2 - 1;
  DAT_006b87bc = (char *)0x0;
  _DAT_006b87c0 = 0;
  DAT_006b87c4 = 0;
  if ((((uVar2 < 0xfffffffe) || (FUN_005fe5fb(), DAT_006b87bc == (char *)0x0)) ||
      (cVar1 = DAT_006b87bc[-1], cVar1 == '\0')) || (cVar1 == -1)) {
    if (uVar2 == 0) {
      FUN_004040a0(1);
      return;
    }
    if ((DAT_006b87c4 < 0x20) && (uVar2 <= DAT_006b87c4)) goto LAB_0047842d;
    FUN_004040a0(1);
  }
  else if (uVar2 == 0) {
    DAT_006b87bc[-1] = cVar1 + -1;
    FUN_004040a0(0);
    return;
  }
  FUN_00401a60(uVar2);
LAB_0047842d:
  pcVar4 = s_Magiev12_wav_00692d7c;
  pcVar5 = DAT_006b87bc;
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
  _DAT_006b87c0 = uVar2;
  DAT_006b87bc[uVar2] = '\0';
  return;
}

