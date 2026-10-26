/*
 * FUN_0060e925 at 0060e925
 * undefined FUN_0060e925(void)
 * Address ranges: 0060e925-0060e9e4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

char * FUN_0060e925(int param_1)

{
  uint uVar1;
  char *pcVar2;
  int iVar3;
  short *psVar4;
  
  uVar1 = *(uint *)(param_1 + 0xc);
  if ((uVar1 & 0x100) == 0) {
    if ((uVar1 & 3) == 0) {
      if ((uVar1 & 0xc) == 0) {
        if ((uVar1 & 0x10) == 0) {
          pcVar2 = &DAT_006b2988 + (uint)*(ushort *)(param_1 + 8) * 8;
        }
        else {
          pcVar2 = &DAT_006b298a + (uint)*(ushort *)(param_1 + 8) * 8;
        }
      }
      else {
        pcVar2 = &DAT_006b298c + (uint)*(ushort *)(param_1 + 8) * 8;
      }
    }
    else {
      pcVar2 = &DAT_006b298e + (uint)*(ushort *)(param_1 + 8) * 8;
    }
    if (((*pcVar2 != '\0') && (*pcVar2 != -0x20)) || (pcVar2[1] == '\0')) {
      pcVar2 = (char *)0x0;
    }
  }
  else {
    pcVar2 = (char *)0x0;
    iVar3 = 0;
    psVar4 = &DAT_006b2910;
    do {
      if (*psVar4 == *(short *)(param_1 + 8)) {
        if ((uVar1 & 3) != 0) {
          return (char *)(iVar3 * 10 + 0x6b2918);
        }
        if ((uVar1 & 0xc) != 0) {
          return (char *)(iVar3 * 10 + 0x6b2916);
        }
        if ((uVar1 & 0x10) != 0) {
          return (char *)(iVar3 * 10 + 0x6b2914);
        }
        return (char *)(iVar3 * 10 + 0x6b2912);
      }
      psVar4 = psVar4 + 5;
      iVar3 = iVar3 + 1;
    } while ((int)psVar4 < 0x6b2988);
  }
  return pcVar2;
}

