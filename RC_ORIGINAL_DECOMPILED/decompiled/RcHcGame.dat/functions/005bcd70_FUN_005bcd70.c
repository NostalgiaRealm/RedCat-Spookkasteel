/*
 * FUN_005bcd70 at 005bcd70
 * undefined FUN_005bcd70(void)
 * Address ranges: 005bcd70-005bcdc4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_005bcd70(int param_1)

{
  short *psVar1;
  int iVar2;
  
  psVar1 = (short *)(param_1 + 0x34f98);
  iVar2 = 0x14;
  do {
    if (psVar1[0x14] == 1) {
      *psVar1 = *psVar1 + 0xe;
    }
    else {
      *psVar1 = *psVar1 + -0xe;
    }
    if (*psVar1 < 0x32) {
      *psVar1 = *psVar1 + 0xe;
      psVar1[0x14] = 1;
    }
    if (0xff < *psVar1) {
      *psVar1 = *psVar1 + -0xe;
      psVar1[0x14] = 0;
    }
    psVar1 = psVar1 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return;
}

