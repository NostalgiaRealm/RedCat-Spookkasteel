/*
 * FUN_00402d1c at 00402d1c
 * undefined __register FUN_00402d1c(uint param_1, int param_2, char * param_3)
 * Address ranges: 00402d1c-00402d7a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00402d1c(uint param_1,int param_2,char *param_3)

{
  ulonglong uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  char acStack_25 [21];
  int local_10;
  
  local_10 = param_2;
  uVar2 = (param_1 ^ (int)param_1 >> 0x1f) - ((int)param_1 >> 0x1f);
  iVar4 = 0;
  do {
    iVar3 = iVar4;
    uVar1 = (ulonglong)uVar2;
    uVar2 = uVar2 / 10;
    acStack_25[iVar3 + 1] = (char)(uVar1 % 10) + '0';
    iVar4 = iVar3 + 1;
  } while (uVar2 != 0);
  if ((int)param_1 < 0) {
    acStack_25[iVar3 + 2] = '-';
    iVar4 = iVar3 + 2;
  }
  *param_3 = (char)iVar4;
  pcVar5 = param_3 + 1;
  if (0xff < local_10) {
    local_10 = 0xff;
  }
  iVar3 = local_10 - iVar4;
  if (iVar3 != 0 && iVar4 <= local_10) {
    *param_3 = *param_3 + (char)iVar3;
    for (; iVar3 != 0; iVar3 = iVar3 + -1) {
      *pcVar5 = ' ';
      pcVar5 = pcVar5 + 1;
    }
  }
  do {
    *pcVar5 = acStack_25[iVar4];
    pcVar5 = pcVar5 + 1;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  return;
}

