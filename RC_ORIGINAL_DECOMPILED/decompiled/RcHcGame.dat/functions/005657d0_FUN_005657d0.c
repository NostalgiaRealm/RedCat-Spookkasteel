/*
 * FUN_005657d0 at 005657d0
 * undefined FUN_005657d0(void)
 * Address ranges: 005657d0-0056580c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_005657d0(int param_1,int param_2,uint param_3)

{
  char *pcVar1;
  uint uVar2;
  uint uVar3;
  
  if ((param_2 != 0) && (uVar2 = 0, param_3 != 0)) {
    do {
      uVar3 = *(int *)(param_1 + 0x18) + 1;
      *(uint *)(param_1 + 0x18) = uVar3;
      uVar3 = uVar3 & 3;
      pcVar1 = (char *)(uVar2 + param_2);
      uVar2 = uVar2 + 1;
      *(char *)(uVar3 + 0x14 + param_1) = *(char *)(uVar3 + 0x14 + param_1) + *pcVar1;
    } while (uVar2 < param_3);
  }
  return;
}

