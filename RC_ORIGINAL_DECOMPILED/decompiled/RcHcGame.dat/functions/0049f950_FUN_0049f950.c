/*
 * FUN_0049f950 at 0049f950
 * undefined FUN_0049f950(void)
 * Address ranges: 0049f950-0049fa19
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * __fastcall FUN_0049f950(undefined4 param_1)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  char *pcVar4;
  char *pcVar5;
  undefined1 local_1;
  
  if ((DAT_00710381 & 1) == 0) {
    DAT_00710381 = DAT_00710381 | 1;
    local_1 = (undefined1)((uint)param_1 >> 0x18);
    DAT_00710390 = local_1;
    uVar2 = 0xffffffff;
    pcVar4 = s_No_Description_006951d4;
    do {
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    uVar2 = ~uVar2 - 1;
    DAT_00710394 = (char *)0x0;
    _DAT_00710398 = 0;
    _DAT_0071039c = 0;
    cVar1 = FUN_00401940(uVar2,1);
    if (cVar1 != '\0') {
      pcVar4 = s_No_Description_006951d4;
      pcVar5 = DAT_00710394;
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
      FUN_00404190(uVar2);
    }
    FUN_0060a57b(&LAB_0049fda0);
  }
  if ((DAT_006b993c != 0) && (uVar2 = DAT_006b9940 - DAT_006b993c >> 4, uVar2 != 0)) {
    return (undefined *)((-(uint)(DAT_006b993c != 0) & uVar2) * 0x10 + -0x10 + DAT_006b993c);
  }
  return &DAT_00710390;
}

